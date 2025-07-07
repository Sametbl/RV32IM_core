module adder #(parameter int WIDTH = 32) (
    input  logic [WIDTH-1:0] a,     // Operand A
    input  logic [WIDTH-1:0] b,     // Operand B
    input  logic             sub,   // 0: A + B, 1: A - B
    output logic [WIDTH-1:0] sum,   // Sum or Difference
    output logic             cout   // Carry-out or Borrow flag
);

logic [WIDTH:0] operand_A;
logic [WIDTH:0] operand_B;
logic [WIDTH:0] full_result;   // One extra bit for carry out
logic [WIDTH:0] carry_in;

// Extend to WIDTH + 1 bit
assign operand_A = {1'b0, a};   
assign operand_B = (sub) ? ~({b[WIDTH-1] , b}) : ({1'b0 , b});

assign carry_in[WIDTH:1]  = 'b0;  
assign carry_in[0]        =  sub;   // 1 for subtraction (A + ~B + 1)

// Addition/Subtraction 
assign full_result = operand_A + operand_B + carry_in;

// Output
assign sum   = full_result[WIDTH-1:0];
assign cout  = full_result[WIDTH];  // Carry-out or borrow

endmodule
