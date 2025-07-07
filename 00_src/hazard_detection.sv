import pipeline_pkg::*;

module hazard_detection(
    input  hazard_req_t  i_decode_hazard_pkg,

    input  logic [4:0]   i_ex_rd_addr       , // Address of RD  in EX stage 
    input  logic         i_ex_load_instr    , // Indicate a Load instruction is currently in EX stage
    input  logic         i_ex_mul_en        ,         
    input  logic         i_ex_div_en        ,         

    input  logic         i_wb_wren          , // Write enable from WB stage
    input  logic [4:0]   i_wb_rd_addr       , // Address of RD  in WB stage 

    input  mul_status_t  i_mul_status       , // Indicate a Load instruction is currently in EX stage
    input  mul_status_t  i_div_status       , // Indicate a Load instruction is currently in EX stage

    output logic         o_rs1_eq_rd_WB     , // RS1 == RD in WB stage
    output logic         o_rs2_eq_rd_WB     , // RS2 == RD in WB stage
    output logic         o_flush_MUL        , // Flush MUL due to WAW hazard
    output logic         o_flush_DIV        , // Flush DIV due to WAW hazard
    output logic         o_stall_from_ID      // "stall" signals
);

// Alias
logic [4:0]   ID_rs1_addr;   // Address of RS1 in ID stage (from Deocder)   
logic [4:0]   ID_rs2_addr;   // Address of RS2 in ID stage (from Deocder)   
logic [4:0]   ID_rd_addr;   
logic         ID_use_rs1;    // Indicate the current instr in ID stage uses RS1   
logic         ID_use_rs2;    // Indicate the current instr in ID stage uses RS2   
logic         ID_mul_en;     // Indicate the current instruction in ID stage is MUL   
logic         ID_div_en;     // Indicate the current instruction in ID stage is DIV   
logic         ID_wren;       
logic         ID_valid;      // Indicate the current instruction in ID stage is valid   

assign ID_rs1_addr = i_decode_hazard_pkg.rs1_addr; 
assign ID_rs2_addr = i_decode_hazard_pkg.rs2_addr; 
assign ID_rd_addr  = i_decode_hazard_pkg.rd_addr; 
assign ID_use_rs1  = i_decode_hazard_pkg.use_rs1; 
assign ID_use_rs2  = i_decode_hazard_pkg.use_rs2; 
assign ID_mul_en   = i_decode_hazard_pkg.mul_en; 
assign ID_div_en   = i_decode_hazard_pkg.div_en; 
assign ID_wren     = i_decode_hazard_pkg.wren; 
assign ID_valid    = i_decode_hazard_pkg.valid; 

logic rs1_eq_rd_EX;
logic rs2_eq_rd_EX;
logic rs1_eq_rd_WB;
logic rs2_eq_rd_WB;
logic rs1_eq_rd_MUL;
logic rs2_eq_rd_MUL;
logic rs1_eq_rd_DIV;
logic rs2_eq_rd_DIV;

logic rs1_not_R0; 
logic rs2_not_R0; 
logic rd_not_R0;

assign rs1_not_R0 = (ID_rs1_addr != 5'b0) & ID_use_rs1;
assign rs2_not_R0 = (ID_rs2_addr != 5'b0) & ID_use_rs2; 
assign rd_not_R0  = (ID_rd_addr  != 5'b0) & ID_wren; 

assign rs1_eq_rd_EX = (ID_rs1_addr == i_ex_rd_addr) & rs1_not_R0;
assign rs2_eq_rd_EX = (ID_rs2_addr == i_ex_rd_addr) & rs2_not_R0;

assign rs1_eq_rd_MUL = (ID_rs1_addr == i_mul_status.rd_addr) & rs1_not_R0;
assign rs2_eq_rd_MUL = (ID_rs2_addr == i_mul_status.rd_addr) & rs2_not_R0;

assign rs1_eq_rd_DIV = (ID_rs1_addr == i_div_status.rd_addr) & rs1_not_R0;
assign rs2_eq_rd_DIV = (ID_rs2_addr == i_div_status.rd_addr) & rs2_not_R0;


// ----------------------------------- Hazard Detection ----------------------
// Hazard 1: RAW dependency due to Load instruction
// Hazard 2: Multiplier is not available for the next MUL instruction 
// Hazard 3: Divider    is not available for the next DIV instruction 
// Hazard 4: RAW dependency on result from currently executing MUL operation  
// Hazard 5: RAW dependency on result from currently executing DIV operation 
// Hazard 6: WAW dependency on result from currently executing MUL operation (Flush MUL)  
// Hazard 7: WAW dependency on result from currently executing DIV operation (Flush DIV) 

logic wait_for_load_data;  // HIGH if Hazard 1 detected (Stall)
logic wait_for_MUL;        // HIGH if Hazard 3 detected (Stall)
logic wait_for_DIV;        // HIGH if Hazard 4 detected (Stall)
logic raw_depend_MUL;      // HIGH if Hazard 5 detected (Stall)
logic raw_depend_DIV;      // HIGH if Hazard 6 detected (Stall)
logic waw_depend_MUL;      // HIGH if Hazard 5 detected (Overwrite, Flush MUL)
logic waw_depend_DIV;      // HIGH if Hazard 6 detected (Overwrite, Flush DIV)

// --------------
// Hazard 1 (Stall case): Dependency on a Load instruction currently in EX stage 
assign wait_for_load_data = (rs1_eq_rd_EX | rs2_eq_rd_EX) & i_ex_load_instr;

// Hazard 2 (Stall case): Muliplier is not avaiable for the next MUL instruction
assign wait_for_MUL = ID_mul_en & (i_ex_mul_en | i_mul_status.busy);

// Hazard 3 (Stall case): Divider is not avaiable for the next DIV instruction
assign wait_for_DIV = ID_div_en & (i_ex_div_en | i_div_status.busy);

// Hazard 4 (Stall case): WAW hazard while MUL instruction is executing
assign raw_depend_MUL = (rs1_eq_rd_MUL | rs2_eq_rd_MUL) | (rs1_eq_rd_EX | rs2_eq_rd_EX) & i_ex_mul_en;

// Hazard 5 (Stall case): WAW hazard while DIV instruction is executing
assign raw_depend_DIV = (rs1_eq_rd_DIV | rs2_eq_rd_DIV) | (rs1_eq_rd_EX | rs2_eq_rd_EX) & i_ex_div_en;

// Hazard 6: WAW dependency on result from currently executing MUL operation
assign waw_depend_MUL = (ID_rd_addr == i_mul_status.rd_addr) & rd_not_R0;

// Hazard 7: WAW dependency on result from currently executing DIV operation
assign waw_depend_DIV = (ID_rd_addr == i_div_status.rd_addr) & rd_not_R0;



// Output
assign o_rs1_eq_rd_WB = (ID_rs1_addr == i_wb_rd_addr) & rs1_not_R0 & i_wb_wren;
assign o_rs2_eq_rd_WB = (ID_rs2_addr == i_wb_rd_addr) & rs2_not_R0 & i_wb_wren;

assign o_stall_from_ID  = ID_valid & (wait_for_load_data) |
                         (raw_depend_MUL) | (raw_depend_DIV) |
                         (wait_for_MUL)   | (wait_for_DIV);


assign o_flush_MUL = ID_valid & waw_depend_MUL & (~raw_depend_MUL);  
assign o_flush_DIV = ID_valid & waw_depend_DIV & (~raw_depend_DIV);  



endmodule
