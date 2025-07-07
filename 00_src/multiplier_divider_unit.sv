import pipeline_pkg::*;


module multiplier_divider_unit (
    input  logic        i_clk              , 
    input  logic        i_rst              , 
    input  logic        i_flush_MUL        , 
    input  logic        i_flush_DIV        , 
    input  mul_t        i_abt_mul_dat      ,
    output mul_status_t o_mul_fb_dat       ,   // Feedback dat from MUL module 
    output mul_status_t o_div_fb_dat       ,   // Feedback dat from DIV module 
    output logic        o_mul_div_stall    ,   // Stall the pipeline for the {DIV, MUL} to proceed to WB stage the next cycle
    output logic        o_mul_div_wb_sel   ,   // Indicate WB stage to select MUL_DIV
    output pipe_buff_t  o_mul_mem_pkg      // Result
);

// op_sel = 2'b00:  result = Multiplication[31:0]  - MUL Low
// op_sel = 2'b01:  result = Multiplication[63:32] - MUL High
// op_sel = 2'b10:  result = Quotient              - DIV Quotient
// op_sel = 2'b11:  result = Remainder             - DIV Remainder

logic [63:0] mul_product;
logic [31:0] mul_product_low;
logic [31:0] mul_product_high;
logic [31:0] div_quotient;
logic [31:0] div_remainder;

logic [31:0] operand_a;
logic [31:0] operand_b;
logic        op_a_signed_en;
logic        op_b_signed_en;

logic [1:0] mul_op; // mul_op = 2'b00: rd = (rs1 * rs2) [31:0]  (signed   x signed)                                                            
                    // mul_op = 2'b01: rd = (rs1 * rs2) [63:32] (signed   x signed)                               
                    // mul_op = 2'b10: rd = (rs1 * rs2) [63:32] (signed   x unsigned)                                     
                    // mul_op = 2'b11: rd = (rs1 * rs2) [63:32] (unsigned x unsigned)     

logic [1:0] div_op; // div_op = 2'b00: DIV  -  rd = (rs1 / rs2)  (signed)                                  
                    // div_op = 2'b01: DIVU -  rd = (rs1 / rs2)  (unsigned)                                
                    // div_op = 2'b10: REM  -  rd = (rs1 % rs2)  (signed)                                  
                    // div_op = 2'b11: REMU -  rd = (rs1 % rs2)  (unsigned)    


logic mul_start;   // High to Start Multiplication operation
logic div_start;   // High to Start Division operation

logic mul_signed_en;
logic div_signed_en;

logic mul_done;    // Indicate the Multiplication is DONE and the result is ready in the next cycle
logic mul_ready;   // Indicate the Multiplier is IDLE and ready to receive new inputs
logic div_done;    // Indicate the Division is DONE and the result is ready in the next cycle
logic div_ready;   // Indicate the Divider  is IDLE and ready to receive new inputs
logic div_error;   // Indicate a division by zero exception (FIXME: Havent used yet)

logic flush_mul;
logic flush_div;

assign flush_mul = (i_rst) | i_flush_MUL;
assign flush_div = (i_rst) | i_flush_DIV;

assign mul_product_high  = mul_product[63:32]; 
assign mul_product_low   = mul_product[31:0]; 

assign mul_start = i_abt_mul_dat.mul_start & i_abt_mul_dat.valid;
assign div_start = i_abt_mul_dat.div_start & i_abt_mul_dat.valid;
assign mul_op    = i_abt_mul_dat.mul_op;
assign div_op    = i_abt_mul_dat.div_op;
assign operand_a = i_abt_mul_dat.operand_a;
assign operand_b = i_abt_mul_dat.operand_b;

assign op_a_signed_en = ~(mul_op[1] & mul_op[0]); // Signed when Mul_op != 2'b11  
assign op_b_signed_en =  ~mul_op[1];              // Signed when Mul_op == 2'b0X
assign div_signed_en  =  ~div_op[0];





multiplier_32bit  MUL (
    .i_clk            (i_clk          ),  
    .i_rst            (flush_mul      ),  
    .i_op_a_signed_en (op_a_signed_en ),  // Enable signed multiplication for operand A 
    .i_op_b_signed_en (op_b_signed_en ),  // Enable signed multiplication for operand B 
    .i_start          (mul_start      ),  
    .i_a              (operand_a      ),  
    .i_b              (operand_b      ),  
    .o_product        (mul_product    ),  
    .o_ready          (mul_ready      ),  
    .o_done           (mul_done       )   
);



divider_32bit  DIV (
    .i_clk       (i_clk         ),    
    .i_rst       (flush_div     ),    
    .i_signed_en (div_signed_en ),    // Enable signed Division   
    .i_start     (div_start     ),    
    .i_a         (operand_a     ),    // A divide by B
    .i_b         (operand_b     ),    
    .o_quotient  (div_quotient  ),    
    .o_remainder (div_remainder ),    
    .o_ready     (div_ready     ),    
    .o_done      (div_done      ),    
    .o_error     (div_error     )     // Divide by 0
);





// ------------------------------ EX/MEM stage handling ---------------------------
typedef enum logic [1:0] {
    ACTIVE,
    MUL_DONE,
    DIV_DONE,
    BOTH_DONE
}  state_t;

// Hold the control signals of MUL and DIV operation while executing
typedef struct packed  {       
        logic [4:0]   rd_addr;    
        logic [1:0]   op;
        logic         wren;       
        logic         valid;    
} dest_ctrl_e;  // Destination control signals

state_t      Pre_state;
state_t      Next_state;
logic        ACTIVE_stage;
logic        MUL_DONE_stage;
logic        DIV_DONE_stage;
logic        BOTH_DONE_stage;

assign ACTIVE_stage    = (Pre_state == ACTIVE   );
assign MUL_DONE_stage  = (Pre_state == MUL_DONE );
assign DIV_DONE_stage  = (Pre_state == DIV_DONE );
assign BOTH_DONE_stage = (Pre_state == BOTH_DONE);

dest_ctrl_e  mul_dest_ctrl_d;
dest_ctrl_e  mul_dest_ctrl_q;
dest_ctrl_e  div_dest_ctrl_d;
dest_ctrl_e  div_dest_ctrl_q;
dest_ctrl_e  dest_ctrl_pkg;
logic [31:0] dest_data;
logic        mul_dest_ctrl_reg_clr;
logic        div_dest_ctrl_reg_clr;

logic [1:0]  mul_div_data_sel;
logic        mul_div_ctrl_sel;
logic        mul_proceed;
logic        div_proceed;
logic        both_done;
logic        mul_stall; 
logic        div_stall; 

logic [1:0]  mul_op_q;
logic [1:0]  div_op_q;

assign mul_dest_ctrl_d.rd_addr     =  i_abt_mul_dat.rd_addr;
assign mul_dest_ctrl_d.wren        =  i_abt_mul_dat.wren; 
assign mul_dest_ctrl_d.valid       =  i_abt_mul_dat.valid;
assign mul_dest_ctrl_d.op          =  mul_op;

assign div_dest_ctrl_d.rd_addr     =  i_abt_mul_dat.rd_addr;
assign div_dest_ctrl_d.wren        =  i_abt_mul_dat.wren; 
assign div_dest_ctrl_d.valid       =  i_abt_mul_dat.valid;
assign div_dest_ctrl_d.op          =  div_op;

assign mul_op_q = mul_dest_ctrl_q.op; 
assign div_op_q = div_dest_ctrl_q.op; 


// State transition
always_ff @(posedge i_clk) 
    if (i_rst)          Pre_state <= ACTIVE;
    else                Pre_state <= Next_state;

always_comb begin
    case (Pre_state)
        ACTIVE:    if      (both_done)        Next_state = BOTH_DONE;
                   else if (mul_done)         Next_state = MUL_DONE;
                   else if (div_done)         Next_state = DIV_DONE;
                   else                       Next_state = ACTIVE;

        MUL_DONE:  if (div_done)              Next_state = DIV_DONE;
                   else                       Next_state = ACTIVE;

        DIV_DONE:  if (mul_done)              Next_state = MUL_DONE;
                   else                       Next_state = ACTIVE;

        BOTH_DONE:                            Next_state = DIV_DONE;  // MUL proceed first, DIV later

        default:                              Next_state = ACTIVE;
    endcase
end

// MUL proceed first when both MUL and DIV are done
assign mul_proceed = (MUL_DONE_stage) | (BOTH_DONE_stage);  
assign div_proceed = (DIV_DONE_stage); 
assign both_done   = (mul_done) & (div_done);

// mul_div_data_sel = 2'b00: result = mul_product[63:32] - mul_op != 2'b00
// mul_div_data_sel = 2'b01: result = mul_product[31:0]  - mul_op == 2'b00
// mul_div_data_sel = 2'b10: result = div_quotient       - div_op == 2'b0X
// mul_div_data_sel = 2'b11: result = div_remainder      - div_op == 2'b1X

assign mul_div_data_sel[1] = (div_proceed);   
assign mul_div_data_sel[0] = (div_proceed &  div_op_q[1]) |
                             (mul_proceed & ~mul_op_q[0] & ~mul_op_q[1]);

assign mul_div_ctrl_sel    = (div_proceed);

assign mul_dest_ctrl_reg_clr = (flush_mul) | (mul_proceed & ~mul_start);
assign div_dest_ctrl_reg_clr = (flush_div) | (div_proceed & ~div_start);


register #(.WIDTH($bits(mul_dest_ctrl_q))) mul_instr_ctrl_buffer (
        .clk  (i_clk                 ),
        .rst  (mul_dest_ctrl_reg_clr ),  // FIXME: Might be a bad practice to include "mul_proceed"
        .en   (mul_start             ),  // Only store the Data when the instruction is Valid to start
        .D    (mul_dest_ctrl_d       ),
        .Q    (mul_dest_ctrl_q       )
);

register #(.WIDTH($bits(div_dest_ctrl_q))) div_instr_ctrl_buffer (
        .clk  (i_clk                 ),
        .rst  (div_dest_ctrl_reg_clr ),  // FIXME: Might be a bad practice to include "div_proceed"
        .en   (div_start             ),  // Only store the Data when the instruction is Valid to start
        .D    (div_dest_ctrl_d       ),
        .Q    (div_dest_ctrl_q       )
);    


mux_2x1  #(.WIDTH($bits(mul_dest_ctrl_q)))    Select_control_signal (
        .sel  (mul_div_ctrl_sel ),
        .i_0  (mul_dest_ctrl_q  ),  
        .i_1  (div_dest_ctrl_q  ), 
        .o_mux(dest_ctrl_pkg    )
);

mux_4x1      Select_data (
        .sel  (mul_div_data_sel   ),
        .i_0  (mul_product[63:32] ),  
        .i_1  (mul_product[31:0]  ),
        .i_2  (div_quotient       ),
        .i_3  (div_remainder      ),
        .o_mux(dest_data          )
);



// Output
assign o_mul_mem_pkg.rd_data     = dest_data;
assign o_mul_mem_pkg.rd_addr     = dest_ctrl_pkg.rd_addr;
assign o_mul_mem_pkg.wren        = dest_ctrl_pkg.wren;
assign o_mul_mem_pkg.valid       = dest_ctrl_pkg.valid;

assign o_mul_fb_dat.rd_addr    =  mul_dest_ctrl_q.rd_addr;  
assign o_mul_fb_dat.busy       = ~mul_ready;

assign o_div_fb_dat.rd_addr    =  div_dest_ctrl_q.rd_addr;  
assign o_div_fb_dat.busy       = ~div_ready;

assign o_mul_div_stall         = (mul_done | div_done) | (BOTH_DONE_stage);  
assign o_mul_div_wb_sel        = (MUL_DONE_stage) | (DIV_DONE_stage) | (BOTH_DONE_stage);

endmodule : multiplier_divider_unit



