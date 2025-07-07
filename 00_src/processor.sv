import pipeline_pkg::*;

module processor (
    input  logic        clk_i        ,
    input  logic        rst        ,
    input  logic [31:0] input_switch ,  // Input data from Switch
    input  logic [31:0] input_port   ,  // General-Purpose Input  PORT
    output logic [31:0] output_port_A,  // General-Purpose Output PORT A
    output logic [31:0] output_port_B,  // General-Purpose Output PORT B
    output logic [31:0] output_port_C,  // General-Purpose Output PORT C
    output logic [31:0] output_port_D   // General-Purpose Output PORT D


    // DEBUG
    // output logic [31:0] debug_next_PC_d,
    // output logic [31:0] debug_next_PC_q,
    // output logic [31:0] debug_PC_at_ID,
    // output logic [31:0] debug_PC_at_ALU,
    // output logic [3:0]  debug_valid_bit,  
    // output logic [1:0]  debug_pc_sel,        // LEDR[5:4]
    // output logic        debug_branch_taken,  // LEDR[3]
    // output logic        debug_prd_en,        // LEDR[2]
    // output logic        debug_branch_miss,   // LEDR[1]
    // output logic        debug_stall          // LEDR[0]


);


/* verilator lint_off UNOPTFLAT */

// logic    ecall;
// logic    ebreak;

logic IF_buffer_en;    // IF/ID  buffer enable
logic ID_buffer_en;    // ID/EX  buffer enable
logic EX_buffer_en;    // EX/MEM buffer enable
logic MEM_buffer_en;   // MEM/WB buffer enable
logic branch_miss;     // HIGH when Branch Misprediction occurs in General (both case)

logic stall_by_hazard_detection;
logic stall_by_mul_div_proceed;

logic ID_flush;
logic EX_flush;
logic MEM_flush;


assign ID_flush  = (rst) | (branch_miss) | (stall_by_hazard_detection);
assign EX_flush  = (rst);
assign MEM_flush = (rst);

assign IF_buffer_en    = ~(stall_by_mul_div_proceed | stall_by_hazard_detection);
assign ID_buffer_en    = ~(stall_by_mul_div_proceed);
assign EX_buffer_en    = ~(stall_by_mul_div_proceed);
assign MEM_buffer_en   = ~(stall_by_mul_div_proceed);
// ------------------------------- FETCH ----------------------------------------
branch_t  alu_prd_pkg;
fetch_t   fetch_pkg;

fetch_unit  Fetch_Unit (
    .i_clk           (clk_i         ),
    .i_rst           (rst           ),
    .i_fetch_buff_en (IF_buffer_en  ),   // IF/ID buffer enable
    .i_alu_prd_pkg   (alu_prd_pkg   ),   // Input Data package from ALU of the executing branch instruction
    .o_fetch_pkg     (fetch_pkg     ),   // Output data packed of Fetch stage (Buffered)
    .o_branch_miss   (branch_miss   )    // ACTIVE HIGH - Branch Misprediction in General

    //.db_next_PC_d    (debug_next_PC_d),
    //.db_next_PC_q    (debug_next_PC_q),
    //.db_pc_sel       (debug_pc_sel   )    
);



// ------------------------------- DECODE (ID) ---------------------------------------

decode_t      decode_pkg_ID;  // Decode data package in ID stages
decode_t      decode_pkg_EX;  // Decode data package in EX stages
mul_status_t  mul_status_pkg;
mul_status_t  div_status_pkg;
hazard_req_t  decode_hazard_pkg;

writeback_t   wb_rf_pkg;         // Writeback data package
logic [63:0]  EX_rs_data;
logic [31:0]  rf_rs1_data;    // RS1 data from Regfile (rf)
logic [31:0]  rf_rs2_data;    // RS2 data from Regfile (rf)
logic [31:0]  WB_rs1_forwarded;
logic [31:0]  WB_rs2_forwarded;
logic         WB_rs1_forward_en;
logic         WB_rs2_forward_en;

logic         flush_mul; // Discard the current MUL instruction 
logic         flush_div; // Discard the current DIV instruction 

decoder      Instr_Decode(
    .i_invalidate       (stall_by_hazard_detection  ),    // Insert a NOP instruction when a Stall is triggered
    .i_fetch_dcd_pkg    (fetch_pkg                  ),    // Input  data package from Fetch Stage
    .o_decode_pkg       (decode_pkg_ID              ),    // Output decoded data package 
    .o_decode_hazard_pkg(decode_hazard_pkg          ),    // Output decoded data package 
    .o_ebreak           (),                   // Reserved
    .o_ecall            ()                    // Reserved
);


regfile Register_File   (                       
        .i_clk     (clk_i                 ),
        .i_rst     (rst                   ),
        .i_wb_pkg  (wb_rf_pkg             ),
        .i_rs1_addr(decode_pkg_ID.rs1_addr),  
        .i_rs2_addr(decode_pkg_ID.rs2_addr),  
        .o_rs1_data(rf_rs1_data           ), // Asynchronous Read
        .o_rs2_data(rf_rs2_data           )  // Asynchronous Read
);


hazard_detection  Hazard_Detection(
    .i_decode_hazard_pkg(decode_hazard_pkg                         ),
    .i_ex_rd_addr       (decode_pkg_EX.rd_addr                     ), // Address of RD  in EX stage 
    .i_ex_load_instr    (decode_pkg_EX.load_en & decode_pkg_EX.wren), // Indicate EX stage is Load instruction
    .i_ex_mul_en        (decode_pkg_EX.mul_en                      ),
    .i_ex_div_en        (decode_pkg_EX.div_en                      ),

    .i_wb_rd_addr       (wb_rf_pkg.rd_addr                         ), // Address of RD  in WB stage 
    .i_wb_wren          (wb_rf_pkg.wren                            ), // Write enable from WB stage

    .i_mul_status       (mul_status_pkg                            ),
    .i_div_status       (div_status_pkg                            ), 

    .o_rs1_eq_rd_WB     (WB_rs1_forward_en                         ), // RS1 == RD in WB stage
    .o_rs2_eq_rd_WB     (WB_rs2_forward_en                         ), // RS2 == RD in WB stage
    .o_flush_MUL        (flush_mul                                 ), // Flush MUL due to WAW hazard
    .o_flush_DIV        (flush_div                                 ), // Flush DIV due to WAW hazard
    .o_stall_from_ID    (stall_by_hazard_detection                 )  // "stall" signals
);

mux_2x1   WB_ID_rs1_forwarding  (
        .sel  (WB_rs1_forward_en ),
        .i_0  (rf_rs1_data       ),  
        .i_1  (wb_rf_pkg.rd_data ),                               
        .o_mux(WB_rs1_forwarded  )
);
mux_2x1   WB_ID_rs2_forwarding  (
        .sel  (WB_rs2_forward_en ),
        .i_0  (rf_rs2_data       ),
        .i_1  (wb_rf_pkg.rd_data ),                         
        .o_mux(WB_rs2_forwarded  )
);



register #(.WIDTH(64))  ID_Regfile_data_buffer (
        .clk  (clk_i                                 ),
        .rst  (ID_flush                              ),
        .en   (ID_buffer_en                          ),  // ID/EX buffer enable 
        .D    ({WB_rs2_forwarded, WB_rs1_forwarded}  ), 
        .Q    (EX_rs_data                            )
);

register #(.WIDTH($bits(decode_pkg_EX)))  ID_Decoder_package_buffer (
        .clk  (clk_i          ),
        .rst  (ID_flush       ),
        .en   (ID_buffer_en   ),  // Decode stage enable 
        .D    (decode_pkg_ID  ), 
        .Q    (decode_pkg_EX  )
);

// verilator lint_on UNOPTFLAT //
// -------------------------------- EXECUTE -------------------------------
lsu_t       abt_lsu_pkg_d; // LSU control signal passed from Arbitrator (Before EX/MEM buffer)
lsu_t       abt_lsu_pkg_q; // LSU control signal passed from Arbitrator (After  EX/MEM buffer)
pipe_buff_t alu_mem_pkg_d; // Output data package from ALU
pipe_buff_t alu_mem_pkg_q; // ALU data package after EX/MEM buffer
alu_t       abt_alu_pkg;   // Input data package to ALU
mul_t       abt_mul_pkg;   // Input data package to MUL/DIV
fwd_t       mem_fwd_pkg;   // Forward data from MEM stage
fwd_t       wb_fwd_pkg;    // Forward data from WB  stage


arbitrator    Arbitrating(
        .i_dcd_EX_pkg     (decode_pkg_EX         ),  // Decode data package in EX stage 
        .i_rs_data        (EX_rs_data            ),  // RS1 and RS2 data from Regfile 
        .i_mul_busy_flag  (mul_status_pkg.busy   ),
        .i_div_busy_flag  (div_status_pkg.busy   ),
        .i_mem_fwd_pkg    (mem_fwd_pkg           ), 
        .i_wb_fwd_pkg     (wb_fwd_pkg            ), 
        .o_abt_alu_pkg    (abt_alu_pkg           ),   
        .o_abt_mul_pkg    (abt_mul_pkg           ),
        .o_abt_lsu_pkg    (abt_lsu_pkg_d         )   // Output data Package to LSU (Address is provided by ALU)
);


alu  ALU    (
        .i_abt_alu_pkg(abt_alu_pkg  ),       
        .i_invalidate (1'b0         ),   // Invalidating instruction when neccesary
        .o_alu_prd_pkg(alu_prd_pkg  ),   // Output data package to updating Branch Prediction 
        .o_alu_mem_pkg(alu_mem_pkg_d)    // Output data package to MEM stage
);



register #(.WIDTH($bits(alu_mem_pkg_q)))  EX_ALU_data_buffer (
        .clk  (clk_i         ),
        .rst  (EX_flush      ),
        .en   (EX_buffer_en  ),  // EX/MEM buffer enable 
        .D    (alu_mem_pkg_d ), 
        .Q    (alu_mem_pkg_q )
);

register #(.WIDTH($bits(abt_lsu_pkg_q)))  EX_LSU_control_buffer (
        .clk  (clk_i         ),
        .rst  (EX_flush      ),
        .en   (EX_buffer_en  ),  // EX/MEM buffer enable 
        .D    (abt_lsu_pkg_d ), 
        .Q    (abt_lsu_pkg_q )
);


assign mem_fwd_pkg.fwd_rd_addr  =  alu_mem_pkg_q.rd_addr;
assign mem_fwd_pkg.fwd_rd_data  =  alu_mem_pkg_q.rd_data;
assign mem_fwd_pkg.fwd_allow    = (alu_mem_pkg_q.wren & alu_mem_pkg_q.valid);

// -------------------------------- MEMOPRY ACCESS -------------------------------
pipe_buff_t  alu_wb_pkg;
pipe_buff_t  mul_wb_pkg;       
pipe_buff_t  lsu_wb_pkg;
logic        mul_div_wb_sel ;  


lsu     LSU  (
            .i_clk           (clk_i                ),
            .i_rst           (rst                  ),
            .i_stall         (~MEM_buffer_en       ),
            .i_invalidate    (1'b0                 ),
            .i_lsu_ctrl_pkg  (abt_lsu_pkg_q        ),
            .i_effective_addr(alu_mem_pkg_q.rd_data),
            .o_lsu_wb_pkg    (lsu_wb_pkg           ),
            // Peripherals
            .i_sw            (input_switch         ),
            .i_in_port       (input_port           ),
            .o_out_port_A    (output_port_A        ),
            .o_out_port_B    (output_port_B        ),
            .o_out_port_C    (output_port_C        ),
            .o_out_port_D    (output_port_D        )
);


multiplier_divider_unit  M_extension (
        .i_clk             (clk_i                    ), 
        .i_rst             (rst                      ),
        .i_flush_MUL       (flush_mul                ),
        .i_flush_DIV       (flush_div                ), 
        .i_abt_mul_dat     (abt_mul_pkg              ),
        .o_mul_fb_dat      (mul_status_pkg           ),   // Feedback dat from MUL module to Hazard Detection 
        .o_div_fb_dat      (div_status_pkg           ),   // Feedback dat from DIV module to Hazard Detection 
        .o_mul_div_stall   (stall_by_mul_div_proceed ),   // Stall for the DIV -MUL to proceed to WB stage
        .o_mul_div_wb_sel  (mul_div_wb_sel           ),
        .o_mul_mem_pkg     (mul_wb_pkg               )    // Result
); 


register #(.WIDTH($bits(alu_mem_pkg_q)))  MEM_WB_data_buffer (
        .clk  (clk_i          ),
        .rst  (MEM_flush      ),
        .en   (MEM_buffer_en  ),  // MEM/WB buffer enable 
        .D    (alu_mem_pkg_q  ), 
        .Q    (alu_wb_pkg     )
);



// ------------------------------------ WRITEBACK ----------------------------------
pipe_buff_t  wb_pkg;
logic [1:0] wb_sel;
logic       wb_error;
assign wb_sel[0] = (lsu_wb_pkg.wren & lsu_wb_pkg.valid);  // 2'b01: LSU
assign wb_sel[1] = (mul_wb_pkg.wren & mul_wb_pkg.valid) & mul_div_wb_sel;  // 2'b10: MEM

assign wb_error = wb_sel[0] & wb_sel[1]; // 2'b11: BUG


mux_4x1 #(.WIDTH($bits(wb_pkg)))  WB_mux (
        .sel  (wb_sel           ),
        .i_0  (alu_wb_pkg       ),  // Data from ALU (including PC + 4)
        .i_1  (lsu_wb_pkg       ),  // Data from LSU
        .i_2  (mul_wb_pkg       ),  // Data from MUL/DIV
        .i_3  ('b0              ),  // Reserved
        .o_mux(wb_pkg           )
);


assign wb_rf_pkg.rd_data = wb_pkg.rd_data;
assign wb_rf_pkg.rd_addr = wb_pkg.rd_addr;
assign wb_rf_pkg.wren    = wb_pkg.wren & wb_pkg.valid;

assign wb_fwd_pkg.fwd_rd_data  = wb_rf_pkg.rd_data;
assign wb_fwd_pkg.fwd_rd_addr  = wb_rf_pkg.rd_addr;
assign wb_fwd_pkg.fwd_allow    = wb_rf_pkg.wren;



endmodule 



