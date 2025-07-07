module multiplier_32bit (
    input  logic        i_clk,
    input  logic        i_rst,
    input  logic        i_op_a_signed_en,   // Enable signed Multiplication 
    input  logic        i_op_b_signed_en,   // Enable signed Multiplication 
    input  logic        i_start,
    input  logic [31:0] i_a,
    input  logic [31:0] i_b,
    output logic [63:0] o_product, 
    output logic        o_ready,    // To inform if the module is idle and ready to receiver new input 
    output logic        o_done      // To inform if the division process is complete, currently writing to output reg
);

// State machine
typedef enum logic [1:0] {
    IDLE,
    FETCH,
    ACTIVE,
    WRITE
} state_t;

state_t Pre_state;
state_t Next_state;

logic   IDLE_stage  ;
logic   FETCH_stage ;
logic   ACTIVE_stage;
logic   WRITE_stage  ;

assign IDLE_stage   = (Pre_state == IDLE  );
assign FETCH_stage  = (Pre_state == FETCH );
assign ACTIVE_stage = (Pre_state == ACTIVE);
assign WRITE_stage  = (Pre_state == WRITE  );



// Internal registers
logic [31:0] multiplicand;
logic [31:0] multiplier;
logic [31:0] operand_A;
logic [31:0] operand_B;
logic [31:0] operand_A_abs;   // Absolute value of operand_A
logic [31:0] operand_B_abs;   // Absolute value of operand_B
logic [4:0]  count;           // Down Counter for 32 iteration
logic [4:0]  count_amount;    // Count amount of Down Counter for 32 iteration
logic        cnt_done;        // High when Counter reached 0 
logic        zero_operand_A;  // Input A is zero
logic        zero_operand_B;  // Input B is zero 
logic        operand_is_zero; // One or both of the operand is Zero

// Sign Handling
logic        op_a_signed_en_q;
logic        op_b_signed_en_q;
logic        sign_A;
logic        sign_B;
logic        sign_diff;       // Sign of operand A and B are different

register #(.WIDTH(33)) fetch_A (
        .clk(i_clk                           ),
        .rst(i_rst                           ),
        .en (IDLE_stage                      ),
        .D  ({i_op_a_signed_en, i_a}         ),
        .Q  ({op_a_signed_en_q, operand_A}   )
);

register #(.WIDTH(33)) fetch_B (
        .clk(i_clk                           ),
        .rst(i_rst                           ),
        .en (IDLE_stage                      ),
        .D  ({i_op_b_signed_en, i_b}         ),
        .Q  ({op_b_signed_en_q, operand_B}   )
);


assign cnt_done        = (count     == 5'b0 );
assign zero_operand_A  = (operand_A == 32'b0);
assign zero_operand_B  = (operand_B == 32'b0);
assign operand_is_zero = zero_operand_A | zero_operand_B;

assign sign_A       = op_a_signed_en_q & operand_A[31]; 
assign sign_B       = op_b_signed_en_q & operand_B[31];  
assign sign_diff    = sign_A ^ sign_B;        // Indicate the result is signed


mux_2x1      Select_Absolute_A (
        .sel  (sign_A),
        .i_0  ( (operand_A)               ),  
        .i_1  (-(operand_A)               ), 
        .o_mux(operand_A_abs              )
);
mux_2x1      Select_Absolute_B (
        .sel  (sign_B                     ),
        .i_0  ( (operand_B)               ),  
        .i_1  (-(operand_B)               ), 
        .o_mux(operand_B_abs              )
);

// Select the smaller operand  as the multiplier  or
// Select the unsigned operand as the multiplier (in case of signed x unsgined, vice versa)
logic A_gt_B;
logic multiplier_sel_b;

// Multiplier = operand B when: - A > B
//                              - Signed(A) x Unsigned (B)
assign multiplier_sel_b = (~sign_diff & A_gt_B) | (sign_diff & sign_A);   

comparator_32bit   Compare_operand     (
	.A          (operand_A_abs ),
        .B          (operand_B_abs ),
	.is_unsigned(1'b1          ),
	.equal      (              ),
        .larger     (A_gt_B        ),
        .smaller    (              )
);

mux_2x1      Select_multiplicand (
        .sel  (multiplier_sel_b ),
        .i_0  (operand_B_abs    ),  
        .i_1  (operand_A_abs    ), 
        .o_mux(multiplicand     )
);
mux_2x1      Select_multiplier (
        .sel  (multiplier_sel_b ),
        .i_0  (operand_A_abs    ),  
        .i_1  (operand_B_abs    ), 
        .o_mux(multiplier       )
);


// Find the number of Leading Zero the reduce the Shift-and-Subtractor operations   
logic [4:0] NLZ_multiplier;
             																																												// Leading_0_counter_32bit    Find_Reduced_B (.data(B),  .NLZ(NLZ_B),  .all_zero(o_error));
leading_zero_counter_32bit    Find_NLZ_mulipliter (
    .i_data    (multiplier      ),
    .o_NLZ     (NLZ_multiplier  ),  // Number of Leading Zero
    .o_all_zero(                )   
); 

// Count number of shift and subtraction operations
adder #(.WIDTH(5))  Reduced_count (
    .a    (5'd31            ),  // Originally Shift-and-Subtract takes 32 cycles
    .b    (NLZ_multiplier   ),  // Reduced number of cycles for the division operation
    .sub  (1'b1             ),
    .sum  (count_amount     ),
    .cout (                 )
);



// ------------------------ Finite State Machine -----------------------
// State transition
always_ff @(posedge i_clk) 
    if (i_rst)          Pre_state <= IDLE;
    else                Pre_state <= Next_state;


always_comb begin
    case (Pre_state)
        IDLE:    if (i_start)          Next_state = FETCH;
                 else                  Next_state = IDLE;

        FETCH:   if (operand_is_zero)  Next_state = WRITE;   // Result is zero
                 else                  Next_state = ACTIVE;

        ACTIVE:  if (cnt_done)         Next_state = WRITE;
                 else                  Next_state = ACTIVE;
                       
        WRITE:                         Next_state = IDLE;
        default:                       Next_state = IDLE;
    endcase
end

logic [63:0] partial_product_q;
logic [31:0] temp_multiplier_d; 
logic [31:0] temp_multiplier_q; 
logic [31:0] adder_operand_B; // Operand to add to the Upper 32-bit of product 
logic [31:0] adder_sum;       
logic        adder_cout;


down_counter #(.WIDTH(5))  iteration_counter  (
        .clk       (i_clk        ),
        .rst       (i_rst        ),
        .en        (ACTIVE_stage ),
        .load      (FETCH_stage  ),     // Active-high synchronous load
        .load_data (count_amount ),
        .count     (count        )
);

// Mux to initialize the register after Start
mux_2x1      product_upper_init_mux (
        .sel  ((FETCH_stage | operand_is_zero) ),
        .i_0  ({1'b0, temp_multiplier_q[31:1]} ),  
        .i_1  (multiplier                      ), // Reset to Zero 
        .o_mux(temp_multiplier_d               )
);

// Register to hold the Temporary Product
register  Temp_multiplier_register (
        .clk  (i_clk                      ),
        .rst  (i_rst                      ),
        .en   (FETCH_stage | ACTIVE_stage ),
        .D    (temp_multiplier_d          ),
        .Q    (temp_multiplier_q          )
);


// Adder to add the Multiplicand to the Upper 32-bit of the Temporary Product
mux_2x1   Adder_op_b_sel (
        .sel  (temp_multiplier_q[0] ),
        .i_0  (32'b0                ),  
        .i_1  (multiplicand         ),  
        .o_mux(adder_operand_B      )
);
adder    Adder_upper_product  (
        .a    (partial_product_q[63:32] ), 
        .b    (adder_operand_B          ), 
        .sub  (1'b0                     ), 
        .sum  (adder_sum                ), 
        .cout (adder_cout               )  
);


// Temporary product register
register #(.WIDTH(64)) Partial_product_reg (
        .clk  (i_clk                                            ),
        .rst  ((FETCH_stage | operand_is_zero) | i_rst          ),
        .en   (ACTIVE_stage                                     ),
        .D    ({adder_cout, adder_sum, partial_product_q[31:1]} ),
        .Q    (partial_product_q                                )
);



// Output Register
logic [63:0] temp_result;
logic [63:0] final_result;

shifter_64bit   Normalization (
        .data_in     (partial_product_q      ),
        .shift_amount({59'b0, NLZ_multiplier}),
        .mode        (2'b00                  ),  // Logical Right Shift mode
        .data_out    (temp_result            )
);


mux_2x1 #(.WIDTH(64))     Negate_result (
        .sel  (sign_diff                 ),
        .i_0  ( (temp_result)            ),  
        .i_1  (-(temp_result)            ), 
        .o_mux(final_result              )
);

register #(.WIDTH(64)) product_out_reg (
        .clk  (i_clk        ),
        .rst  (i_rst        ),
        .en   (WRITE_stage  ),
        .D    (final_result ),
        .Q    (o_product    )
);

assign o_done    = WRITE_stage;
assign o_ready   = IDLE_stage;


endmodule






