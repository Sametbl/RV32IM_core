import pipeline_pkg::lsu_t;

module lsu (
    input  logic            i_clk            ,
    input  logic            i_rst            ,
    input  logic            i_stall          ,
    input  logic            i_invalidate     ,
    input  lsu_t            i_lsu_ctrl_pkg   ,
    input  logic    [31:0]  i_effective_addr ,
    output pipe_buff_t      o_lsu_wb_pkg     ,

    // Peripherals
    input  logic    [31:0]  i_sw             ,
    input  logic    [31:0]  i_in_port        ,
    output logic    [31:0]  o_out_port_A     ,
    output logic    [31:0]  o_out_port_B     ,
    output logic    [31:0]  o_out_port_C     ,
    output logic    [31:0]  o_out_port_D
);


// Control signal package to be held while waiting for D-Cache to respond
typedef struct packed{
    logic [31:0] address;   
    logic [4:0]  rd_addr; 
    logic        load_en;     
    logic        lsu_byte;     
    logic        lsu_halfword; 
    logic        lsu_signed;   
    logic        valid;        
    logic        imem_region_en;
    logic        omem_region_en;
} lsu_ctrl_t;

lsu_ctrl_t   lsu_ctrl_pkd_d;  //  
lsu_ctrl_t   lsu_ctrl_pkd_q;  // Control signal package held during Memory operation 

wire [31:0] address;
wire [31:0] address_q;
wire [31:0] store_data;
wire [4:0]  rd_addr;
wire        load_en;
wire        store_en;
wire        lsu_byte;
wire        lsu_halfword;
wire        lsu_signed;
wire        valid;

assign address_q    = lsu_ctrl_pkd_q.address;
assign store_data   = i_lsu_ctrl_pkg.store_data;
assign rd_addr      = i_lsu_ctrl_pkg.rd_addr;
assign lsu_byte     = i_lsu_ctrl_pkg.lsu_byte;
assign lsu_halfword = i_lsu_ctrl_pkg.lsu_halfword;
assign lsu_signed   = i_lsu_ctrl_pkg.lsu_signed;
assign valid        = i_lsu_ctrl_pkg.valid & ~i_invalidate;
assign load_en      = i_lsu_ctrl_pkg.load_en & valid;
assign store_en     = i_lsu_ctrl_pkg.store_en & valid;





mux_2x1   restore_address (
        .sel  (i_stall               ),
        .i_0  (i_effective_addr      ),   
        .i_1  (lsu_ctrl_pkd_q.address),  
        .o_mux(address)
);


// Data   Memory:      0x000  --> 0x3FF    (12'b0000_0000_0000  --> 12'b0011_1111_1111)
// Input  Peripheral:  0x400  --> 0x4FF    (12'b0100_0000_0000  --> 12'b0100_1111_1111)
// Output Peripheral:  0x500  --> 0x5FF    (12'b0101_0000_0000  --> 12'b0101_1111_1111)

logic dmem_region_en;  // Indicate the address enables Data Memory       region  
logic imem_region_en;  // Indicate the address enables Input  Peripheral region  
logic omem_region_en;  // Indicate the address enables Output Peripheral region  
logic unused_region;

assign unused_region = ~|(address[31:11]);

assign dmem_region_en = (unused_region) & (~address[10]);   
assign imem_region_en = (unused_region) & ( address[10] & ~address[9] & ~address[8]);
assign omem_region_en = (unused_region) & ( address[10] & ~address[9] &  address[8]);

// ================================== MEMORY ACCESS ============================
// --------------------------------- Data Memory ----------------------
logic [31:0] dmem_rdata;
logic [3:0]  bytemask;
logic        dmem_wren;

assign bytemask[0] = 1'b1;                       // HIGH for Word, Halfword, Byte operations
assign bytemask[1] = ~lsu_byte;                  // HIGH for Word, Halfword       operations
assign bytemask[2] = ~lsu_byte & ~lsu_halfword;  // HIGH for Word                 operations
assign bytemask[3] = ~lsu_byte & ~lsu_halfword;  // HIGH for Word                 operations

assign dmem_wren = store_en & dmem_region_en & ~i_stall;

RAM_1port  D_cache (
    .clock  (i_clk         ),
    .address(address[9:0]  ),   // Read/Write Address   
    .byteena(bytemask      ),
    .data   (store_data    ),   // Write Data  
    .wren   (dmem_wren     ),   // Write Enable
    .q      (dmem_rdata    )    // Read  Data  
);

// ------------------------------ Input Peripheral ---------------------
logic [31:0] I_switch_data;
logic [31:0] I_gpi_data;
logic [31:0] I_peripheral_mem_rdata;
logic [1:0]  I_peripheral_mem_sel;

assign I_peripheral_mem_sel[0]  =  lsu_ctrl_pkd_q.imem_region_en & address_q[4];
assign I_peripheral_mem_sel[1]  = ~lsu_ctrl_pkd_q.imem_region_en | address_q[7] | address_q[6] | address_q[5];

register   I_SWITCH (.clk(i_clk), .rst(i_rst), .en(1'b1), .D(i_sw),      .Q(I_switch_data) );
register   I_GPI    (.clk(i_clk), .rst(i_rst), .en(1'b1), .D(i_in_port), .Q(I_gpi_data   ) );

mux_4x1   Input_peripheral_select(
        .sel  (I_peripheral_mem_sel  ),
        .i_0  (I_switch_data         ),   // Addr == 8'b0000_0000
        .i_1  (I_gpi_data            ),   // Addr == 8'b0001_0000
        .i_2  (32'b0                 ),
        .i_3  (32'b0                 ),
        .o_mux(I_peripheral_mem_rdata)
);




// ------------------------------ Output Peripheral ---------------------
logic [31:0] O_portA_data;
logic [31:0] O_portB_data;
logic [31:0] O_portC_data;
logic [31:0] O_portD_data;
logic [31:0] O_peripheral_mem_rdata;
logic [2:0]  O_peripheral_mem_sel;
logic        portA_wren;  // Addr[7:0] == 8'b0000_0000
logic        portB_wren;  // Addr[7:0] == 8'b0001_0000
logic        portC_wren;  // Addr[7:0] == 8'b0010_0000
logic        portD_wren;  // Addr[7:0] == 8'b0011_0000


assign  portA_wren = store_en & omem_region_en & ~address[7] & ~address[6] & ~address[5] & ~address[4];
assign  portB_wren = store_en & omem_region_en & ~address[7] & ~address[6] & ~address[5] &  address[4];
assign  portC_wren = store_en & omem_region_en & ~address[7] & ~address[6] &  address[5] & ~address[4];
assign  portD_wren = store_en & omem_region_en & ~address[7] & ~address[6] &  address[5] &  address[4];

assign O_peripheral_mem_sel[0] = lsu_ctrl_pkd_q.omem_region_en & address_q[4];
assign O_peripheral_mem_sel[1] = lsu_ctrl_pkd_q.omem_region_en & address_q[5];
assign O_peripheral_mem_sel[2] = lsu_ctrl_pkd_q.omem_region_en & address_q[7] | address_q[6];

register   O_PORTA (.clk(i_clk), .rst(i_rst), .en(portA_wren), .D(store_data), .Q(O_portA_data) );
register   O_PORTB (.clk(i_clk), .rst(i_rst), .en(portB_wren), .D(store_data), .Q(O_portB_data) );
register   O_PORTC (.clk(i_clk), .rst(i_rst), .en(portC_wren), .D(store_data), .Q(O_portC_data) );
register   O_PORTD (.clk(i_clk), .rst(i_rst), .en(portD_wren), .D(store_data), .Q(O_portD_data) );


mux_8x1   Output_peripheral_select(
        .sel  (O_peripheral_mem_sel  ),
        .i_0  (O_portA_data          ),   // Addr == 8'b0000_0000
        .i_1  (O_portB_data          ),   // Addr == 8'b0001_0000
        .i_2  (O_portC_data          ),
        .i_3  (O_portD_data          ),
        .i_4  (32'b0                 ),
        .i_5  (32'b0                 ),
        .i_6  (32'b0                 ),
        .i_7  (32'b0                 ),
        .o_mux(O_peripheral_mem_rdata)
);

// =========================================== MEM / WB buffer ==================================
logic [31:0] mem_data;

assign lsu_ctrl_pkd_d.address        = address;
assign lsu_ctrl_pkd_d.rd_addr        = rd_addr;
assign lsu_ctrl_pkd_d.load_en        = load_en;
assign lsu_ctrl_pkd_d.lsu_byte       = lsu_byte;
assign lsu_ctrl_pkd_d.lsu_halfword   = lsu_halfword;
assign lsu_ctrl_pkd_d.lsu_signed     = lsu_signed;
assign lsu_ctrl_pkd_d.valid          = valid;
assign lsu_ctrl_pkd_d.imem_region_en = imem_region_en;
assign lsu_ctrl_pkd_d.omem_region_en = omem_region_en;
        
register #(.WIDTH($bits(lsu_ctrl_pkd_d)))  MEM_WB_buffer (
    .clk(i_clk         ),
    .rst(i_rst         ), 
    .en (~i_stall      ),
    .D  (lsu_ctrl_pkd_d),
    .Q  (lsu_ctrl_pkd_q)
);

wire valid_q;
wire load_en_q;
wire lsu_byte_q;
wire lsu_signed_q;
wire lsu_halfword_q;

assign load_en_q      = lsu_ctrl_pkd_q.load_en;
assign valid_q        = lsu_ctrl_pkd_q.valid;
assign lsu_signed_q   = lsu_ctrl_pkd_q.lsu_signed;
assign lsu_byte_q     = lsu_ctrl_pkd_q.lsu_byte;
assign lsu_halfword_q = lsu_ctrl_pkd_q.lsu_halfword;
// ------------------------------- Select Load Data ---------------------------
mux_8x1   Read_data_selection(
        .sel  (lsu_ctrl_pkd_q.address[10:8] | {3{~(load_en_q & valid_q)}}),
        .i_0  (dmem_rdata                     ),  // Data Memory:       Addr = 0x000  --> 0x0FF
        .i_1  (dmem_rdata                     ),  // Data Memory:       Addr = 0x100  --> 0x1FF 
        .i_2  (dmem_rdata                     ),  // Data Memory:       Addr = 0x200  --> 0x2FF
        .i_3  (dmem_rdata                     ),  // Data Memory:       Addr = 0x300  --> 0x3FF
        .i_4  (I_peripheral_mem_rdata         ),  // Input  Peripheral: Addr = 0x400  --> 0x4FF
        .i_5  (O_peripheral_mem_rdata         ),  // Output Peripheral: Addr = 0x500  --> 0x5FF
        .i_6  (32'b0                          ),  // Reserved: Addr = 0x600 --> 0x6FF
        .i_7  (32'b0                          ),  // Reserved: Addr = 0x700 --> 0x7FF
        .o_mux(mem_data                       )
);


logic [31:0]     lsu_rdata;          // LSU load data after applied bytemask
logic [1:0]      rdata_byte1_sel;    // Select data for byte 1
logic [1:0]      rdata_byte2_3_sel;  // Select data for byte 2 and 3
assign rdata_byte1_sel[0]   =  (lsu_signed_q) & (lsu_byte_q);
assign rdata_byte1_sel[1]   = ~(lsu_signed_q) & (lsu_byte_q);
assign rdata_byte2_3_sel[0] = ~(lsu_signed_q) & (lsu_byte_q) | (lsu_halfword_q);
assign rdata_byte2_3_sel[1] =  (lsu_signed_q) & (lsu_byte_q  |  lsu_halfword_q);


assign lsu_rdata[7:0] = mem_data[7:0];


mux_4x1 #(.WIDTH(8)) rdata_byte_1_sel(
        .sel  (rdata_byte1_sel  ),
        .i_0  (mem_data[15:8]   ),  // For Word & Halfword operations 
        .i_1  ({8{mem_data[7]}} ),  // For signed   Byte operation (Sign Extended of byte 0)
        .i_2  (8'b0             ),  // For unsigned Byre operation (Not sign extended or Not Masked)
        .i_3  (8'b0             ),  // For unsigned Byre operation (Not sign extended or Not Masked)
        .o_mux(lsu_rdata[15:8]  )
);



mux_4x1 #(.WIDTH(16))  rdata_byte_2_3_sel(
        .sel  (rdata_byte2_3_sel ),
        .i_0  (mem_data[31:16]   ),  // For        Word     operation
        .i_1  (16'b0             ),  // For unsigned Byte and Halfword (Not sign extended or Not Masked)
        .i_2  ({16{mem_data[7]}} ),  // For signed Byte     operation  (Sign Extended of byte 0)
        .i_3  ({16{mem_data[15]}}),  // For signed Halfword operation  (Sign Extended of byte 1)
        .o_mux(lsu_rdata[31:16]  )
);




// OUTPUT
assign o_out_port_A    = O_portA_data;
assign o_out_port_B    = O_portB_data;
assign o_out_port_C    = O_portC_data;
assign o_out_port_D    = O_portD_data;



assign o_lsu_wb_pkg.rd_data      = lsu_rdata;
assign o_lsu_wb_pkg.rd_addr      = lsu_ctrl_pkd_q.rd_addr;
assign o_lsu_wb_pkg.wren         = ~i_stall & load_en_q;
assign o_lsu_wb_pkg.valid        = ~i_stall & valid_q;







// DEBUG
instr_e instruction;
assign instruction = i_lsu_ctrl_pkg.debug_pkg.db_instr_op;




endmodule : lsu



