module processor_wrapper(
	input  logic        CLOCK_50,
	input  logic [3:0]  KEY,
	input  logic [9:0]  SW,
	input  logic [9:0]  GPI,
	output logic [25:0] GPO,
	output logic [9:0]  LEDR,
	output logic [6:0]  HEX0,
	output logic [6:0]  HEX1,       
	output logic [6:0]  HEX2,
	output logic [6:0]  HEX3,
	output logic [6:0]  HEX4,
	output logic [6:0]  HEX5
);


wire         rst;
wire [31:0]  proc_SW;       // Input
wire [31:0]  proc_GPI;
wire [31:0]  proc_GPO_A;
wire [31:0]  proc_GPO_B;
wire [31:0]  proc_GPO_C;
wire [31:0]  proc_GPO_D;
wire [31:0]  debug_next_PC_d;
wire [31:0]  debug_next_PC_q;
wire [31:0]  debug_PC_at_ID;
wire [31:0]  debug_PC_at_ALU;
wire [31:0]  debug_PC;
wire [3:0]   debug_valid_bit;

logic [31:0] GPO_data;
logic [31:0] display_data;
logic [1:0]  PORT_sel;

logic        PORT_sel_clk;
logic        clk_div;            // Slower clock for debugging CPU 
logic        clk_manual;         // Manual clock for debugging CPU (KEY[1])
logic        clk_selected;
logic        clk_main;


assign rst        = ~KEY[0];
assign proc_SW    =  SW[9] ? -{23'b0, SW[8:0] } : {23'b0, SW[8:0] };

processor   CPU (
      .clk_i             (CLOCK_50  ),
      .rst               (rst       ),
      .input_switch      (proc_SW   ),  
      .input_port        (proc_GPI  ),  
      .output_port_A     (proc_GPO_A),  
      .output_port_B     (proc_GPO_B),  
      .output_port_C     (proc_GPO_C),  
      .output_port_D     (proc_GPO_D)
    
      // DEBUG 
      // .debug_next_PC_d   (debug_next_PC_d),
      // .debug_next_PC_q   (debug_next_PC_q),
      // .debug_PC_at_ID    (debug_PC_at_ID),
      // .debug_PC_at_ALU   (debug_PC_at_ALU),
      // .debug_valid_bit   (debug_valid_bit),
      // .debug_pc_sel      (),
      // .debug_branch_taken(),
      // .debug_prd_en      (),
      // .debug_branch_miss (),
      // .debug_stall       ()
);

// -------------------------------------- Input pins -------------------------------
logic        load_A;
logic        load_B;
logic        start_calc;

assign load_A        = ~KEY[1];
assign load_B        = ~KEY[2];
assign start_calc    = ~KEY[3];
assign proc_GPI      = {29'b0, start_calc, load_B, load_A};

// -------------------------------------- Output pins --------------------------------

assign GPO[16] = proc_GPO_B[0]; // Input A of 7-segment
assign GPO[18] = proc_GPO_B[1]; // Input B of 7-segment
assign GPO[20] = proc_GPO_B[2]; // Input C of 7-segment
assign GPO[22] = proc_GPO_B[3]; // Input D of 7-segment
assign GPO[17] = proc_GPO_B[4]; // Input E of 7-segment
assign GPO[19] = proc_GPO_B[5]; // Input F of 7-segment
assign GPO[21] = proc_GPO_B[6]; // Input G of 7-segment
assign GPO[23] = proc_GPO_B[7]; // Input DP of 7-segment


assign GPO[0]   = proc_GPO_A[0] ; // 7-segment LED 1
assign GPO[2]   = proc_GPO_A[1] ; // 7-segment LED 2
assign GPO[4]   = proc_GPO_A[2] ; // 7-segment LED 3
assign GPO[6]   = proc_GPO_A[3] ; // 7-segment LED 4
assign GPO[8]   = proc_GPO_A[4] ; // 7-segment LED 5
assign GPO[10]  = proc_GPO_A[5] ; // 7-segment LED 6
assign GPO[1]   = proc_GPO_A[6] ; // 7-segment LED 7
assign GPO[3]   = proc_GPO_A[7] ; // 7-segment LED 8
assign GPO[5]   = proc_GPO_A[8] ; // 7-segment LED 9
assign GPO[7]   = proc_GPO_A[9] ; // 7-segment LED 10
assign GPO[9]   = proc_GPO_A[10]; // 7-segment LED 11
assign GPO[11]  = proc_GPO_A[11]; // 7-segment LED 12


// // Select PC data in execute stage
// mux_2x1   Display_sleect  (
//         .sel  (SW[8]          ),
//         .i_0  (GPO_data       ),  
//         .i_1  (debug_next_PC_q),                                               
//         .o_mux(display_data   )
// );

// // Displaying data on HEXs
// mux_4x1   GPO_select  (
//         .sel  (SW[7:6]     ),
//         .i_0  (proc_GPO_A  ),  
//         .i_1  (proc_GPO_B  ),       
//         .i_2  (proc_GPO_C  ),               
//         .i_3  (proc_GPO_D  ),                                           
//         .o_mux(GPO_data    )
// );


bin32_to_bcd_display   display_to_HEX  (
   	.i_bin		(proc_SW     ),     
   	.o_segment_0(HEX0        ),
   	.o_segment_1(HEX1        ),
   	.o_segment_2(HEX2        ),
   	.o_segment_3(HEX3        ),
   	.o_segment_4(HEX4        ),
   	.o_segment_5(HEX5        )
);


endmodule



// bin32_to_bcd_display
module bin32_to_bcd_display (
    input  logic [31:0] i_bin      ,     
    output logic [6:0]  o_segment_0,
    output logic [6:0]  o_segment_1,
    output logic [6:0]  o_segment_2,
    output logic [6:0]  o_segment_3,
    output logic [6:0]  o_segment_4,
    output logic [6:0]  o_segment_5
);

logic [31:0] bcd_digits_0;
logic [31:0] bcd_digits_1;
logic [31:0] bcd_digits_2;
logic [31:0] bcd_digits_3;
logic [31:0] bcd_digits_4;
logic [31:0] bcd_digits_5;
integer signed value;

logic sign;

assign sign = i_bin[31];


assign value = sign ? -(i_bin) : i_bin;

assign bcd_digits_5 = (value / 100000)   % 10;
assign bcd_digits_4 = (value / 10000)    % 10;
assign bcd_digits_3 = (value / 1000)     % 10;
assign bcd_digits_2 = (value / 100)      % 10;
assign bcd_digits_1 = (value / 10)       % 10;
assign bcd_digits_0 =  value             % 10;

// Manually instantiate bcdtohex for each digit
logic [6:0] segment_5;

bcdtohex u0 (.bcd(bcd_digits_0[3:0]), .segment(o_segment_0));
bcdtohex u1 (.bcd(bcd_digits_1[3:0]), .segment(o_segment_1));
bcdtohex u2 (.bcd(bcd_digits_2[3:0]), .segment(o_segment_2));
bcdtohex u3 (.bcd(bcd_digits_3[3:0]), .segment(o_segment_3));
bcdtohex u4 (.bcd(bcd_digits_4[3:0]), .segment(o_segment_4));
bcdtohex u5 (.bcd(bcd_digits_5[3:0]), .segment(segment_5));
assign o_segment_5 = sign ? 7'b0111111 : segment_5;


endmodule

