module register #(parameter int WIDTH = 32)
(
    input  logic                 clk,
    input  logic                 rst,      // Active-high synchronous reset
    input  logic                 en,
    input  logic [WIDTH - 1 : 0] D,
    output logic [WIDTH - 1 : 0] Q
);

always_ff @(posedge clk) begin
        if (rst)               Q  <=  0;
        else if (en)           Q  <=  D;
        else                  Q  <=  Q;
end
endmodule : register



module d_flipflop(
    input  logic clk,
    input  logic rst,      // Active-high synchronous reset
    input  logic en,
    input  logic D,
    output logic Q
);

always_ff @(posedge clk) begin
    if (rst)         Q  <=  0;
    else if (en)     Q  <=  D;
    else             Q  <=  Q;
end
endmodule : d_flipflop
