module divider_32bit(
    input  logic        i_clk,     
    input  logic        i_rst,       
    input  logic        i_start,  
    input  logic        i_signed_en,  // Enable signed Division   
    input  logic [31:0] i_a,          // A divide by B
    input  logic [31:0] i_b,          // A divide by B
    output logic [31:0] o_quotient,  
    output logic [31:0] o_remainder, 
    output logic        o_ready,      // To inform if the module is idle and ready to receiver new input 
    output logic        o_done,       // To inform if the division process is complete, currently writing to output reg
    output logic        o_error       // Divide by 0
);

typedef enum logic [1:0] {
    IDLE   ,      // IDLE    : Wait for START signal
    INIT   ,      // INIT    : Load datas and initialize registers 
    EXECUTE,      // EXECUTE : Enable o_remainder and o_quotient registers. Start calculating (shift and substract)
    WRITE         // WRITE   : Write results into output register (o_remainder, QUotient)
} states;	

states PreStep;
states NextStep;

logic        IDLE_stage   ;
logic        INIT_stage   ;
logic        EXECUTE_stage;
logic        WRITE_stage  ;

logic [5:0]  count_amount;
logic [5:0]  count;
logic        cnt_done;
logic        zero_operand; // If one or both operands are zero then Quotient and Remainder are zeros
logic        A_lt_B;       // Indicate the Dividend is less than the Divisor

assign IDLE_stage    = (PreStep == IDLE    );
assign INIT_stage    = (PreStep == INIT    );  // Used as load signal for registers and select MUX
assign EXECUTE_stage = (PreStep == EXECUTE ); 
assign WRITE_stage   = (PreStep == WRITE   );
assign cnt_done      = (count   == 'b0     );


// ------------------------- Finite State Machine -------------------
always_ff @(posedge i_clk) 		
		if (i_rst)     PreStep		<= IDLE;
		else           PreStep		<= NextStep;

always_comb begin
    case (PreStep) 
         IDLE:    if (i_start)      NextStep = INIT;
                  else              NextStep = IDLE; 

         INIT:    if (zero_operand) NextStep = WRITE;
                  else if(A_lt_B)   NextStep = WRITE;  
                  else              NextStep = EXECUTE; 

         EXECUTE: if (cnt_done)     NextStep = WRITE; 
                  else              NextStep = EXECUTE;

         WRITE:                     NextStep = IDLE;

         default:                   NextStep = IDLE;
    endcase 
end


//--------------------- FETCH STAGE --------------------------------		
logic [31:0] operand_A;      // Fetched Operand_A
logic [31:0] operand_B;      // Fetched Operand_B
logic [31:0] operand_A_abs;  // Absolute value of operand A
logic [31:0] operand_B_abs;  // Absolute value of operand B
logic        signed_en_q;

register   Fetch_A   (.clk(i_clk), .rst(i_rst), .en(IDLE_stage), .D(i_a), .Q(operand_A) );
register   Fetch_B   (.clk(i_clk), .rst(i_rst), .en(IDLE_stage), .D(i_b), .Q(operand_B) );
d_flipflop sign_fetch(.clk(i_clk), .rst(i_rst), .en(IDLE_stage), .D(i_signed_en), .Q(signed_en_q) );


mux_2x1      Select_Absolute_A (
        .sel  (operand_A[31] & signed_en_q),
        .i_0  ( (operand_A)               ),  
        .i_1  (-(operand_A)               ), 
        .o_mux(operand_A_abs              )
);
mux_2x1      Select_Absolute_B (
        .sel  (operand_B[31] & signed_en_q),
        .i_0  ( (operand_B)               ),  
        .i_1  (-(operand_B)               ), 
        .o_mux(operand_B_abs              )
);



comparator_32bit   Compare_operand     (
	.A          (operand_A_abs ),
    .B          (operand_B_abs ),
	.is_unsigned(1'b1          ),
	.equal      (              ),
    .larger     (              ),
    .smaller    (A_lt_B        )
);

//--------------------- WAIT STAGE --------------------------------	
// Reducing A: counter the number of leading 0 and shift accordingly
logic [31:0] reduced_operand_A_abs;	// Operand A with removed leading zeros
logic [4:0]  NLZ_A;                 // Number of Leading Zero in |operand_A|
logic        zero_operand_A;        // Indicate operand_A == 32'b0
logic        zero_operand_B;        // Indicate operand_B == 32'b0 	

assign zero_operand_B = (operand_B == 32'b0);
assign zero_operand   = zero_operand_A | zero_operand_B;

// Find the number of Leading Zero the reduce the Shift-and-Subtractor operations                																																												// Leading_0_counter_32bit    Find_Reduced_B (.data(B),  .NLZ(NLZ_B),  .all_zero(o_error));
leading_zero_counter_32bit    Find_Reduced_A (
    .i_data    (operand_A_abs   ),
    .o_NLZ     (NLZ_A           ),  // Number of Leading Zero
    .o_all_zero(zero_operand_A  )   // Flag to indicate A is all zero
); 

// Shift the operand_A so that the first bit 1's become the MSB
shifter_32bit  Reduce_A (
    .data_in     (operand_A_abs         ),
    .shift_amount({27'b0, NLZ_A}        ),   // Shift amount = Number of Leading Zero
    .mode        (2'b01                 ),   // Logical Left shift mode (Combinationally)
    .data_out    (reduced_operand_A_abs )    
);


// Count number of shift and subtraction operations
adder #(.WIDTH(6))  Reduced_count (
    .a    (6'd32           ),  // Originally Shift-and-Subtract takes 32 cycles
    .b    ({1'b0, NLZ_A}   ),  // Reduced number of cycles for the division operation
    .sub  (1'b1            ),
    .sum  (count_amount    ),
    .cout (                )
);

down_counter #(.WIDTH(6))  iteration_counter  (
        .clk       (i_clk             ),
        .rst       (i_rst             ),
        .en        (EXECUTE_stage     ),
        .load      (INIT_stage        ),     // Active-high synchronous load
        .load_data (count_amount[5:0] ),
        .count     (count             )
);

//-------------------- INIT and EXECUTE STAGES -------------------
logic [32:0] adder_sum;     // 33-bit Substraction result from Adder 
logic [31:0] dividend;
logic [31:0] divisor;
logic [31:0] shifted_A_d;
logic [31:0] shifted_A_q;
logic [31:0] partial_remainder; 
logic [31:0] Pre_Remainder;
logic [31:0] Pre_Quotient;

assign divisor = operand_B_abs;

mux_2x1   Init_A  (
    .sel  (INIT_stage                ),
    .i_0  ({shifted_A_q[30:0], 1'b0} ), // Load Shifted value of operand_A
    .i_1  (reduced_operand_A_abs     ), // Load Operand A (Initially)
    .o_mux(shifted_A_d               )
);
register  shift_register_opreand_A (
    .clk  (i_clk                       ),
    .rst  (i_rst                      ),
    .en   (INIT_stage | EXECUTE_stage  ),
    .D    (shifted_A_d                 ),
    .Q    (shifted_A_q                 )
);

register  Temp_dividend_register   (
    .clk  (i_clk                                       ),
    .rst  ((INIT_stage | zero_operand) | i_rst         ),
    .en   (EXECUTE_stage                               ),
    .D    ({partial_remainder[30:0], shifted_A_q[31]}  ),  
    .Q    (dividend                                    )
);


adder #(.WIDTH(33)) Subtract (
    .a   ({1'b0, dividend}     ),  // Extend to 33-bit to get the sign of the result     
    .b   ({1'b0, divisor }     ),  // Extend to 33-bit to get the sign of the result     
    .sub (1'b1                 ),  // Enable subtraction mode in the Adder  
    .sum (adder_sum            ),   
    .cout(                     )   
);
mux_2x1       Partial_Remainder  (
    .sel  (adder_sum[32]      ),
    .i_0  (adder_sum[31:0]    ),
    .i_1  (dividend           ),
    .o_mux(partial_remainder  )
);

// ----- Temporary Quotient and Remainder Registers -----
wire [31:0] quotient_q;
wire [31:0] remainder_d;
wire [31:0] remainder_q;

register   Temp_Quotient_register   (
    .clk  (i_clk                               ),
    .rst  ((INIT_stage | zero_operand) | i_rst ),
    .en   (EXECUTE_stage                       ),
    .D    ({quotient_q[30:0], ~adder_sum[32]}  ),
    .Q    (quotient_q                          )
);

mux_2x1   Init_Temp_remainder_register  (
    .sel  (A_lt_B             ),
    .i_0  (partial_remainder  ), // Hold the parital Remainder
    .i_1  (operand_A_abs      ), // Assign Reminder = Dividend if Dividend < Divisor
    .o_mux(remainder_d        )
);
register   Temp_Remainder_register  (
    .clk  (i_clk                                         ),
    .rst  ((INIT_stage & ~A_lt_B) | zero_operand | i_rst ) ,
    .en   ((INIT_stage &  A_lt_B) | EXECUTE_stage        ),
    .D    (remainder_d                                   ),
    .Q    (remainder_q                                   )
);
  

//-------------------- INIT and EXECUTE STAGES -------------------
logic [31:0] signed_quotient;
logic [31:0] signed_remainder;
logic different_sign;
logic dividend_sign;
logic divisor_sign;


assign dividend_sign  = operand_A[31];
assign divisor_sign   = operand_B[31];
assign different_sign = dividend_sign ^ divisor_sign;

mux_2x1   Quotient_sign_assignment  (
    .sel  (different_sign & signed_en_q),
    .i_0  (  (quotient_q)              ), 
    .i_1  ( -(quotient_q)              ), // Negate when dividend and divisor are different in sign
    .o_mux(signed_quotient             )
);
register  Final_Quotient  (
    .clk  (i_clk           ),
    .rst  (i_rst           ),
    .en   (WRITE_stage     ),
    .D    (signed_quotient ),
    .Q    (o_quotient      )
);

mux_2x1   Remainder_sign_assignment  (
    .sel  (dividend_sign & signed_en_q),
    .i_0  (  (remainder_q)            ), 
    .i_1  ( -(remainder_q)            ), // Negate when dividend is negative
    .o_mux(signed_remainder           )
);    
register  Final_Remainder (
    .clk  (i_clk            ),
    .rst  (i_rst            ),
    .en   (WRITE_stage      ),
    .D    (signed_remainder ),
    .Q    (o_remainder      )
);


assign o_error    = zero_operand_B;
assign o_done     = WRITE_stage;
assign o_ready    = IDLE_stage;

endmodule


