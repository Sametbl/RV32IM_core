module leading_zero_counter_32bit(
    input  logic [31:0] i_data,
    output logic [4:0]  o_NLZ,
    output logic        o_all_zero
);

logic [7:0] a;   // Indicate whether if each section full of zeros 
logic [1:0] z0;  // Number of zero for each 4-bit section ([31:28])
logic [1:0] z1;  // Number of zero for each 4-bit section ([27:24])
logic [1:0] z2;  // Number of zero for each 4-bit section ([23:20])
logic [1:0] z3;  // Number of zero for each 4-bit section ([19:16])
logic [1:0] z4;  // Number of zero for each 4-bit section ([15:12])
logic [1:0] z5;  // Number of zero for each 4-bit section ([11:8] )
logic [1:0] z6;  // Number of zero for each 4-bit section ([7:4]  )
logic [1:0] z7;  // Number of zero for each 4-bit section ([3:0]  )

logic [4:0] NLZ; // Number of Leading Zero 
logic       all_zero;

NLC_4bit    NLC_7 (.i_X(i_data[31:28]), .o_zero(z7), .o_all_zero(a[7]) );
NLC_4bit    NLC_6 (.i_X(i_data[27:24]), .o_zero(z6), .o_all_zero(a[6]) );
NLC_4bit    NLC_5 (.i_X(i_data[23:20]), .o_zero(z5), .o_all_zero(a[5]) );
NLC_4bit    NLC_4 (.i_X(i_data[19:16]), .o_zero(z4), .o_all_zero(a[4]) );
NLC_4bit    NLC_3 (.i_X(i_data[15:12]), .o_zero(z3), .o_all_zero(a[3]) );
NLC_4bit    NLC_2 (.i_X(i_data[11:8] ), .o_zero(z2), .o_all_zero(a[2]) );
NLC_4bit    NLC_1 (.i_X(i_data[7:4]  ), .o_zero(z1), .o_all_zero(a[1]) );
NLC_4bit    NLC_0 (.i_X(i_data[3:0]  ), .o_zero(z0), .o_all_zero(a[0]) );

// Check if all 4-bit local section for zeros
BNE   Boundary_Nibble_Encoder (.i_a(a), .o_y(NLZ[4:2]), .o_all_zero(all_zero) );

mux_8x1 #(.WIDTH(1))  bit0_NLZ (
    .sel  (NLZ[4:2]),
    .i_0  (z7[0]   ),
    .i_1  (z6[0]   ),
    .i_2  (z5[0]   ),
    .i_3  (z4[0]   ),
    .i_4  (z3[0]   ),
    .i_5  (z2[0]   ),
    .i_6  (z1[0]   ),
    .i_7  (z0[0]   ),
    .o_mux(NLZ[0]  )   // NLZ = NLZ + 1
);
mux_8x1 #(.WIDTH(1))  bit1_NLZ (
    .sel  (NLZ[4:2]),
    .i_0  (z7[1]   ),
    .i_1  (z6[1]   ),
    .i_2  (z5[1]   ),
    .i_3  (z4[1]   ),
    .i_4  (z3[1]   ),
    .i_5  (z2[1]   ),
    .i_6  (z1[1]   ),
    .i_7  (z0[1]   ),
    .o_mux(NLZ[1]  )   // NLZ = NLZ + 2
);


assign o_NLZ      = NLZ; 
assign o_all_zero = all_zero;


endmodule : leading_zero_counter_32bit
                  




// The NLC counts the number of zero of the 4 bit number: Zero[1:0] (From 0 to 3)
// If all bits are zero (4 zeros) then singal "all_zero" will represent this case.

module NLC_4bit (
    input  logic [3:0] i_X,
    output logic [1:0] o_zero,     // Number of zero
    output logic       o_all_zero  // Indicate the 4-bit number if all zeros
);

logic A, B, C, D;

assign A = i_X[3];
assign B = i_X[2];
assign C = i_X[1];
assign D = i_X[0];

assign o_all_zero = ~(A | B | C | D);
assign o_zero[1]  = ~(A | B);           // High when two first MSB is LOW
assign o_zero[0]  = ~( (~B & C) | A );  // High when {ABC} = 3'b01X , or {ABC} = 3'b000


endmodule : NLC_4bit






// Boundary Nibble Encoder (BNE) 
module BNE(
    input  logic [7:0] i_a,
    output logic [2:0] o_y,
    output logic       o_all_zero   // All local 4-bit section are zeros
);

wire [7:0] a;
assign a = i_a;

// All_zero: When all four-bit local counter modules are zeros
assign o_all_zero = a[7] & a[6] & a[5] & a[4] & a[3] & a[2] & a[1] & a[0];

// NLZ = NLZ + 16: When first 16 MSB are zero 
assign o_y[2] =  a[7] & a[6] & a[5] & a[4]; 

// NLZ = NLZ + 8:
assign o_y[1] =  a[7] &  a[6] & (~a[5] | ~a[4] | (a[3] & a[2]) );

// NLZ = NLZ + 4: 
assign o_y[0] = (a[7] & (~a[6] | (a[5] & ~a[4]))) | (a[7] & a[5] & a[3] & (~a[2] | a[1]));

endmodule : BNE


