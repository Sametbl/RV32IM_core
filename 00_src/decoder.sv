import pipeline_pkg::*;

module decoder(
    input  logic         i_invalidate,      // Input  stall signal from pipeline to Insert a NOP operation
    input  fetch_t       i_fetch_dcd_pkg,   // Input  data package from Fetch Stage
    output decode_t      o_decode_pkg,      // Output decoded data package 
    output hazard_req_t  o_decode_hazard_pkg,
    output logic         o_ebreak,
    output logic         o_ecall  
);

// Alias
wire [31:0] pc; 
wire        valid;
wire        predicted_instr;

assign pc              = i_fetch_dcd_pkg.pc; 
assign valid           = i_fetch_dcd_pkg.valid; 
assign predicted_instr = i_fetch_dcd_pkg.prd_taken; 


// ---------------------------- Field Extractor --------------------
wire [31:0]   instr;      // Instruction
wire [4:0]    rs1_addr;   // Address of Source Register 1
wire [4:0]    rs2_addr;   // Address of Source Register 2
wire [4:0]    rd_addr;    // Address of Destination Register
wire [6:0]    opcode;     // opcode of instr
wire [7:0]    funct3;     // Values of funct3 (each bit correspond to a value)
wire [127:0]  funct7;     // Contain funct7 value:
                          // funct7[0] = (funct7 == 7'b000_0000)
                          // funct7[32] = (funct7 == 7'b010_0000)

assign rs1_addr  = i_fetch_dcd_pkg.instr[19:15];
assign rs2_addr  = i_fetch_dcd_pkg.instr[24:20];
assign rd_addr   = i_fetch_dcd_pkg.instr[11:7];
assign opcode    = i_fetch_dcd_pkg.instr[6:0];
assign instr     = i_fetch_dcd_pkg.instr;


// funct3 = instr[14:12];
assign funct3[0] = (instr[14:12] == 3'b000);  // 0
assign funct3[1] = (instr[14:12] == 3'b001);  // 1
assign funct3[2] = (instr[14:12] == 3'b010);  // 2
assign funct3[3] = (instr[14:12] == 3'b011);  // 3
assign funct3[4] = (instr[14:12] == 3'b100);  // 4
assign funct3[5] = (instr[14:12] == 3'b101);  // 5
assign funct3[6] = (instr[14:12] == 3'b110);  // 6
assign funct3[7] = (instr[14:12] == 3'b111);  // 7

// funct7 = instr[31:25];
assign funct7[0]  = (instr[31:25] == 7'b000_0000); // 0
assign funct7[1]  = (instr[31:25] == 7'b000_0001); // 1
assign funct7[32] = (instr[31:25] == 7'b010_0000); // 32


// ------------------------------ Instruction Classifier ---------------------------
// NOT Based on ISA of RV32I
logic R_type;    // Register  & Register type
logic I_type;    // Immediate & Register type (Not including JALR)
logic L_type;    // Loads                type
logic S_type;    // Stores               type
logic B_type;    // Branches             type
logic E_type;    // Environment          type (ECALL and EBREAK)
logic SYS_type;  // System               type (Reserved)

// Special instruction with specific opcode
logic LUI_op;
logic AUIPC_op;
logic JAL_op;
logic JALR_op;

// System operation (RESERVED)
// logic FENCE_type
// logic FENSE_TSO_type;
// logic PAUSE_type;

assign R_type   = (opcode == 7'b011_0011);
assign I_type   = (opcode == 7'b001_0011);
assign L_type   = (opcode == 7'b000_0011);
assign S_type   = (opcode == 7'b010_0011);
assign B_type   = (opcode == 7'b110_0011);
assign E_type   = (opcode == 7'b111_0011);
assign SYS_type = (opcode == 7'b000_1111);

assign LUI_op   = (opcode == 7'b011_0111);
assign JAL_op   = (opcode == 7'b110_1111);
assign JALR_op  = (opcode == 7'b110_0111);
assign AUIPC_op = (opcode == 7'b001_0111);


// Instruction indication signals (Based on ISA of RV32I)
instr_e       instr_op;
instr_type_e  instr_type;
logic [5:0]   instr_encoded;
logic [3:0]   instr_type_encoded;

logic add,  sub, slt,  sltu,  xor_, or_, and_, sll,  srl,  sra;        
logic addi,      slti, sltiu, xori, ori, andi, slli, srli, srai;
logic beq,  bne, blt,  bge,   bltu, bgeu;       
logic lb,   lh,  lw,   lbu,   lhu;        
logic sb,   sh,  sw;
logic lui,  auipc;      
logic jal,  jalr;       
logic ecall, ebreak, pause;      
logic mul, mulh, mulsu, mulu;
logic div, divu, rem,   remu;

assign lui   = LUI_op;                                                                                                                                                                                                                                                                  
assign auipc = AUIPC_op;                                                                                                                          
                     
assign jal   = JAL_op;                                                                                                                          
assign jalr  = JALR_op;                                                                                                                         
                                                          
assign beq    = B_type & funct3[0];                                                                                                                              
assign bne    = B_type & funct3[1];                                                                                                                              
assign blt    = B_type & funct3[4];                                                                                                                              
assign bge    = B_type & funct3[5];                                                                                                                              
assign bltu   = B_type & funct3[6];                                                                                                                              
assign bgeu   = B_type & funct3[7];                                                                                                                      
                                                   
assign lb     = L_type & funct3[0];                                                                                                                              
assign lh     = L_type & funct3[1];                                                                                                                              
assign lw     = L_type & funct3[2];                                                                                                                              
assign lbu    = L_type & funct3[4];                                                                                                                              
assign lhu    = L_type & funct3[5];                                                                                                                      
                                                    
assign sb     = S_type & funct3[0];                                                                                                                              
assign sh     = S_type & funct3[1];                                                                                                                              
assign sw     = S_type & funct3[2];                                                                                                                      
                                                       
assign addi   = I_type & funct3[0];                                                                                                                              
assign slti   = I_type & funct3[2];                                                                                                                              
assign sltiu  = I_type & funct3[3];                                                                                                                      
assign xori   = I_type & funct3[4];                                                                                                                              
assign ori    = I_type & funct3[6];                                                                                                                              
assign andi   = I_type & funct3[7];                                                                                                                              
assign slli   = I_type & funct3[1] & funct7[0];                                                                                                                          
assign srli   = I_type & funct3[5] & funct7[0];                                                                                                                          
assign srai   = I_type & funct3[5] & funct7[32];                                                                                                                          
                                                     
assign add    = R_type & funct3[0] & funct7[0];                                                                                                                          
assign sub    = R_type & funct3[0] & funct7[32];                                                                                                                          
assign slt    = R_type & funct3[2] & funct7[0];                                                                                                                          
assign sltu   = R_type & funct3[3] & funct7[0];                                                                                                                          
assign xor_   = R_type & funct3[4] & funct7[0];                                                                                                                          
assign or_    = R_type & funct3[6] & funct7[0];                                                                                                                          
assign and_   = R_type & funct3[7] & funct7[0];                                                                                                                          
assign sll    = R_type & funct3[1] & funct7[0];                                                                                                                          
assign srl    = R_type & funct3[5] & funct7[0];                                                                                                                          
assign sra    = R_type & funct3[5] & funct7[32];                                                                                                                          
                                                        
assign ecall  = E_type   & funct7[0] & (instr[19:7] == 13'b0) & (instr[24:20] == 5'b00000);                                                                                                                      
assign ebreak = E_type   & funct7[0] & (instr[19:7] == 13'b0) & (instr[24:20] == 5'b00001);                                                                                                                      
assign pause  = SYS_type & funct7[0] & (instr[19:7] == 13'b0) & (instr[24:20] == 5'b10000);                                                                                                                      

assign mul    = R_type & funct7[1] & funct3[0]; // M extension: rd = (rs1 * rs2) [31:0]  (signed   x signed)  
assign mulh   = R_type & funct7[1] & funct3[1]; // M extension: rd = (rs1 * rs2) [63:0]  (signed   x signed)  
assign mulsu  = R_type & funct7[1] & funct3[2]; // M extension: rd = (rs1 * rs2) [63:0]  (signed   x unsigned)
assign mulu   = R_type & funct7[1] & funct3[3]; // M extension: rd = (rs1 * rs2) [63:0]  (unsigned x unsigned)
assign div    = R_type & funct7[1] & funct3[4]; // M extension: rd = (rs1 / rs2)         (signed)             
assign divu   = R_type & funct7[1] & funct3[5]; // M extension: rd = (rs1 / rs2)         (unsigned)           
assign rem    = R_type & funct7[1] & funct3[6]; // M extension: rd = (rs1 % rs2)         (signed)             
assign remu   = R_type & funct7[1] & funct3[7]; // M extension: rd = (rs1 % rs2)         (unsigned)           


// DEBUG Purpose only
encoder_64to6     Encoding_instr_op (
    .in( {15'b0,
          remu, rem,   divu, div,
          mulu, mulsu, mulh, mul, 
          pause, ebreak, ecall,
          sra,   srl,  sll,  and_, or_, xor_, sltu,  slt,  sub, add,
          srai,  srli, slli, andi, ori, xori, sltiu, slti,      addi,
          sw,    sh,   sb,
          lhu,   lbu,  lw,  lh,  lb,
          bgeu,  bltu, bge, blt, bne, beq,
          jalr,  jal,
          auipc, lui, 1'b0}),  
    .out(instr_encoded)
);

// DEBUG Purpose only
encoder_16to4   Encoding_instr_type (
    .in ({8'b0, SYS_type, E_type, B_type,
                S_type,   L_type, I_type, R_type, 1'b0}),
    .out(instr_type_encoded)
);



assign instr_op   = instr_e'(instr_encoded);
assign instr_type = instr_type_e'(instr_type_encoded);


// ----------------------------- Immediate Generator ----------------------------
logic [31:0]   imm_I_TYPE;     // Immediate value for I_TYPE instructions (Including L_type)
logic [31:0]   imm_B_TYPE;     // Immediate value for B_TYPE instructions
logic [31:0]   imm_S_TYPE;     // Immediate value for S_TYPE and L_TYPE instructions
logic [31:0]   imm_SHIFT;      // Immedate shift amount (5-bit) for Shift Instructions
logic [31:0]   imm_JAL;        // Immediate value for JAL and JALR instructions
logic [31:0]   imm_UI;         // Immediate value for Upper Immediate instructions (LUI, AUIPC)
logic [31:0]   immediate;      // Selected immediate

logic [2:0]    instr_imm_sel;
logic imm_i_type_sel;
logic imm_b_type_sel;
logic imm_s_type_sel;
logic imm_shift_sel;
logic imm_jal_sel;
logic imm_ui_sel;

assign imm_I_TYPE = {{20{instr[31]}}, instr[31:20]};
assign imm_S_TYPE = {{20{instr[31]}}, instr[31:25], instr[11:7]};
assign imm_B_TYPE = {{19{instr[31]}}, instr[31], instr[7], instr[30:25],  instr[11:8],  1'b0};
assign imm_SHIFT  = {27'b0, instr[24:20]};     // For shift immediate
assign imm_JAL    = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
assign imm_UI     = {instr[31:12], 12'h0};     

assign imm_i_type_sel = (I_type | L_type | jalr) & ~(imm_shift_sel); // 3'b001 (1)                                                                                                                           
assign imm_s_type_sel = (S_type);                                    // 3'b010 (2)                                                                   
assign imm_b_type_sel = (B_type);                                    // 3'b011 (3)                                                                   
assign imm_shift_sel  = (slli | srli | srai);                        // 3'b100 (4)                                                                           
assign imm_jal_sel    = (jal);                                       // 3'b101 (5)                                                           
assign imm_ui_sel     = (lui | auipc);                               // 3'b110 (6)                                                                   

assign instr_imm_sel[0] = (imm_i_type_sel) | (imm_b_type_sel) | (imm_jal_sel);
assign instr_imm_sel[1] = (imm_s_type_sel) | (imm_b_type_sel) | (imm_ui_sel );
assign instr_imm_sel[2] = (imm_shift_sel ) | (imm_jal_sel   ) | (imm_ui_sel );


mux_8x1   Immediate_value_selection (
        .sel  (instr_imm_sel),
        .i_0  (32'b0        ),  // Default value = 0
        .i_1  (imm_I_TYPE   ),  // 3'b001: I_type, L_type, JALR and not SLLI, SRLI, SRAI                
        .i_2  (imm_S_TYPE   ),  // 3'b010: S_type                
        .i_3  (imm_B_TYPE   ),  // 3'b011: B_type                
        .i_4  (imm_SHIFT    ),  // 3'b100: SLLI, SRLI, SRAI                
        .i_5  (imm_JAL      ),  // 3'b101: JAL (not JALR)                
        .i_6  (imm_UI       ),  // 3'b110: LUI and AUIPC                
        .i_7  (32'b0        ),  // Reserved                
        .o_mux(immediate    )
);



// --------------------------------- Control signal ----------------------------------------
logic       wren;         // Write enable for Register Writeback operations
logic       prd_en;       // Enable ALU to update PRD (BTB)
logic       use_rs1;
logic       use_rs2;
logic       op_a_use_pc;  // Indicate the instruction use PC as operand 
logic       op_b_use_imm; // Indicate the instruction use immediate value

logic [2:0] alu_op;     // 3'b000: ADDER (ADD - SUB) (default)
                        // 3'b001: Comparator (SLT - SLTI - SLTU - SLTIU)
                        // 3'b010: Shifter (SRLI - SRAI - SLLI - SRL - SRA - SLL) 
                        // 3'b011: XOR operation (XOR - XORI)  
                        // 3'b100: AND operation (AND - ANDI)  
                        // 3'b101: OR  operation (OR  - ORI )  
                        // 3'b110: PC + 4        (JAL - JALR)  
                        // 3'b111: Reserved (ALU = 32'b0)  

logic [7:0] branch_op;  // 8'b0000_0001: BEQ
                        // 8'b0000_0010: BNE
                        // 8'b0000_0100: BLT
                        // 8'b0000_1000: BGE
                        // 8'b0001_0000: BLTU       
                        // 8'b0010_0000: BGEU       
                        // 8'b0100_0000: JAL       
                        // 8'b1000_0000: JALR       

logic       store_en;     // Indicate a Store operation 
logic       lsu_byte;     // Indicate a Load/Store operation with 1 byte
logic       lsu_halfword; // Indicate a Load/Store operation with 2 bytes
logic       lsu_signed;   // Indicate a Load operation is sign-extended

logic       mul_en;      // Indicate a Multiplication operation
logic       div_en;      // Indicate a Division operation
logic [1:0] mul_op_sel;  // Multiplication operation selection    
logic [1:0] div_op_sel;  // Division       operation selection    


assign use_rs1      = ~(lui | auipc | jal | E_type | SYS_type);
assign use_rs2      = B_type | S_type | R_type;
assign op_a_use_pc  = auipc  | jal | B_type;
assign op_b_use_imm = auipc  | jal | jalr | lui | L_type | I_type | S_type | B_type;
assign prd_en       = B_type | jal | jalr; 
assign wren         = auipc  | jal | jalr | lui | L_type | I_type | R_type;

assign store_en     =  (S_type);
assign lsu_byte     =  (sb | lb | lbu);
assign lsu_halfword =  (sh | lh | lhu);
assign lsu_signed   =  (lb | lh);

assign alu_op[0] =  (slt  | slti  | sltu | sltiu) | // Comparator
                    (xor_ | xori) | (or_ | ori  );  // XOR and OR

assign alu_op[1] =  (srli | srai  | slli) | (srl | sra | sll ) |  // Shifter
                    (xor_ | xori) |                               // XOR
                    (jal  | jalr);                                // JUMP

assign alu_op[2] =  (and_ | andi) |      // AND
                    (or_  | ori ) |      // OR
                    (jal  | jalr);       // JUMP

assign branch_op[0] = beq;
assign branch_op[1] = bne;
assign branch_op[2] = blt;
assign branch_op[3] = bge;
assign branch_op[4] = bltu;
assign branch_op[5] = bgeu;
assign branch_op[6] = jal;
assign branch_op[7] = jalr;

//                       0      1      2      3
assign mul_en        = (mul | mulh | mulsu | mulu); 
assign mul_op_sel[0] = (mulu) | (mulh );
assign mul_op_sel[1] = (mulu) | (mulsu);

//                       0      1     2       3
assign div_en        = (div | divu | rem   | remu);
assign div_op_sel[0] = (remu) | (divu); 
assign div_op_sel[1] = (remu) | (rem ); 

// ---------------------------------- Output package ------------------
// To Hazard Detection
assign o_decode_hazard_pkg.rs1_addr = rs1_addr; 
assign o_decode_hazard_pkg.rs2_addr = rs2_addr; 
assign o_decode_hazard_pkg.rd_addr  = rd_addr;
assign o_decode_hazard_pkg.use_rs1  = use_rs1; 
assign o_decode_hazard_pkg.use_rs2  = use_rs2; 
assign o_decode_hazard_pkg.mul_en   = mul_en;
assign o_decode_hazard_pkg.div_en   = div_en;
assign o_decode_hazard_pkg.wren     = wren;
assign o_decode_hazard_pkg.valid    = valid;

// ALU
assign o_decode_pkg.instr_op        = instr_op;
assign o_decode_pkg.rs1_addr        = rs1_addr;
assign o_decode_pkg.rs2_addr        = rs2_addr;
assign o_decode_pkg.rd_addr         = rd_addr;
assign o_decode_pkg.imm             = immediate;
assign o_decode_pkg.pc              = pc;       
assign o_decode_pkg.op_a_use_pc     = op_a_use_pc;
assign o_decode_pkg.op_b_use_imm    = op_b_use_imm;
assign o_decode_pkg.use_rs1         = use_rs1;
assign o_decode_pkg.use_rs2         = use_rs2;
assign o_decode_pkg.alu_op          = alu_op;

// Branch Handling
assign o_decode_pkg.prd_en          = prd_en;
assign o_decode_pkg.predicted_instr = predicted_instr;
assign o_decode_pkg.branch_op       = branch_op;

// LSU
assign o_decode_pkg.load_en         = L_type;
assign o_decode_pkg.store_en        = store_en;
assign o_decode_pkg.lsu_byte        = lsu_byte;
assign o_decode_pkg.lsu_halfword    = lsu_halfword;
assign o_decode_pkg.lsu_signed      = lsu_signed;

// MUL/DIV
assign o_decode_pkg.mul_en          = mul_en;
assign o_decode_pkg.div_en          = div_en;
assign o_decode_pkg.mul_op_sel      = mul_op_sel;
assign o_decode_pkg.div_op_sel      = div_op_sel;
//assign o_decode_pkg.


// General 
assign o_decode_pkg.wren            = wren;
assign o_decode_pkg.valid           = valid & ~i_invalidate;

assign o_ecall    = ecall;      // FIXME: Not-used
assign o_ebreak   = ebreak;     // FIXME: Not-used
// assign o_decode_pkg.debug_data      =




























// // DEBUG
// assign o_decode_pkg.debug_pkg.db_instr_op        = instr_op;  
// assign o_decode_pkg.debug_pkg.db_rs1_addr        = register_idx'(rs1_addr);  
// assign o_decode_pkg.debug_pkg.db_rs2_addr        = register_idx'(rs2_addr);  
// assign o_decode_pkg.debug_pkg.db_rd_addr         = register_idx'(rd_addr);  
// assign o_decode_pkg.debug_pkg.db_imm             = immediate;  
// assign o_decode_pkg.debug_pkg.db_pc              = pc; 
// assign o_decode_pkg.debug_pkg.db_op_a_use_pc     = op_a_use_pc;  
// assign o_decode_pkg.debug_pkg.db_op_b_use_imm    = op_b_use_imm;  
// assign o_decode_pkg.debug_pkg.db_use_rs1         = use_rs1;  
// assign o_decode_pkg.debug_pkg.db_use_rs2         = use_rs2;  
// assign o_decode_pkg.debug_pkg.db_valid           = valid;  
// assign o_decode_pkg.debug_pkg.db_wren            = wren;  
// assign o_decode_pkg.debug_pkg.db_rd_data_sel     = rd_data_sel;  
// assign o_decode_pkg.debug_pkg.db_prd_en          = prd_en;  
// assign o_decode_pkg.debug_pkg.db_predicted_instr = predicted_instr;  
// assign o_decode_pkg.debug_pkg.db_store_en        = store_en;  
// assign o_decode_pkg.debug_pkg.db_lsu_byte        = lsu_byte;  
// assign o_decode_pkg.debug_pkg.db_lsu_halfword    = lsu_halfword;  
// assign o_decode_pkg.debug_pkg.db_lsu_signed      = lsu_signed;  


endmodule : decoder




