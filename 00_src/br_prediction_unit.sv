
// This module in integrated in "next_pc_unit"

module br_prediction_unit (
    input  logic        i_clk,
    input  logic        i_rst,
    input  logic        i_br_update_en,       // HIGH when actual Branch result from BRU is known
    input  logic        i_br_update_valid,
    input  logic        i_br_update_taken,    // HIGH when actual Branch result from BRU is TAKEN
    input  logic        i_br_update_already_prd,  
    input  logic [31:0] i_br_update_pc,
    input  logic [31:0] i_br_update_target,   // Actual branch target provided by BRU when updating
    input  logic [31:0] i_current_pc,         // Current program counter for prediction
    output logic [31:0] o_prd_target,         // Predicted branch target address
    output logic        o_prd_taken           // Indicates a prediction is made
);


// Branch Prediction is currently not implemented
assign o_prd_taken = 1'b0;

endmodule
