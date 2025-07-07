module processor_tb;

reg        clk_i;
reg        rst;
reg [31:0] sw_tb;
reg [31:0] input_port_tb;
reg [31:0] output_port_A_tb;
reg [31:0] output_port_B_tb;
reg [31:0] output_port_C_tb;
reg [31:0] output_port_D_tb;


reg [31:0] clk_counter;

processor   dut (
    .clk_i        (clk_i           ),
    .rst          (rst             ),
    .input_switch (sw_tb           ),   
    .input_port   (input_port_tb   ),   
    .output_port_A(output_port_A_tb),  
    .output_port_B(output_port_B_tb),  
    .output_port_C(output_port_C_tb),                   
    .output_port_D(output_port_D_tb)      
    //.debug_next_PC_d    (),
    //.debug_next_PC_q    (),
    //.debug_PC_at_ID     (),
    //.debug_PC_at_ALU    (),  
    //.debug_pc_sel       (),        
    //.debug_branch_taken (),  
    //.debug_prd_en       (),        
    //.debug_branch_miss  (),   
    //.debug_stall        ()                      
);



always_ff @(posedge clk_i) begin
        if(rst)             clk_counter <= 0;
        else                clk_counter <= clk_counter + 1;     
end


initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, dut);
end

initial begin
     #0          clk_i = 1;
     forever #20 clk_i = ~clk_i;
end

initial begin
    #0   rst = 1'b1;       
    #40; rst = 1'b0;       
end

// initial begin
//     #0      input_port_tb = 32'd0;       
//     #24000; input_port_tb = 32'd1;    
//     #1000000;  input_port_tb = 32'd0;    
// end
  
// initial begin
//     #0                  sw_tb = 32'h0000_0000; 
//     // #100;  forever #200 sw_tb = random;  
//     #100;               sw_tb = -0_000_038_674;  
// end

// initial begin
//     #0                  input_port_tb = 32'h0000_0000; 
//     // #100;  forever #2000 input_port_tb = $random;  
//     #100;               input_port_tb = $random;  
// end
// initial begin
//     #0                sw_tb = 32'h0000_0000A; 
//   #10  forever #100000           sw_tb = $urandom_range(0, 2000); 
// end

initial begin
  #0         sw_tb = 1; 
  #100000  sw_tb = 4; 
  #100000  sw_tb = 8; 
  #100000  sw_tb = 9; 
  #100000  sw_tb = 10; 
  #100000  sw_tb = 15; 
  #100000  sw_tb = 16; 
  #100000  sw_tb = 20; 
  #100000  sw_tb = 25; 
end


initial begin
    #0;                 input_port_tb    = 32'h0000_0001; 
    #100000;             input_port_tb = 32'h0000_0005; 
    #100000;             input_port_tb = 32'h0000_0005; 
end


initial begin
  #5000000;     
    $finish;
end


endmodule

