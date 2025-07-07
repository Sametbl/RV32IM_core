module RAM_1port    #(parameter int WIDTH = 32,
                      parameter int DEPTH = 10) (
    input  logic               clock,
    input  logic [DEPTH-1:0]   address,
    input  logic [WIDTH/8-1:0] byteena,  // 4-bit for 32-bit data
    input  logic [WIDTH-1:0]   data,
    input  logic               wren,
    output logic [WIDTH-1:0]   q
);

// Internal memory
logic [WIDTH-1:0] mem [0:2**DEPTH -1];

// Synchronous read/write
always_ff @(posedge clock) begin
    if (wren) begin
        if (byteena[0]) mem[address][ 7: 0] <= data[ 7: 0];
        if (byteena[1]) mem[address][15: 8] <= data[15: 8];
        if (byteena[2]) mem[address][23:16] <= data[23:16];
        if (byteena[3]) mem[address][31:24] <= data[31:24];
    end
    q <= mem[address];  // synchronous read
end

endmodule
