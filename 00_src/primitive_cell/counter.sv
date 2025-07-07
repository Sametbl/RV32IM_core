// This file contain 3 modules (all are parameterized)
// 1. up_down_counter  (integrated with both modes)
// 2. up_counter
// 3. down_counter


module up_down_counter #(parameter WIDTH = 32)(
    input  logic             clk,
    input  logic             rst,        // Active-high synchronous reset
    input  logic             en,         // Count enable
    input  logic             up,         // 1 = up, 0 = down
    input  logic             load,       // Active-high synchronous load
    input  logic [WIDTH-1:0] load_data,  // Value to load
    output logic [WIDTH-1:0] count       // Current count value
);

always_ff @(posedge clk) begin
        if (rst)           count <= '0;
        else if (load)     count <= load_data;
        else if (en)       count <= up ? count + 1 : count - 1;
        else               count <= count;  // Prevent Latch
end

endmodule : up_down_counter


// ==========================================================================
module up_counter #(parameter WIDTH = 32)(
    input  logic             clk,
    input  logic             rst,      // Active-high synchronous reset
    input  logic             en,       // Count enable
    input  logic             load,     // Active-high synchronous load
    input  logic [WIDTH-1:0] load_data,
    output logic [WIDTH-1:0] count
);

always_ff @(posedge clk) begin
        if (rst)           count <= '0;
        else if (load)     count <= load_data;
        else if (en)       count <= count + 1;
        else               count <= count;     // Prevent Latch
end
endmodule : up_counter


// ==========================================================================
module down_counter #(parameter WIDTH = 8)(
    input  logic             clk,
    input  logic             rst,      // Active-high synchronous reset
    input  logic             en,
    input  logic             load,     // Active-high synchronous load
    input  logic [WIDTH-1:0] load_data,
    output logic [WIDTH-1:0] count
);

always_ff @(posedge clk) begin
        if (rst)           count <= '0;
        else if (load)     count <= load_data;
        else if (en)       count <= count - 1;
        else               count <= count;        // Prevent Latch
end
endmodule : down_counter
