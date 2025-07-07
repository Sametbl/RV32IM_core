// Forwarding_cell module is defined at the end of file

module forwarding_unit(
    input   logic [4:0]  i_rs1_addr     ,  // Address of Source Register 1
    input   logic [4:0]  i_rs2_addr     ,  // Address of Source Register 2
    input   logic [31:0] i_rs1_data     ,  // Data of Source Register 1
    input   logic [31:0] i_rs2_data     ,  // Data of Source Register 2
    input   logic        i_valid        ,  // The current instruction in ID stage is valid
    input   logic        i_use_rs1      ,  // The current instruction in ID stage uses RS1
    input   logic        i_use_rs2      ,  // The current instruction in ID stage uses RS2
 
    input   fwd_t        i_mem_fwd_pkg  ,
    input   fwd_t        i_wb_fwd_pkg   ,
    output  logic [31:0] o_rs1_forwarded,
    output  logic [31:0] o_rs2_forwarded
);


logic [31:0] mem_fwd_data;
logic [4:0]  mem_rd_addr;
logic        mem_fwd_allow;

logic [31:0] wb_fwd_data;
logic [4:0]  wb_rd_addr;
logic        wb_fwd_allow;

assign mem_rd_addr   = i_mem_fwd_pkg.fwd_rd_addr;
assign mem_fwd_data  = i_mem_fwd_pkg.fwd_rd_data;
assign mem_fwd_allow = i_mem_fwd_pkg.fwd_allow;

assign wb_rd_addr    = i_wb_fwd_pkg.fwd_rd_addr;
assign wb_fwd_data   = i_wb_fwd_pkg.fwd_rd_data;
assign wb_fwd_allow  = i_wb_fwd_pkg.fwd_allow;

// ----------------------------------------------------
logic [1:0] rs1_fwd_flags; // RS1 fowarding flags, each bit correspond to a fowarding Location
logic [1:0] rs2_fwd_flags; // RS2 fowarding flags, each bit correspond to a fowarding Location
logic       rs1_mem_matched;
logic       rs2_mem_matched;
logic       rs1_wb_matched;
logic       rs2_wb_matched;

//---------------------------- Forwarding Check ---------------------------------
forwarding_cell    FWD_check_MEM_stage  (
        .i_rs1_addr       (i_rs1_addr     ),   
        .i_rs2_addr       (i_rs2_addr     ),   
        .i_rd_addr_buff   (mem_rd_addr    ),   
        .i_fwd_allow      (mem_fwd_allow  ),
        .o_fwd_rs1_matched(rs1_mem_matched),
        .o_fwd_rs2_matched(rs2_mem_matched)
);

forwarding_cell    FWD_check_WB_stage  (
        .i_rs1_addr       (i_rs1_addr     ),   
        .i_rs2_addr       (i_rs2_addr     ),   
        .i_rd_addr_buff   (wb_rd_addr     ),   
        .i_fwd_allow      (wb_fwd_allow   ),
        .o_fwd_rs1_matched(rs1_wb_matched ),
        .o_fwd_rs2_matched(rs2_wb_matched )
);

// One-hot encoded
// Prioritize the close Forwarding location to the EX stage
assign rs1_fwd_flags[0] = i_valid & i_use_rs1 & rs1_mem_matched;
assign rs1_fwd_flags[1] = i_valid & i_use_rs1 & rs1_wb_matched  & ~rs1_mem_matched;

assign rs2_fwd_flags[0] = i_valid & i_use_rs2 & rs2_mem_matched;
assign rs2_fwd_flags[1] = i_valid & i_use_rs2 & rs2_wb_matched  & ~rs2_mem_matched;


// ----------------------- Source Register Forwarding ---------------------------------
logic [1:0] rs1_data_sel;
logic [1:0] rs2_data_sel;

assign rs1_data_sel[0] = rs1_fwd_flags[0];
assign rs1_data_sel[1] = rs1_fwd_flags[1];

assign rs2_data_sel[0] = rs2_fwd_flags[0];
assign rs2_data_sel[1] = rs2_fwd_flags[1];


mux_4x1   RS1_Select  (
        .sel  (rs1_data_sel      ),
        .i_0  (i_rs1_data        ),   // 2'b00: Regfile (default)          
        .i_1  (mem_fwd_data      ),   // 2'b01: EX  stage              
        .i_2  (wb_fwd_data       ),   // 2'b10: MEM stage                                 
        .i_3  (32'b0             ),   // 2'b11: Reserved                                                    
        .o_mux(o_rs1_forwarded   )
);

mux_4x1   RS2_Select  (
        .sel  (rs2_data_sel      ),
        .i_0  (i_rs2_data        ),    // 2'b00: Regfile (default)                                                  
        .i_1  (mem_fwd_data      ),    // 2'b01: EX  stage                              
        .i_2  (wb_fwd_data       ),    // 2'b10: MEM stage                                          
        .i_3  (32'b0             ),    // 2'b11: Reserved                                                               
        .o_mux(o_rs2_forwarded   )                                      
);



endmodule








//----------------------------------------------------------------------------------
module forwarding_cell(
    input  logic [4:0] i_rs1_addr     ,   // Current RS1 address to be compared
    input  logic [4:0] i_rs2_addr     ,   // Current RS2 address to be compared
    input  logic [4:0] i_rd_addr_buff ,   // RD address from buffer to be compared to
    input  logic       i_fwd_allow    ,
    output logic       o_fwd_rs1_matched,
    output logic       o_fwd_rs2_matched
);

logic rs1_matched;
logic rs2_matched;
logic rd_addr_R0;

assign rs1_matched = (i_rs1_addr == i_rd_addr_buff);
assign rs2_matched = (i_rs2_addr == i_rd_addr_buff);
assign rd_addr_R0  = (i_rd_addr_buff == 5'b0);


assign o_fwd_rs1_matched = (rs1_matched) & (i_fwd_allow) & ~rd_addr_R0;
assign o_fwd_rs2_matched = (rs2_matched) & (i_fwd_allow) & ~rd_addr_R0;

endmodule

