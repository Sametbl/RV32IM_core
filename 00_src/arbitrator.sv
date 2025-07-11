module arbitrator(
    input  decode_t        i_dcd_EX_pkg    ,  // Decode data package in EX stage 
    input  logic    [63:0] i_rs_data       ,  // RS1 and RS2 data from Regfile 
    input  logic           i_mul_busy_flag ,
    input  logic           i_div_busy_flag ,
    input  fwd_t           i_mem_fwd_pkg   ,
    input  fwd_t           i_wb_fwd_pkg    ,
    output alu_t           o_abt_alu_pkg   ,   
    output mul_t           o_abt_mul_pkg   ,
    output lsu_t           o_abt_lsu_pkg      // Output data Package to LSU (Address is provided by ALU)
);

logic [31:0] rs1_forwarded;
logic [31:0] rs2_forwarded;
logic [31:0] pc;
logic [31:0] imm;

logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [4:0]  rd_addr;


logic        use_rs1;
logic        use_rs2;
logic        op_a_use_pc;
logic        op_b_use_imm;
logic        valid;

logic        mul_start;
logic        div_start;

assign rs1_addr     = i_dcd_EX_pkg.rs1_addr; 
assign rs2_addr     = i_dcd_EX_pkg.rs2_addr; 
assign rd_addr      = i_dcd_EX_pkg.rd_addr; 
assign pc           = i_dcd_EX_pkg.pc;
assign imm          = i_dcd_EX_pkg.imm;
assign op_a_use_pc  = i_dcd_EX_pkg.op_a_use_pc;
assign op_b_use_imm = i_dcd_EX_pkg.op_b_use_imm;
assign use_rs1      = i_dcd_EX_pkg.use_rs1;
assign use_rs2      = i_dcd_EX_pkg.use_rs2;
assign valid        = i_dcd_EX_pkg.valid;

assign mul_start    = i_dcd_EX_pkg.mul_en & valid;
assign div_start    = i_dcd_EX_pkg.div_en & valid;

// -------------------------------------- FORWARDING --------------------------------
logic [4:0]  mem_rd_addr;
logic [4:0]  wb_rd_addr;
logic        mem_fwd_allow;
logic        wb_fwd_allow;

logic [1:0] rs1_fwd_flags; // RS1 fowarding flags, each bit correspond to a fowarding Location
logic [1:0] rs2_fwd_flags; // RS2 fowarding flags, each bit correspond to a fowarding Location

forwarding_unit    forwarding(
        .i_rs1_addr     (rs1_addr         ),  // Address of Source Register 1
        .i_rs2_addr     (rs2_addr         ),  // Address of Source Register 2
        .i_rs1_data     (i_rs_data[31:0]  ),  // Data of Source Register 1
        .i_rs2_data     (i_rs_data[63:32] ),  // Data of Source Register 2
        .i_valid        (valid            ),  // The current instruction in ID stage is valid
        .i_use_rs1      (use_rs1          ),  // The current instruction in ID stage uses RS1
        .i_use_rs2      (use_rs2          ),  // The current instruction in ID stage uses RS2
        .i_mem_fwd_pkg  (i_mem_fwd_pkg    ),
        .i_wb_fwd_pkg   (i_wb_fwd_pkg     ),
        .o_rs1_forwarded(rs1_forwarded    ),
        .o_rs2_forwarded(rs2_forwarded    )
);


// -------------------------------------- OPERANDS SELECTION -----------------------------
logic [31:0] operand_a_selected;
logic [31:0] operand_b_selected;
logic [1:0]  operand_a_sel;
logic [1:0]  operand_b_sel;

assign operand_a_sel[0] =  (op_a_use_pc);
assign operand_a_sel[1] = ~(use_rs1 | op_a_use_pc);            // LUI

assign operand_b_sel[0] =  (op_b_use_imm);
assign operand_b_sel[1] = ~(use_rs2 | op_b_use_imm);


mux_4x1   Operand_A_Select  (
        .sel  (operand_a_sel     ),
        .i_0  (rs1_forwarded     ),  // 2'b00: Regfile or forwarded RS1 (default)
        .i_1  (pc                ),  // 2'b01: PC (for Branch instruction)     
        .i_2  (32'b0             ),  // 2'b10: Reserved or Operand A = 0             
        .i_3  (32'b0             ),  // 2'b11: Reserved or Operand A = 0                                         
        .o_mux(operand_a_selected)
);


mux_4x1   Operand_B_Select  (
        .sel  (operand_b_sel    ),
        .i_0  (rs2_forwarded    ),  // 2'b00: Regfile or forwarded RS2 (default)
        .i_1  (imm              ),  // 2'b01: immediate      
        .i_2  (32'b0            ),  // 2'b10: Reserved or Operand B = 0             
        .i_3  (32'b0            ),  // 2'b11: Reserved or Operand B = 0                                              
        .o_mux(operand_b_selected)
);


// OUTPUT
// 1. TO ALU
assign o_abt_alu_pkg.instr_op        = i_dcd_EX_pkg.instr_op;              // Mainly used for debugging
assign o_abt_alu_pkg.alu_op          = i_dcd_EX_pkg.alu_op;
assign o_abt_alu_pkg.branch_op       = i_dcd_EX_pkg.branch_op;
assign o_abt_alu_pkg.operand_a       = operand_a_selected;
assign o_abt_alu_pkg.operand_b       = operand_b_selected;
assign o_abt_alu_pkg.rs1_data        = rs1_forwarded;
assign o_abt_alu_pkg.rs2_data        = rs2_forwarded;
assign o_abt_alu_pkg.rd_addr         = rd_addr; 
assign o_abt_alu_pkg.pc              = pc;
assign o_abt_alu_pkg.wren            = i_dcd_EX_pkg.wren & ~i_dcd_EX_pkg.load_en;
assign o_abt_alu_pkg.prd_en          = i_dcd_EX_pkg.prd_en;
assign o_abt_alu_pkg.valid           = valid & ~(mul_start | div_start);   // Disbale ALU when starting MUL/DIV
assign o_abt_alu_pkg.predicted_instr = i_dcd_EX_pkg.predicted_instr;

// 2. TO MUL/DIV
assign o_abt_mul_pkg.operand_a       = rs1_forwarded;
assign o_abt_mul_pkg.operand_b       = rs2_forwarded;
assign o_abt_mul_pkg.mul_start       = mul_start; 
assign o_abt_mul_pkg.div_start       = div_start; 
assign o_abt_mul_pkg.mul_op          = i_dcd_EX_pkg.mul_op_sel;
assign o_abt_mul_pkg.div_op          = i_dcd_EX_pkg.div_op_sel;
assign o_abt_mul_pkg.rd_addr         = rd_addr; 
assign o_abt_mul_pkg.wren            = i_dcd_EX_pkg.wren;
assign o_abt_mul_pkg.valid           = valid;


// 3. TO LSU
assign o_abt_lsu_pkg.store_data      = rs2_forwarded;
assign o_abt_lsu_pkg.rd_addr         = rd_addr;
assign o_abt_lsu_pkg.load_en         = i_dcd_EX_pkg.load_en;  
assign o_abt_lsu_pkg.store_en        = i_dcd_EX_pkg.store_en;  
assign o_abt_lsu_pkg.lsu_byte        = i_dcd_EX_pkg.lsu_byte;  
assign o_abt_lsu_pkg.lsu_halfword    = i_dcd_EX_pkg.lsu_halfword;  
assign o_abt_lsu_pkg.lsu_signed      = i_dcd_EX_pkg.lsu_signed;  
assign o_abt_lsu_pkg.valid           = valid;  
assign o_abt_lsu_pkg.debug_pkg       = i_dcd_EX_pkg.debug_pkg;



endmodule 

