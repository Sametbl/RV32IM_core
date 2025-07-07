// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vprocessor_tb__Syms.h"


VL_ATTR_COLD void Vprocessor_tb___024root__trace_init_sub__TOP__0(Vprocessor_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("processor_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1072,0,"sw_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"input_port_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"output_port_A_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"output_port_B_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"output_port_C_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"output_port_D_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"clk_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1072,0,"input_switch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"input_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"output_port_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"output_port_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"output_port_C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"output_port_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"IF_buffer_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ID_buffer_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EX_buffer_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"MEM_buffer_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"branch_miss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"stall_by_hazard_detection",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"stall_by_mul_div_proceed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"ID_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"EX_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"MEM_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"alu_prd_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+15,0,"fetch_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+18,0,"decode_pkg_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->declArray(c+25,0,"decode_pkg_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->declBus(c+32,0,"mul_status_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"div_status_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+34,0,"decode_hazard_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+35,0,"wb_rf_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+37,0,"EX_rs_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+39,0,"rf_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rf_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"WB_rs1_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"WB_rs2_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"WB_rs1_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"WB_rs2_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"flush_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"flush_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+47,0,"abt_lsu_pkg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->declArray(c+52,0,"abt_lsu_pkg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->declQuad(c+57,0,"alu_mem_pkg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+59,0,"alu_mem_pkg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declArray(c+61,0,"abt_alu_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 288,0);
    tracep->declArray(c+71,0,"abt_mul_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declQuad(c+74,0,"mem_fwd_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+35,0,"wb_fwd_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+76,0,"alu_wb_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+78,0,"mul_wb_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+80,0,"lsu_wb_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+82,0,"mul_div_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+83,0,"wb_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+85,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"wb_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+61,0,"i_abt_alu_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 288,0);
    tracep->declBit(c+1083,0,"i_invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"o_alu_prd_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declQuad(c+57,0,"o_alu_mem_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+87,0,"instr_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+88,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+95,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1084,0,"rd_data_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+96,0,"wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"prd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"predicted_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"br_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"OR_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"AND_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"XOR_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"cmp_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"adder_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"shifter_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"output_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"reserved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"cmp_crtl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"adder_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"shifter_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1086,0,"reserved_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"br_unsigned_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rs1_eq_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"rs1_lt_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"rs1_gt_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU_Adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+88,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+127,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+129,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+131,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_comparator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"is_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"A_pos_B_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"A_neg_B_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"same_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"eq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"la_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"sm_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"eq_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"la_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"sm_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"eq_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"la_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+147,0,"sm_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"eq_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"la_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sm_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"unsigned_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"unsigned_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"signed_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"signed_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Layer1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+162,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+168,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+180,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+186,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+192,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+198,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ALU_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+94,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+113,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_shifter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"shift_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"bin_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"reversed_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"reversed_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"shift_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"shift_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"shift_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"shift_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"shift_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"mux_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"mux_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"mux_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"mux_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"mux_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"left_logic_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"right_arith_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"reserved_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"out_of_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"mux_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+221,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+222,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+223,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+224,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+225,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+214,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_rev_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+215,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Branch_Condition_Check", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"is_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"A_pos_B_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"A_neg_B_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"same_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"eq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"la_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"sm_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"eq_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"la_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"sm_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+235,0,"eq_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+236,0,"la_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+237,0,"sm_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+120,0,"eq_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"la_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sm_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"unsigned_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"unsigned_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"signed_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"signed_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Layer1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+246,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+252,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+258,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+263,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+264,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+268,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+270,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+276,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+282,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+288,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PC_plus4_Adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+293,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1089,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+295,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1091,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Arbitrating", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+25,0,"i_dcd_EX_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->declQuad(c+37,0,"i_rs_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+297,0,"i_mul_busy_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"i_div_busy_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"i_mem_fwd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+35,0,"i_wb_fwd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declArray(c+61,0,"o_abt_alu_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 288,0);
    tracep->declArray(c+71,0,"o_abt_mul_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+47,0,"o_abt_lsu_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->declBus(c+299,0,"rs1_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"rs2_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+304,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+305,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+306,0,"use_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"use_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"op_a_use_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"op_b_use_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"mul_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"div_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"mem_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1094,0,"wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1095,0,"mem_fwd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"wb_fwd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1097,0,"rs1_fwd_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1098,0,"rs2_fwd_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+313,0,"operand_a_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"operand_b_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"operand_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"operand_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("Operand_A_Select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+315,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Operand_B_Select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+316,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+304,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+317,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+310,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"i_use_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_use_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"i_mem_fwd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+35,0,"i_wb_fwd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+299,0,"o_rs1_forwarded",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"o_rs2_forwarded",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"mem_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"mem_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+321,0,"mem_fwd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"wb_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+324,0,"wb_fwd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"rs1_fwd_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"rs2_fwd_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+327,0,"rs1_mem_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"rs2_mem_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"rs1_wb_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"rs2_wb_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"rs1_data_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"rs2_data_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("FWD_check_MEM_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+304,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"i_rd_addr_buff",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+321,0,"i_fwd_allow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"o_fwd_rs1_matched",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"o_fwd_rs2_matched",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"rs1_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"rs2_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"rd_addr_R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_check_WB_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+304,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"i_rd_addr_buff",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+324,0,"i_fwd_allow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"o_fwd_rs1_matched",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"o_fwd_rs2_matched",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"rs1_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"rs2_matched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"rd_addr_R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RS1_Select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+325,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RS2_Select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+326,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+318,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EX_ALU_data_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1099,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+57,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+59,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->pushPrefix("EX_LSU_control_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1100,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+47,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->declArray(c+52,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->popPrefix();
    tracep->pushPrefix("Fetch_Unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_fetch_buff_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"i_alu_prd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+15,0,"o_fetch_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+8,0,"o_branch_miss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"pc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"next_pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"next_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"prd_br_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"prd_br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"alu_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"alu_pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"alu_update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"alu_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"alu_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"alu_update_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"alu_br_already_prd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"br_miss_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"br_miss_nt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"branch_miss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"prd_br_taken_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"prd_br_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,0,"cache_instr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1102,0,"cache_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+347,0,"fetch_pkg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+1075,0,"IF_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("PC_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+344,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC_plus4_Adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+351,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+352,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+354,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+356,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1091,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"i_br_update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"i_br_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"i_br_update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"i_br_update_already_prd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"i_br_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"i_br_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"i_current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"o_prd_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"o_prd_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fetch_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1103,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+347,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+15,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("initialization_bit1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("initialization_bit2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("instr_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"cache_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_prd_takn_indicator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Hazard_Detection", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_decode_hazard_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+305,0,"i_ex_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+363,0,"i_ex_load_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"i_ex_mul_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"i_ex_div_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"i_wb_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"i_wb_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"i_mul_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"i_div_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"o_rs1_eq_rd_WB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_rs2_eq_rd_WB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_flush_MUL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"o_flush_DIV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_stall_from_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"ID_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+367,0,"ID_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+368,0,"ID_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+369,0,"ID_use_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"ID_use_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"ID_mul_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"ID_div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"ID_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"ID_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rs1_eq_rd_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"rs2_eq_rd_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"rs1_eq_rd_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"rs2_eq_rd_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"rs1_eq_rd_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"rs2_eq_rd_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"rs1_eq_rd_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"rs2_eq_rd_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"rs1_not_R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"rs2_not_R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"rd_not_R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"wait_for_load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"wait_for_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"wait_for_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"raw_depend_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"raw_depend_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"waw_depend_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"waw_depend_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ID_Decoder_package_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1107,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+18,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->declArray(c+25,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->popPrefix();
    tracep->pushPrefix("ID_Regfile_data_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+391,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("Instr_Decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"i_invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+15,0,"i_fetch_dcd_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+18,0,"o_decode_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 217,0);
    tracep->declBus(c+34,0,"o_decode_hazard_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+393,0,"o_ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"o_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"predicted_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+367,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+368,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+398,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+399,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+400,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+404,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"L_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"E_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"SYS_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"LUI_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"AUIPC_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"JAL_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"JALR_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"instr_op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+416,0,"instr_type",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+415,0,"instr_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+416,0,"instr_type_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+417,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"xor_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"or_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"and_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"pause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"mulsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"mulu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+459,0,"imm_I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"imm_B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"imm_S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"imm_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"imm_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"imm_UI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"instr_imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+467,0,"imm_i_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"imm_b_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"imm_s_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"imm_shift_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"imm_jal_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"imm_ui_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"prd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"use_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"use_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"op_a_use_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"op_b_use_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+474,0,"branch_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"lsu_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"lsu_halfword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"lsu_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"mul_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+478,0,"mul_op_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+479,0,"div_op_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("Encoding_instr_op", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+480,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+415,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("Encoding_instr_type", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+416,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Immediate_value_selection", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+466,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1085,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"i_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"i_invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+52,0,"i_lsu_ctrl_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 145,0);
    tracep->declBus(c+319,0,"i_effective_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+80,0,"o_lsu_wb_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+1072,0,"i_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"i_in_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"o_out_port_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_out_port_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"o_out_port_C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"o_out_port_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+483,0,"lsu_ctrl_pkd_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+485,0,"lsu_ctrl_pkd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+487,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"address_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+489,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+491,0,"load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"lsu_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"lsu_halfword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"lsu_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"dmem_region_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"imem_region_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"omem_region_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"unused_region",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"bytemask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+503,0,"dmem_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"I_switch_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"I_gpi_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"I_peripheral_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"I_peripheral_mem_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"O_portA_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"O_portB_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"O_portC_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"O_portD_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"O_peripheral_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"O_peripheral_mem_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+510,0,"portA_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"portB_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"portC_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"portD_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+515,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"load_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"lsu_byte_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"lsu_signed_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"lsu_halfword_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+520,0,"lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"rdata_byte1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+522,0,"rdata_byte2_3_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+523,0,"instruction",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("D_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1109,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+524,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+502,0,"byteena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+489,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+503,0,"wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("I_GPI", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("I_SWITCH", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1072,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Input_peripheral_select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+507,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1110,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+483,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+485,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->popPrefix();
    tracep->pushPrefix("O_PORTA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("O_PORTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("O_PORTC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("O_PORTD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Output_peripheral_select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+509,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Read_data_selection", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+525,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+501,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rdata_byte_1_sel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1111,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+521,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+526,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1112,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1112,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("rdata_byte_2_3_sel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+522,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+529,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1114,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+530,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+531,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+532,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("restore_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MEM_WB_data_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1099,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+59,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+76,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->pushPrefix("M_extension", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"i_flush_MUL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"i_flush_DIV",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+71,0,"i_abt_mul_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBus(c+32,0,"o_mul_fb_dat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"o_div_fb_dat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+10,0,"o_mul_div_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_mul_div_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+78,0,"o_mul_mem_pkg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+533,0,"mul_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+535,0,"mul_product_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+536,0,"mul_product_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"div_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"div_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+539,0,"op_a_signed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"op_b_signed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"mul_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+542,0,"div_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+543,0,"mul_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"div_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1115,0,"mul_signed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"div_signed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"mul_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"div_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"div_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"flush_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"flush_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+551,0,"Pre_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+552,0,"Next_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+553,0,"ACTIVE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"MUL_DONE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"DIV_DONE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"BOTH_DONE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"mul_dest_ctrl_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+558,0,"mul_dest_ctrl_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+559,0,"div_dest_ctrl_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+560,0,"div_dest_ctrl_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+561,0,"dest_ctrl_pkg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+562,0,"dest_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1078,0,"mul_dest_ctrl_reg_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"div_dest_ctrl_reg_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+563,0,"mul_div_data_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+555,0,"mul_div_ctrl_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"mul_proceed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"div_proceed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"both_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1116,0,"mul_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1117,0,"div_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+566,0,"mul_op_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+567,0,"div_op_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("DIV", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"i_signed_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"o_quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"o_remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+549,0,"o_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"o_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"o_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"PreStep",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+569,0,"NextStep",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+549,0,"IDLE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"INIT_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"EXECUTE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"WRITE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"count_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+573,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+574,0,"cnt_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"zero_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"A_lt_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+577,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"operand_A_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"operand_B_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+581,0,"signed_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"reduced_operand_A_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"NLZ_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+584,0,"zero_operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"zero_operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+585,0,"adder_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+587,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"shifted_A_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"shifted_A_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+590,0,"partial_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1118,0,"Pre_Remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1119,0,"Pre_Quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"remainder_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"remainder_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"signed_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"signed_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+596,0,"different_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"dividend_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"divisor_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Compare_operand", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1104,0,"is_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"A_pos_B_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"A_neg_B_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"same_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"eq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+605,0,"la_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+606,0,"sm_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+607,0,"eq_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+608,0,"la_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+609,0,"sm_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+610,0,"eq_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+611,0,"la_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+612,0,"sm_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+599,0,"eq_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"la_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"sm_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"unsigned_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"unsigned_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"signed_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"signed_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Layer1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+614,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+615,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+619,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+620,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+621,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+625,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+626,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+627,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+631,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+632,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+633,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+637,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+638,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+639,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+643,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+644,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+645,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+649,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+650,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+651,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+655,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+656,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+657,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Fetch_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Fetch_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Final_Quotient", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Final_Remainder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Find_Reduced_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"o_NLZ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+584,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+662,0,"z0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+663,0,"z1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+664,0,"z2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+665,0,"z3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+666,0,"z4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+667,0,"z5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+668,0,"z6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"z7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+583,0,"NLZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+584,0,"all_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Boundary_Nibble_Encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+661,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+670,0,"o_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+584,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+662,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+671,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+619,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+663,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+676,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+625,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+664,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+681,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+631,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+665,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+686,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+637,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+666,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+691,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+643,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+667,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+696,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+649,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+668,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+701,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+655,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+706,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit0_NLZ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1120,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+670,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+711,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+712,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+713,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+714,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+715,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+716,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+717,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+718,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+719,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("bit1_NLZ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1120,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+670,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+720,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+721,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+722,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+723,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+724,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+725,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+726,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+727,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+728,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Init_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+570,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Init_Temp_remainder_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+576,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+590,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Partial_Remainder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+730,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+731,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+590,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Quotient_sign_assignment", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+732,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+733,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Reduce_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"shift_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+582,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"bin_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"reversed_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"reversed_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"shift_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"shift_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"shift_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+739,0,"shift_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"shift_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"mux_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"mux_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"mux_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"mux_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"mux_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1104,0,"left_logic_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"right_arith_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"reserved_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"out_of_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1121,0,"mux_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+719,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+746,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+744,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+728,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+747,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+748,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+739,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1121,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+745,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_rev_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1104,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+579,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+745,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+735,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+744,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+740,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+741,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+737,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+742,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+738,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+743,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Reduced_count", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1122,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+749,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1104,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+750,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+751,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+752,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1125,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("Remainder_sign_assignment", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+753,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+593,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_Absolute_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+753,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+577,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_Absolute_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+756,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+578,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Subtract", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1126,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+758,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+760,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+1104,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+585,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+762,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+763,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+765,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+767,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+1127,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->pushPrefix("Temp_Quotient_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1080,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Temp_Remainder_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1081,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Temp_dividend_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1080,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("iteration_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1129,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"load_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+573,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_register_opreand_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sign_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MUL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"i_op_a_signed_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"i_op_b_signed_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+533,0,"o_product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+547,0,"o_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"o_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"Pre_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+774,0,"Next_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+547,0,"IDLE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"FETCH_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"ACTIVE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"WRITE_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"multiplicand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+780,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+781,0,"operand_A_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"operand_B_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+783,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+784,0,"count_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+785,0,"cnt_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"zero_operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"zero_operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"operand_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"op_a_signed_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"op_b_signed_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"sign_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"sign_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"sign_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"A_gt_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"multiplier_sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+796,0,"NLZ_multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+797,0,"partial_product_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+799,0,"temp_multiplier_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"temp_multiplier_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"adder_operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"adder_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+803,0,"adder_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+804,0,"temp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+806,0,"final_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("Adder_op_b_sel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+808,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1085,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+777,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Adder_upper_product", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+809,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+802,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+803,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+810,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+812,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+814,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1091,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("Compare_operand", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+781,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1104,0,"is_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"A_pos_B_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"A_neg_B_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"same_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"eq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+822,0,"la_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+823,0,"sm_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+824,0,"eq_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+825,0,"la_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+826,0,"sm_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+827,0,"eq_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+828,0,"la_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+829,0,"sm_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+816,0,"eq_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"la_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"sm_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"unsigned_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"unsigned_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"signed_larger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"signed_smaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Layer1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+830,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+831,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+832,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+835,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+836,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+837,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+838,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+842,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+843,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+844,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+847,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+848,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+849,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+850,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+853,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+854,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+855,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+856,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+859,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+860,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+861,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+862,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+865,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+866,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+867,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+868,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("Layer1_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+873,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+874,0,"equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"larger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"smaller",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"AB_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Find_NLZ_mulipliter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+778,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"o_NLZ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+878,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+880,0,"z0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+881,0,"z1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+882,0,"z2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+883,0,"z3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+884,0,"z4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+885,0,"z5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+886,0,"z6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+887,0,"z7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+796,0,"NLZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+878,0,"all_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Boundary_Nibble_Encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+879,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+888,0,"o_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+878,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+880,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+890,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+895,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+881,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+896,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+901,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+882,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+902,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+907,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+883,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+908,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+913,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+884,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+914,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+919,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+885,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+920,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+925,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+886,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+926,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("NLC_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"i_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+887,0,"o_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+932,0,"o_all_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit0_NLZ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1120,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+888,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+937,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+938,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+939,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+940,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+941,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+942,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+943,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+944,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+945,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("bit1_NLZ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1120,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+888,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+946,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+947,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+948,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+949,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+950,0,"i_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+951,0,"i_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+952,0,"i_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+953,0,"i_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+954,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Negate_result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+793,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+804,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+955,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+806,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("Normalization", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+797,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+957,0,"shift_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1130,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+804,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+797,0,"bin_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+959,0,"reversed_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+961,0,"reversed_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+963,0,"shift_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+965,0,"shift_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+967,0,"shift_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+969,0,"shift_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+971,0,"shift_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+973,0,"shift_R32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+975,0,"mux_R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+977,0,"mux_R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+979,0,"mux_R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+981,0,"mux_R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"mux_R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"mux_R32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"left_logic_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"right_arith_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"reserved_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"out_of_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1130,0,"mux_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+945,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+797,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+963,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+975,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+983,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+981,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+971,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+954,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+975,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+965,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+977,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1083,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+804,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+973,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+984,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+977,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+967,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+979,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+985,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+979,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+969,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+981,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1130,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+804,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+961,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1131,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1131,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_rev_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1083,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+797,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+959,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+797,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+797,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+959,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("reverse_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+804,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+961,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+797,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+963,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+981,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+971,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+975,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+965,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+804,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+973,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+977,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+967,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+979,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1083,0,"shift_in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+969,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Partial_product_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1082,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+986,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+797,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("Reduced_count", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1133,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1134,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+796,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1104,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+988,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"operand_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+989,0,"operand_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+990,0,"full_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1136,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_Absolute_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+791,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+991,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+781,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_Absolute_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+792,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_multiplicand", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+795,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+781,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+777,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+795,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Temp_multiplier_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("fetch_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1126,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+994,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+996,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("fetch_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1126,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+998,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1000,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("iteration_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1137,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"load_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+783,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("product_out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+806,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+533,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("product_upper_init_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1002,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Select_control_signal", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1138,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+555,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+560,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+561,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("Select_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+563,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+536,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("div_instr_ctrl_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1138,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+560,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_instr_ctrl_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1138,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1070,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+558,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Register_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+35,0,"i_wb_pkg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+1004,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1005,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1006,0,"R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+39,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1005,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+324,0,"wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1038,0,"R0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"R8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"R16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"R24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"R1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"R9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"R17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"R25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"R10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"R18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"R26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"R3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"R11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"R19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,0,"R27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"R4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"R12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"R20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"R28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"R5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1059,0,"R13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"R21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1061,0,"R29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"R6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"R14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1064,0,"R22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"R30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"R7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"R15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"R23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"R31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_ID_rs1_forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+43,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_ID_rs2_forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+44,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1099,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+76,0,"i_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+80,0,"i_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+78,0,"i_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1139,0,"i_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+83,0,"o_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_init_top(Vprocessor_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprocessor_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vprocessor_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vprocessor_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_register(Vprocessor_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vprocessor_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vprocessor_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vprocessor_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vprocessor_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_const_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprocessor_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1083,(0U));
    bufp->fullCData(oldp+1084,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rd_data_sel),2);
    bufp->fullIData(oldp+1085,(0U),32);
    bufp->fullBit(oldp+1086,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__reserved_sel));
    bufp->fullIData(oldp+1087,(0x20U),32);
    bufp->fullIData(oldp+1088,(4U),32);
    bufp->fullQData(oldp+1089,(4ULL),33);
    bufp->fullQData(oldp+1091,(0ULL),33);
    bufp->fullCData(oldp+1093,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_rd_addr),5);
    bufp->fullCData(oldp+1094,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__wb_rd_addr),5);
    bufp->fullBit(oldp+1095,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow));
    bufp->fullBit(oldp+1096,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__wb_fwd_allow));
    bufp->fullCData(oldp+1097,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags),2);
    bufp->fullCData(oldp+1098,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags),2);
    bufp->fullIData(oldp+1099,(0x27U),32);
    bufp->fullIData(oldp+1100,(0x92U),32);
    bufp->fullIData(oldp+1101,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_target),32);
    bufp->fullBit(oldp+1102,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_valid));
    bufp->fullIData(oldp+1103,(0x42U),32);
    bufp->fullBit(oldp+1104,(1U));
    bufp->fullBit(oldp+1105,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_eq_rd_WB));
    bufp->fullBit(oldp+1106,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_eq_rd_WB));
    bufp->fullIData(oldp+1107,(0xdaU),32);
    bufp->fullIData(oldp+1108,(0x40U),32);
    bufp->fullIData(oldp+1109,(0xaU),32);
    bufp->fullIData(oldp+1110,(0x2cU),32);
    bufp->fullIData(oldp+1111,(8U),32);
    bufp->fullCData(oldp+1112,(0U),8);
    bufp->fullIData(oldp+1113,(0x10U),32);
    bufp->fullSData(oldp+1114,(0U),16);
    bufp->fullBit(oldp+1115,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_signed_en));
    bufp->fullBit(oldp+1116,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_stall));
    bufp->fullBit(oldp+1117,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_stall));
    bufp->fullIData(oldp+1118,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Pre_Remainder),32);
    bufp->fullIData(oldp+1119,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Pre_Quotient),32);
    bufp->fullIData(oldp+1120,(1U),32);
    bufp->fullCData(oldp+1121,(1U),2);
    bufp->fullIData(oldp+1122,(6U),32);
    bufp->fullCData(oldp+1123,(0x20U),6);
    bufp->fullCData(oldp+1124,(0x20U),7);
    bufp->fullCData(oldp+1125,(1U),7);
    bufp->fullIData(oldp+1126,(0x21U),32);
    bufp->fullQData(oldp+1127,(1ULL),34);
    bufp->fullIData(oldp+1129,(6U),32);
    bufp->fullCData(oldp+1130,(0U),2);
    bufp->fullQData(oldp+1131,(0ULL),64);
    bufp->fullIData(oldp+1133,(5U),32);
    bufp->fullCData(oldp+1134,(0x1fU),5);
    bufp->fullCData(oldp+1135,(0x1fU),6);
    bufp->fullCData(oldp+1136,(1U),6);
    bufp->fullIData(oldp+1137,(5U),32);
    bufp->fullIData(oldp+1138,(9U),32);
    bufp->fullQData(oldp+1139,(0ULL),39);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_full_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprocessor_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data),32);
    bufp->fullIData(oldp+2,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data),32);
    bufp->fullIData(oldp+3,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data),32);
    bufp->fullIData(oldp+4,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data),32);
    bufp->fullIData(oldp+5,(vlSelfRef.processor_tb__DOT__clk_counter),32);
    bufp->fullBit(oldp+6,(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en));
    bufp->fullBit(oldp+7,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)))));
    bufp->fullBit(oldp+8,(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss));
    bufp->fullBit(oldp+9,(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection));
    bufp->fullBit(oldp+10,(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed));
    __Vtemp_3[0U] = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result) 
                      << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                 << 2U) | (3U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                 >> 7U))));
    __Vtemp_3[1U] = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result) 
                      >> 0x1dU) | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                               << 0x10U) 
                                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                 >> 0x10U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + 
                                                               ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                   >> 0x10U))))))) 
                                   << 3U));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                    >> 0x10U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + 
                                                             ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                               << 0x10U) 
                                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                 >> 0x10U))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                << 0x10U) 
                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                  >> 0x10U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + 
                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                    >> 0x10U)))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp_3[3U] = ((8U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                            >> 6U)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                    << 0x10U) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                      >> 0x10U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                        >> 0x10U)))))) 
                                                >> 0x20U)) 
                                       >> 0x1dU));
    bufp->fullWData(oldp+11,(__Vtemp_3),100);
    bufp->fullWData(oldp+15,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q),66);
    bufp->fullWData(oldp+18,(vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID),218);
    bufp->fullWData(oldp+25,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q),218);
    bufp->fullCData(oldp+32,(((0x3eU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                        >> 3U)) | (0U 
                                                   != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))),6);
    bufp->fullCData(oldp+33,(((0x3eU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                        >> 3U)) | (0U 
                                                   != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))),6);
    bufp->fullIData(oldp+34,(((0x1f0000U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 1U)) 
                              | ((0xf800U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 0xbU)) 
                                 | ((0x7c0U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 3U)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
                                        << 5U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren) 
                                                            << 1U) 
                                                           | (1U 
                                                              & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U])))))))))),21);
    bufp->fullQData(oldp+35,((((QData)((IData)((0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                           >> 2U))))) 
                               << 0x21U) | (((QData)((IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                              >> 7U))) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren))))),38);
    bufp->fullQData(oldp+37,(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data),64);
    bufp->fullIData(oldp+39,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xfU)), 5U)))
                                ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                        (((IData)(0x1fU) 
                                          + (0x3ffU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xfU)), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(10,10,32, 
                                                          (0x1fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                              >> 0xfU)), 5U))))) 
                              | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                 (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                         (0x1fU 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                             >> 0xfU)), 5U) 
                                           >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                               >> 0xfU)), 5U))))),32);
    bufp->fullIData(oldp+40,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xaU)), 5U)))
                                ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                        (((IData)(0x1fU) 
                                          + (0x3ffU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xaU)), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(10,10,32, 
                                                          (0x1fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                              >> 0xaU)), 5U))))) 
                              | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                 (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                         (0x1fU 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                             >> 0xaU)), 5U) 
                                           >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                               >> 0xaU)), 5U))))),32);
    bufp->fullIData(oldp+41,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded),32);
    bufp->fullIData(oldp+42,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded),32);
    bufp->fullBit(oldp+43,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forward_en));
    bufp->fullBit(oldp+44,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forward_en));
    bufp->fullBit(oldp+45,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL)) 
                               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 9U)) 
                                   == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                                >> 4U))) 
                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))))));
    bufp->fullBit(oldp+46,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV)) 
                               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 9U)) 
                                   == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                                >> 4U))) 
                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))))));
    __Vtemp_9[0U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
    __Vtemp_9[1U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
    __Vtemp_9[2U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
    __Vtemp_9[3U] = ((vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                      << 0x12U) | ((0x3e000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                << 8U)) 
                                   | ((0x1f00U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 6U)) 
                                      | (0xffU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))));
    __Vtemp_9[4U] = (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                     >> 0xeU);
    bufp->fullWData(oldp+47,(__Vtemp_9),146);
    bufp->fullWData(oldp+52,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q),146);
    bufp->fullQData(oldp+57,((((QData)((IData)(((0x4000000U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                 ? 
                                                ((0x2000000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                  ? 
                                                 ((0x1000000U 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                   ? 0U
                                                   : 
                                                  ((IData)(4U) 
                                                   + 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                       >> 0x10U))))
                                                  : 
                                                 ((0x1000000U 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                   ? 
                                                  (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 0x10U)) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                         >> 0x10U)))
                                                   : 
                                                  (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 0x10U)) 
                                                   & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                         >> 0x10U)))))
                                                 : 
                                                ((0x2000000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                  ? 
                                                 ((0x1000000U 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                   ? 
                                                  (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 0x10U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                     ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                                     : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16)))
                                                  : 
                                                 ((0x1000000U 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                                   ? 
                                                  (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                   | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))
                                                   : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result)))))) 
                               << 7U) | (QData)((IData)(
                                                        ((0x7eU 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                             >> 9U)) 
                                                         | (1U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                               >> 8U))))))),39);
    bufp->fullQData(oldp+59,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q),39);
    bufp->fullWData(oldp+61,(vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg),289);
    __Vtemp_10[0U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))) 
                       << 0xdU) | ((0x1f00U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                               << 3U)) 
                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start) 
                                       << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start) 
                                                  << 6U) 
                                                 | ((0x3cU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                        >> 6U)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11))))));
    __Vtemp_10[1U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))) 
                       >> 0x13U) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))) 
                                             >> 0x20U)) 
                                    << 0xdU));
    __Vtemp_10[2U] = ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))) 
                               >> 0x20U)) >> 0x13U);
    bufp->fullWData(oldp+71,(__Vtemp_10),77);
    bufp->fullQData(oldp+74,((((QData)((IData)((0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                           >> 2U))))) 
                               << 0x21U) | (((QData)((IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                              >> 7U))) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (3ULL 
                                                               == 
                                                               (3ULL 
                                                                & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q))))))),38);
    bufp->fullQData(oldp+76,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q),39);
    bufp->fullQData(oldp+78,((((QData)((IData)(((2U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                                  ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder
                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                                  ? (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product)
                                                  : (IData)(
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
                                                             >> 0x20U)))))) 
                               << 7U) | (QData)((IData)(
                                                        ((0x7cU 
                                                          & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux) 
                                                             >> 2U)) 
                                                         | (3U 
                                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux))))))),39);
    bufp->fullQData(oldp+80,((((QData)((IData)(((((2U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                    ? 
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                  >> 0xfU))))
                                                    : 
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                  >> 7U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                    >> 0x10U))) 
                                                 << 0x10U) 
                                                | ((((2U 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((1U 
                                                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                          ? 
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                        >> 7U))))
                                                          : 
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                          >> 8U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data))))) 
                               << 7U) | (QData)((IData)(
                                                        ((0x7cU 
                                                          & ((IData)(
                                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                                                      >> 7U)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4))))))),39);
    bufp->fullBit(oldp+82,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                            | ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                               | (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))));
    bufp->fullQData(oldp+83,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux),39);
    bufp->fullCData(oldp+85,(vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel),2);
    bufp->fullBit(oldp+86,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_0) 
                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_1))));
    bufp->fullCData(oldp+87,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                        << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  >> 0x1bU)))),6);
    bufp->fullIData(oldp+88,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                               << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+89,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                               << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+90,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                               << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+91,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                               << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+92,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                               << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+93,(((IData)(4U) + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                >> 0x10U)))),32);
    bufp->fullCData(oldp+94,((7U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    >> 0x18U))),3);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                       >> 0xbU))),5);
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                  >> 8U))));
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                  >> 9U))));
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                  >> 7U))));
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+102,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+104,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+105,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+108,(((3U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                               << 5U) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                 >> 0x1bU)))) 
                             | (4U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                 << 5U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 0x1bU)))))));
    bufp->fullIData(oldp+109,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                              >> 0x10U)) 
                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                >> 0x10U)))),32);
    bufp->fullIData(oldp+110,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                              >> 0x10U)) 
                               & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                >> 0x10U)))),32);
    bufp->fullIData(oldp+111,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                              >> 0x10U)) 
                               ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                >> 0x10U)))),32);
    bufp->fullIData(oldp+112,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                               | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                  & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                     | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))),32);
    bufp->fullIData(oldp+113,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result)),32);
    bufp->fullIData(oldp+114,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                         ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                         : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16))),32);
    bufp->fullIData(oldp+115,(((0x4000000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                ? ((0x2000000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                    ? ((0x1000000U 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                        ? 0U : ((IData)(4U) 
                                                + (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                      >> 0x10U))))
                                    : ((0x1000000U 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                        ? (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               >> 0x10U)) 
                                           | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               << 0x10U) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 >> 0x10U)))
                                        : (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               >> 0x10U)) 
                                           & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               << 0x10U) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 >> 0x10U)))))
                                : ((0x2000000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                    ? ((0x1000000U 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                        ? (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             << 0x10U) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               >> 0x10U)) 
                                           ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               << 0x10U) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 >> 0x10U)))
                                        : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                             ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                             : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16)))
                                    : ((0x1000000U 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                        ? (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                           | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                              & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))
                                        : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result))))),32);
    bufp->fullBit(oldp+116,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl));
    bufp->fullBit(oldp+117,((0x1dU == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                 << 5U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 0x1bU))))));
    bufp->fullCData(oldp+118,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1))),2);
    bufp->fullBit(oldp+119,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp));
    bufp->fullBit(oldp+120,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2));
    bufp->fullBit(oldp+121,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2));
    bufp->fullBit(oldp+122,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2));
    bufp->fullBit(oldp+123,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken));
    bufp->fullBit(oldp+124,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result 
                                           >> 0x20U)))));
    bufp->fullQData(oldp+125,((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                << 0x10U) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 0x10U))))),33);
    bufp->fullQData(oldp+127,((0x1ffffffffULL & ((0x1dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                       << 5U) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         >> 0x1bU))))
                                                  ? 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                        >> 0xfU)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                                         >> 0x10U))))))
                                                  : (QData)((IData)(
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                                        >> 0x10U))))))),33);
    bufp->fullQData(oldp+129,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result),33);
    bufp->fullQData(oldp+131,((QData)((IData)((0x1dU 
                                               == (0x3fU 
                                                   & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                       << 5U) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         >> 0x1bU))))))),33);
    bufp->fullBit(oldp+133,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))));
    bufp->fullBit(oldp+134,((1U & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                   | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                      & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 0xfU)) 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                             >> 0xfU)) 
                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32))))))));
    bufp->fullBit(oldp+135,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                             | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))));
    bufp->fullBit(oldp+136,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                       >> 0xfU)) & 
                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+137,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))));
    bufp->fullCData(oldp+139,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal))))))))),8);
    bufp->fullCData(oldp+140,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger))))))))),8);
    bufp->fullCData(oldp+141,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller))))))))),8);
    bufp->fullCData(oldp+142,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17))))),4);
    bufp->fullCData(oldp+143,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8))))),4);
    bufp->fullCData(oldp+144,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9))))),4);
    bufp->fullCData(oldp+145,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))),2);
    bufp->fullCData(oldp+146,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14))),2);
    bufp->fullCData(oldp+147,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15))),2);
    bufp->fullBit(oldp+148,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32));
    bufp->fullBit(oldp+149,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32));
    bufp->fullBit(oldp+150,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
    bufp->fullBit(oldp+151,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
    bufp->fullBit(oldp+152,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                   & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0xfU)) 
                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0xfU)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32)))))));
    bufp->fullBit(oldp+153,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32))))));
    bufp->fullCData(oldp+154,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+155,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+156,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal));
    bufp->fullBit(oldp+157,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger));
    bufp->fullBit(oldp+158,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller));
    bufp->fullCData(oldp+159,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq),4);
    bufp->fullCData(oldp+160,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+161,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+162,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal));
    bufp->fullBit(oldp+163,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger));
    bufp->fullBit(oldp+164,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller));
    bufp->fullCData(oldp+165,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq),4);
    bufp->fullCData(oldp+166,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+167,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+168,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal));
    bufp->fullBit(oldp+169,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger));
    bufp->fullBit(oldp+170,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller));
    bufp->fullCData(oldp+171,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq),4);
    bufp->fullCData(oldp+172,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+173,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+174,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal));
    bufp->fullBit(oldp+175,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger));
    bufp->fullBit(oldp+176,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller));
    bufp->fullCData(oldp+177,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq),4);
    bufp->fullCData(oldp+178,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])),4);
    bufp->fullCData(oldp+179,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U])),4);
    bufp->fullBit(oldp+180,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal));
    bufp->fullBit(oldp+181,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger));
    bufp->fullBit(oldp+182,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller));
    bufp->fullCData(oldp+183,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq),4);
    bufp->fullCData(oldp+184,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+185,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 4U))),4);
    bufp->fullBit(oldp+186,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal));
    bufp->fullBit(oldp+187,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger));
    bufp->fullBit(oldp+188,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller));
    bufp->fullCData(oldp+189,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq),4);
    bufp->fullCData(oldp+190,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                       >> 8U))),4);
    bufp->fullCData(oldp+191,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+192,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal));
    bufp->fullBit(oldp+193,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger));
    bufp->fullBit(oldp+194,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller));
    bufp->fullCData(oldp+195,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq),4);
    bufp->fullCData(oldp+196,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+197,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+198,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal));
    bufp->fullBit(oldp+199,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger));
    bufp->fullBit(oldp+200,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller));
    bufp->fullCData(oldp+201,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq),4);
    bufp->fullIData(oldp+202,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in),32);
    bufp->fullIData(oldp+203,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in),32);
    bufp->fullIData(oldp+204,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out),32);
    bufp->fullIData(oldp+205,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit) 
                                << 0x1fU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                                             >> 1U))),32);
    bufp->fullIData(oldp+206,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                                             >> 2U))),32);
    bufp->fullIData(oldp+207,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                                             >> 4U))),32);
    bufp->fullIData(oldp+208,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                                             >> 8U))),32);
    bufp->fullIData(oldp+209,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+210,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1),32);
    bufp->fullIData(oldp+211,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2),32);
    bufp->fullIData(oldp+212,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4),32);
    bufp->fullIData(oldp+213,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8),32);
    bufp->fullIData(oldp+214,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16),32);
    bufp->fullBit(oldp+215,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode));
    bufp->fullBit(oldp+216,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1)) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0))));
    bufp->fullBit(oldp+217,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode));
    bufp->fullBit(oldp+218,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit));
    bufp->fullBit(oldp+219,((0U != (0x7ffffffU & ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x15U))))));
    bufp->fullCData(oldp+220,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel),2);
    bufp->fullBit(oldp+221,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel));
    bufp->fullBit(oldp+222,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel));
    bufp->fullBit(oldp+223,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel));
    bufp->fullBit(oldp+224,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel));
    bufp->fullBit(oldp+225,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel));
    bufp->fullBit(oldp+226,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 0xfU)) & 
                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+227,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
    bufp->fullCData(oldp+229,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal))))))))),8);
    bufp->fullCData(oldp+230,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger))))))))),8);
    bufp->fullCData(oldp+231,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller))))))))),8);
    bufp->fullCData(oldp+232,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17))))),4);
    bufp->fullCData(oldp+233,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8))))),4);
    bufp->fullCData(oldp+234,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9))))),4);
    bufp->fullCData(oldp+235,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13))),2);
    bufp->fullCData(oldp+236,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14))),2);
    bufp->fullCData(oldp+237,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15))),2);
    bufp->fullBit(oldp+238,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32));
    bufp->fullBit(oldp+239,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32));
    bufp->fullBit(oldp+240,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
    bufp->fullBit(oldp+241,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
    bufp->fullBit(oldp+242,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                                   & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           >> 0xfU)) 
                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0xfU)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32)))))));
    bufp->fullBit(oldp+243,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32))))));
    bufp->fullCData(oldp+244,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+245,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+246,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal));
    bufp->fullBit(oldp+247,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger));
    bufp->fullBit(oldp+248,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller));
    bufp->fullCData(oldp+249,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq),4);
    bufp->fullCData(oldp+250,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+251,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+252,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal));
    bufp->fullBit(oldp+253,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger));
    bufp->fullBit(oldp+254,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller));
    bufp->fullCData(oldp+255,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq),4);
    bufp->fullCData(oldp+256,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+257,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+258,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal));
    bufp->fullBit(oldp+259,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger));
    bufp->fullBit(oldp+260,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller));
    bufp->fullCData(oldp+261,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq),4);
    bufp->fullCData(oldp+262,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+263,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+264,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal));
    bufp->fullBit(oldp+265,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger));
    bufp->fullBit(oldp+266,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller));
    bufp->fullCData(oldp+267,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq),4);
    bufp->fullCData(oldp+268,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U])),4);
    bufp->fullCData(oldp+269,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U])),4);
    bufp->fullBit(oldp+270,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal));
    bufp->fullBit(oldp+271,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger));
    bufp->fullBit(oldp+272,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller));
    bufp->fullCData(oldp+273,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq),4);
    bufp->fullCData(oldp+274,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+275,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 4U))),4);
    bufp->fullBit(oldp+276,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal));
    bufp->fullBit(oldp+277,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger));
    bufp->fullBit(oldp+278,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller));
    bufp->fullCData(oldp+279,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq),4);
    bufp->fullCData(oldp+280,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 8U))),4);
    bufp->fullCData(oldp+281,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+282,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal));
    bufp->fullBit(oldp+283,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger));
    bufp->fullBit(oldp+284,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller));
    bufp->fullCData(oldp+285,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq),4);
    bufp->fullCData(oldp+286,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+287,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+288,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal));
    bufp->fullBit(oldp+289,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger));
    bufp->fullBit(oldp+290,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller));
    bufp->fullCData(oldp+291,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq),4);
    bufp->fullBit(oldp+292,((1U & (IData)((1ULL & (
                                                   (4ULL 
                                                    + (QData)((IData)(
                                                                      ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                        << 0x10U) 
                                                                       | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                          >> 0x10U))))) 
                                                   >> 0x20U))))));
    bufp->fullQData(oldp+293,((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                << 0x10U) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 0x10U))))),33);
    bufp->fullQData(oldp+295,((0x1ffffffffULL & (4ULL 
                                                 + (QData)((IData)(
                                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                       >> 0x10U))))))),33);
    bufp->fullBit(oldp+297,((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    bufp->fullBit(oldp+298,((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
    bufp->fullIData(oldp+299,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded),32);
    bufp->fullIData(oldp+300,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded),32);
    bufp->fullIData(oldp+301,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+302,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+303,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+304,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                        >> 0xaU))),5);
    bufp->fullCData(oldp+305,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                        >> 5U))),5);
    bufp->fullBit(oldp+306,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 2U))));
    bufp->fullBit(oldp+307,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 1U))));
    bufp->fullBit(oldp+308,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 4U))));
    bufp->fullBit(oldp+309,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+310,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+311,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start));
    bufp->fullBit(oldp+312,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start));
    bufp->fullIData(oldp+313,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                         ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                               >> 5U))
                                         : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded))),32);
    bufp->fullIData(oldp+314,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                         ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                               >> 5U))
                                         : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))),32);
    bufp->fullCData(oldp+315,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel),2);
    bufp->fullCData(oldp+316,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel),2);
    bufp->fullIData(oldp+317,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data)),32);
    bufp->fullIData(oldp+318,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+319,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                       >> 7U))),32);
    bufp->fullCData(oldp+320,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                >> 2U)))),5);
    bufp->fullBit(oldp+321,((IData)((3ULL == (3ULL 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)))));
    bufp->fullIData(oldp+322,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                       >> 7U))),32);
    bufp->fullCData(oldp+323,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                >> 2U)))),5);
    bufp->fullBit(oldp+324,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren));
    bufp->fullCData(oldp+325,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel),2);
    bufp->fullCData(oldp+326,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel),2);
    bufp->fullBit(oldp+327,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched));
    bufp->fullBit(oldp+328,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched));
    bufp->fullBit(oldp+329,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                >> 2U))) 
                              == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 0xfU))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0))));
    bufp->fullBit(oldp+330,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                >> 2U))) 
                              == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 0xaU))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0))));
    bufp->fullBit(oldp+331,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                               >> 2U))) 
                             == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+332,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                               >> 2U))) 
                             == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+333,((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                     >> 2U))))));
    bufp->fullBit(oldp+334,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                               >> 2U))) 
                             == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+335,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                               >> 2U))) 
                             == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+336,((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                     >> 2U))))));
    bufp->fullCData(oldp+337,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q))),2);
    bufp->fullIData(oldp+338,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d),32);
    bufp->fullIData(oldp+339,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q),32);
    bufp->fullBit(oldp+340,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t));
    bufp->fullBit(oldp+341,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
    bufp->fullBit(oldp+342,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q));
    bufp->fullIData(oldp+343,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                               + (IData)((QData)((IData)(
                                                         (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                          << 2U)))))),32);
    bufp->fullCData(oldp+344,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel),2);
    bufp->fullIData(oldp+345,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data),32);
    bufp->fullBit(oldp+346,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                       >> 1U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                 | (0U 
                                                    == vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)))))));
    __Vtemp_11[0U] = (1U | (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                             << 2U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q) 
                                       << 1U)));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_11[2U] = ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))) 
                               >> 0x20U)) >> 0x1eU);
    bufp->fullWData(oldp+347,(__Vtemp_11),66);
    bufp->fullIData(oldp+350,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                               << 2U)),32);
    bufp->fullBit(oldp+351,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                                    + (QData)((IData)(
                                                                      (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                                       << 2U)))) 
                                                   >> 0x20U))))));
    bufp->fullQData(oldp+352,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))),33);
    bufp->fullQData(oldp+354,((QData)((IData)((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                               << 2U)))),33);
    bufp->fullQData(oldp+356,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                                 + (QData)((IData)(
                                                                   (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                                    << 2U)))))),33);
    bufp->fullBit(oldp+358,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))));
    bufp->fullBit(oldp+359,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q));
    bufp->fullBit(oldp+360,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q));
    bufp->fullIData(oldp+361,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d, 2U)),32);
    bufp->fullIData(oldp+362,((0xfffffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)),32);
    bufp->fullBit(oldp+363,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                    >> 0x12U) & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]))));
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+365,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+366,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x11U))),5);
    bufp->fullCData(oldp+367,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+368,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 9U))),5);
    bufp->fullBit(oldp+369,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1));
    bufp->fullBit(oldp+370,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2));
    bufp->fullBit(oldp+371,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en));
    bufp->fullBit(oldp+372,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en));
    bufp->fullBit(oldp+373,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren));
    bufp->fullBit(oldp+374,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U])));
    bufp->fullBit(oldp+375,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x11U)) 
                              == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 5U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
    bufp->fullBit(oldp+376,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x16U)) 
                              == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 5U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
    bufp->fullBit(oldp+377,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x11U)) 
                              == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                           >> 4U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
    bufp->fullBit(oldp+378,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x16U)) 
                              == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                           >> 4U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
    bufp->fullBit(oldp+379,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x11U)) 
                              == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                           >> 4U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
    bufp->fullBit(oldp+380,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x16U)) 
                              == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                           >> 4U))) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
    bufp->fullBit(oldp+381,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0));
    bufp->fullBit(oldp+382,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0));
    bufp->fullBit(oldp+383,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0));
    bufp->fullBit(oldp+384,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2) 
                             & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                 >> 0x12U) & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]))));
    bufp->fullBit(oldp+385,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                             & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                                | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0xdU)))));
    bufp->fullBit(oldp+386,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                             & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0xcU)))));
    bufp->fullBit(oldp+387,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL));
    bufp->fullBit(oldp+388,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV));
    bufp->fullBit(oldp+389,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 9U)) == 
                              (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                        >> 4U))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))));
    bufp->fullBit(oldp+390,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 9U)) == 
                              (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                        >> 4U))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))));
    bufp->fullQData(oldp+391,((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded)))),64);
    bufp->fullBit(oldp+393,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                             & (0x400000U == (0x7c00000U 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
    bufp->fullBit(oldp+394,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                             & (0U == (0x7c00000U & 
                                       vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
    bufp->fullIData(oldp+395,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                             >> 2U))),32);
    bufp->fullBit(oldp+396,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                   >> 1U))));
    bufp->fullIData(oldp+397,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))),32);
    bufp->fullCData(oldp+398,((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 2U))),7);
    bufp->fullCData(oldp+399,((((7U == (7U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                              >> 0xeU))) 
                                << 7U) | (((6U == (7U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 0xeU))) 
                                           << 6U) | 
                                          (((5U == 
                                             (7U & 
                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 0xeU))) 
                                            << 5U) 
                                           | (((4U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 0xeU))) 
                                               << 4U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       >> 0xeU))) 
                                                  << 3U) 
                                                 | (((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                          >> 0xeU))) 
                                                     << 2U) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                             >> 0xeU))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                              >> 0xeU))))))))))),8);
    bufp->fullWData(oldp+400,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7),128);
    bufp->fullBit(oldp+404,((0x33U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+405,((0x13U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+406,((3U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U)))));
    bufp->fullBit(oldp+407,((0x23U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+408,((0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+409,((0x73U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+410,((0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 2U)))));
    bufp->fullBit(oldp+411,((0x37U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+412,((0x17U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+413,((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullBit(oldp+414,((0x67U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
    bufp->fullCData(oldp+415,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded),6);
    bufp->fullCData(oldp+416,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded),4);
    bufp->fullBit(oldp+417,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U])));
    bufp->fullBit(oldp+418,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U])));
    bufp->fullBit(oldp+419,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt));
    bufp->fullBit(oldp+420,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu));
    bufp->fullBit(oldp+421,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xor_));
    bufp->fullBit(oldp+422,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__or_));
    bufp->fullBit(oldp+423,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_));
    bufp->fullBit(oldp+424,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll));
    bufp->fullBit(oldp+425,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl));
    bufp->fullBit(oldp+426,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra));
    bufp->fullBit(oldp+427,((IData)((0x4cU == (0x1c1fcU 
                                               & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
    bufp->fullBit(oldp+428,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti));
    bufp->fullBit(oldp+429,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu));
    bufp->fullBit(oldp+430,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xori));
    bufp->fullBit(oldp+431,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__ori));
    bufp->fullBit(oldp+432,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi));
    bufp->fullBit(oldp+433,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli));
    bufp->fullBit(oldp+434,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli));
    bufp->fullBit(oldp+435,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai));
    bufp->fullBit(oldp+436,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq));
    bufp->fullBit(oldp+437,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne));
    bufp->fullBit(oldp+438,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt));
    bufp->fullBit(oldp+439,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge));
    bufp->fullBit(oldp+440,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu));
    bufp->fullBit(oldp+441,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu));
    bufp->fullBit(oldp+442,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb));
    bufp->fullBit(oldp+443,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh));
    bufp->fullBit(oldp+444,((IData)((0x800cU == (0x1c1fcU 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
    bufp->fullBit(oldp+445,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu));
    bufp->fullBit(oldp+446,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu));
    bufp->fullBit(oldp+447,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb));
    bufp->fullBit(oldp+448,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh));
    bufp->fullBit(oldp+449,((IData)((0x808cU == (0x1c1fcU 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
    bufp->fullBit(oldp+450,((IData)(((0x400003cU == 
                                      (0x7fffffcU & 
                                       vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                     & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]))));
    bufp->fullBit(oldp+451,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul));
    bufp->fullBit(oldp+452,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh));
    bufp->fullBit(oldp+453,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu));
    bufp->fullBit(oldp+454,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu));
    bufp->fullBit(oldp+455,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div));
    bufp->fullBit(oldp+456,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu));
    bufp->fullBit(oldp+457,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem));
    bufp->fullBit(oldp+458,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu));
    bufp->fullIData(oldp+459,((((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  >> 1U)))) 
                                << 0xcU) | (0xfffU 
                                            & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                << 0xaU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+460,((((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  >> 1U)))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                << 0xbU)) 
                                            | ((0x800U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   << 2U)) 
                                               | ((0x7e0U 
                                                   & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                       << 0xaU) 
                                                      | (0x3e0U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                            >> 0x16U)))) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 9U))))))),32);
    bufp->fullIData(oldp+461,((((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  >> 1U)))) 
                                << 0xcU) | ((0xfe0U 
                                             & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                 << 0xaU) 
                                                | (0x3e0U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 0x16U)))) 
                                            | (0x1fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 9U))))),32);
    bufp->fullIData(oldp+462,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 0x16U))),32);
    bufp->fullIData(oldp+463,((((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  >> 1U)))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                 << 0x13U)) 
                                             | ((0xff000U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 2U)) 
                                                | ((0x800U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       >> 0xbU)) 
                                                   | (0x7feU 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                          << 0xaU) 
                                                         | (0x3feU 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               >> 0x16U))))))))),32);
    bufp->fullIData(oldp+464,((0xfffff000U & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                               << 0x1eU) 
                                              | (0x3ffff000U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 2U))))),32);
    bufp->fullIData(oldp+465,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate),32);
    bufp->fullCData(oldp+466,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel),3);
    bufp->fullBit(oldp+467,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel)) 
                             & ((0x13U == (0x7fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 2U))) 
                                | ((3U == (0x7fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 2U))) 
                                   | (0x67U == (0x7fU 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))))))));
    bufp->fullBit(oldp+468,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel));
    bufp->fullBit(oldp+469,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel));
    bufp->fullBit(oldp+470,(((0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21))));
    bufp->fullBit(oldp+471,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
                             | (0x63U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))))));
    bufp->fullBit(oldp+472,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_22) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16))));
    bufp->fullCData(oldp+473,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_) 
                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi) 
                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21)))) 
                                << 2U) | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20) 
                                            | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
                                               | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl) 
                                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra) 
                                                      | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll))) 
                                                  | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18) 
                                                     | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21))))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt) 
                                           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti) 
                                              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu) 
                                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu) 
                                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19))))))))),3);
    bufp->fullCData(oldp+474,((((0x67U == (0x7fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 2U))) 
                                << 7U) | (((0x6fU == 
                                            (0x7fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq))))))))),8);
    bufp->fullBit(oldp+475,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu)))));
    bufp->fullBit(oldp+476,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh))));
    bufp->fullCData(oldp+478,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu)) 
                                << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                          | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh)))),2);
    bufp->fullCData(oldp+479,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem)) 
                                << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                          | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu)))),2);
    bufp->fullQData(oldp+480,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in),64);
    bufp->fullSData(oldp+482,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in),16);
    bufp->fullQData(oldp+483,((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xf80U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                                >> 6U)) 
                                                            | (((IData)(
                                                                        (0x1080U 
                                                                         == 
                                                                         (0x1080U 
                                                                          & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U]))) 
                                                                << 6U) 
                                                               | ((0x38U 
                                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                                      >> 5U)) 
                                                                  | ((4U 
                                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                                         >> 5U)) 
                                                                     | ((((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                                                >> 0xbU)))) 
                                                                          & ((~ 
                                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                                               >> 8U)) 
                                                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_18))) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en)))))))))),44);
    bufp->fullQData(oldp+485,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q),44);
    bufp->fullIData(oldp+487,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address),32);
    bufp->fullIData(oldp+488,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                       >> 0xcU))),32);
    bufp->fullIData(oldp+489,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                                << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                            >> 0x12U))),32);
    bufp->fullCData(oldp+490,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                        >> 0xdU))),5);
    bufp->fullBit(oldp+491,((IData)((0x1080U == (0x1080U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])))));
    bufp->fullBit(oldp+492,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en));
    bufp->fullBit(oldp+493,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+494,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+495,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+496,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+497,((1U & ((~ (IData)((0U != 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                >> 0xbU)))) 
                                   & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                         >> 0xaU))))));
    bufp->fullBit(oldp+498,(((~ (IData)((0U != (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                >> 0xbU)))) 
                             & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                    >> 8U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_18)))));
    bufp->fullBit(oldp+499,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en));
    bufp->fullBit(oldp+500,((1U & (~ (IData)((0U != 
                                              (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                               >> 0xbU)))))));
    bufp->fullIData(oldp+501,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata),32);
    bufp->fullCData(oldp+502,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask),4);
    bufp->fullBit(oldp+503,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
                             & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)) 
                                & ((~ (IData)((0U != 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                >> 0xbU)))) 
                                   & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                         >> 0xaU)))))));
    bufp->fullIData(oldp+504,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data),32);
    bufp->fullIData(oldp+505,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data),32);
    bufp->fullIData(oldp+506,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                         ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data
                                         : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data))),32);
    bufp->fullCData(oldp+507,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel),2);
    bufp->fullIData(oldp+508,(((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                         ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                             ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data
                                             : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data)
                                         : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                             ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data
                                             : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data)))),32);
    bufp->fullCData(oldp+509,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel),3);
    bufp->fullBit(oldp+510,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                 >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12))));
    bufp->fullBit(oldp+511,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12) 
                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                >> 4U))));
    bufp->fullBit(oldp+512,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                 >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8))));
    bufp->fullBit(oldp+513,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8) 
                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                >> 4U))));
    bufp->fullIData(oldp+514,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data),32);
    bufp->fullBit(oldp+515,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                           >> 2U)))));
    bufp->fullBit(oldp+516,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                           >> 6U)))));
    bufp->fullBit(oldp+517,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                           >> 5U)))));
    bufp->fullBit(oldp+518,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                           >> 3U)))));
    bufp->fullBit(oldp+519,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                           >> 4U)))));
    bufp->fullIData(oldp+520,(((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                  ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                       >> 0xfU))))
                                      : (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                       >> 7U)))))
                                  : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                      ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                              >> 0x10U))) 
                                << 0x10U) | ((((2U 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                ? 0U
                                                : (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                       ? 
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                     >> 7U))))
                                                       : 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                       >> 8U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data)))),32);
    bufp->fullCData(oldp+521,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel),2);
    bufp->fullCData(oldp+522,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel),2);
    bufp->fullCData(oldp+523,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                         << 3U) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
                                                   >> 0x1dU)))),6);
    bufp->fullSData(oldp+524,((0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)),10);
    bufp->fullCData(oldp+525,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel),3);
    bufp->fullCData(oldp+526,((0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+527,((0xffU & (- (IData)((1U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                      >> 7U)))))),8);
    bufp->fullCData(oldp+528,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                ? 0U : (0xffU & ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                >> 7U))))
                                                  : 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                  >> 8U))))),8);
    bufp->fullSData(oldp+529,((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+530,((0xffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                        >> 7U)))))),16);
    bufp->fullSData(oldp+531,((0xffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                        >> 0xfU)))))),16);
    bufp->fullSData(oldp+532,((0xffffU & ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                           ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                               ? (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                >> 0xfU))))
                                               : (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                >> 7U)))))
                                           : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                               ? 0U
                                               : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                  >> 0x10U))))),16);
    bufp->fullQData(oldp+533,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product),64);
    bufp->fullIData(oldp+535,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product)),32);
    bufp->fullIData(oldp+536,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+537,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient),32);
    bufp->fullIData(oldp+538,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder),32);
    bufp->fullBit(oldp+539,((1U & (~ (IData)((0xc00U 
                                              == (0xc00U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))))));
    bufp->fullBit(oldp+540,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+541,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+542,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 8U))),2);
    bufp->fullBit(oldp+543,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start));
    bufp->fullBit(oldp+544,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start));
    bufp->fullBit(oldp+545,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 8U)))));
    bufp->fullBit(oldp+546,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    bufp->fullBit(oldp+547,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    bufp->fullBit(oldp+548,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
    bufp->fullBit(oldp+549,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
    bufp->fullBit(oldp+550,((0U == vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B)));
    bufp->fullCData(oldp+551,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state),2);
    bufp->fullCData(oldp+552,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Next_state),2);
    bufp->fullBit(oldp+553,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    bufp->fullBit(oldp+554,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    bufp->fullBit(oldp+555,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    bufp->fullBit(oldp+556,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    bufp->fullSData(oldp+557,(((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 1U)) | 
                               ((0xcU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                         >> 8U)) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))),9);
    bufp->fullSData(oldp+558,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q),9);
    bufp->fullSData(oldp+559,(((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                          >> 1U)) | 
                               ((0xcU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                         >> 6U)) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))),9);
    bufp->fullSData(oldp+560,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q),9);
    bufp->fullSData(oldp+561,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux),9);
    bufp->fullIData(oldp+562,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                    ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder
                                    : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient)
                                : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                    ? (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product)
                                    : (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
                                               >> 0x20U))))),32);
    bufp->fullCData(oldp+563,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel),2);
    bufp->fullBit(oldp+564,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed));
    bufp->fullBit(oldp+565,(((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                             & (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))));
    bufp->fullCData(oldp+566,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+567,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+568,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep),2);
    bufp->fullCData(oldp+569,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__NextStep),2);
    bufp->fullBit(oldp+570,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
    bufp->fullBit(oldp+571,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
    bufp->fullCData(oldp+572,((0x3fU & ((IData)(0x21U) 
                                        + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))))),6);
    bufp->fullCData(oldp+573,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count),6);
    bufp->fullBit(oldp+574,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count))));
    bufp->fullBit(oldp+575,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand));
    bufp->fullBit(oldp+576,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B));
    bufp->fullIData(oldp+577,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A),32);
    bufp->fullIData(oldp+578,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B),32);
    bufp->fullIData(oldp+579,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs),32);
    bufp->fullIData(oldp+580,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs),32);
    bufp->fullBit(oldp+581,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q));
    bufp->fullIData(oldp+582,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_out),32);
    bufp->fullCData(oldp+583,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                           << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),5);
    bufp->fullBit(oldp+584,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) 
                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_9) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero))))));
    bufp->fullQData(oldp+585,((0x1ffffffffULL & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result)),33);
    bufp->fullIData(oldp+587,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend),32);
    bufp->fullIData(oldp+588,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_d),32);
    bufp->fullIData(oldp+589,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q),32);
    bufp->fullIData(oldp+590,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder),32);
    bufp->fullIData(oldp+591,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q),32);
    bufp->fullIData(oldp+592,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_d),32);
    bufp->fullIData(oldp+593,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q),32);
    bufp->fullIData(oldp+594,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_quotient),32);
    bufp->fullIData(oldp+595,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_remainder),32);
    bufp->fullBit(oldp+596,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                              ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+597,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                             >> 0x1fU)));
    bufp->fullBit(oldp+598,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B 
                             >> 0x1fU)));
    bufp->fullBit(oldp+599,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))));
    bufp->fullBit(oldp+600,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4))) 
                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8)))))));
    bufp->fullBit(oldp+601,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                 >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+602,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                 >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+603,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                                      >> 0x1fU)))));
    bufp->fullCData(oldp+604,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal))))))))),8);
    bufp->fullCData(oldp+605,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger))))))))),8);
    bufp->fullCData(oldp+606,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller))))))))),8);
    bufp->fullCData(oldp+607,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17))))),4);
    bufp->fullCData(oldp+608,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),4);
    bufp->fullCData(oldp+609,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),4);
    bufp->fullCData(oldp+610,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))),2);
    bufp->fullCData(oldp+611,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4))) 
                                << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                          | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),2);
    bufp->fullCData(oldp+612,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_12) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_15))),2);
    bufp->fullCData(oldp+613,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)),4);
    bufp->fullCData(oldp+614,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs)),4);
    bufp->fullBit(oldp+615,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal));
    bufp->fullBit(oldp+616,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger));
    bufp->fullBit(oldp+617,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller));
    bufp->fullCData(oldp+618,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq),4);
    bufp->fullCData(oldp+619,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 4U))),4);
    bufp->fullCData(oldp+620,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 4U))),4);
    bufp->fullBit(oldp+621,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
    bufp->fullBit(oldp+622,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger));
    bufp->fullBit(oldp+623,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller));
    bufp->fullCData(oldp+624,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq),4);
    bufp->fullCData(oldp+625,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 8U))),4);
    bufp->fullCData(oldp+626,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 8U))),4);
    bufp->fullBit(oldp+627,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal));
    bufp->fullBit(oldp+628,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger));
    bufp->fullBit(oldp+629,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller));
    bufp->fullCData(oldp+630,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq),4);
    bufp->fullCData(oldp+631,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+632,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+633,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
    bufp->fullBit(oldp+634,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger));
    bufp->fullBit(oldp+635,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller));
    bufp->fullCData(oldp+636,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq),4);
    bufp->fullCData(oldp+637,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+638,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+639,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal));
    bufp->fullBit(oldp+640,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger));
    bufp->fullBit(oldp+641,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller));
    bufp->fullCData(oldp+642,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq),4);
    bufp->fullCData(oldp+643,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+644,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+645,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
    bufp->fullBit(oldp+646,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger));
    bufp->fullBit(oldp+647,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller));
    bufp->fullCData(oldp+648,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq),4);
    bufp->fullCData(oldp+649,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+650,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+651,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal));
    bufp->fullBit(oldp+652,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger));
    bufp->fullBit(oldp+653,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller));
    bufp->fullCData(oldp+654,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq),4);
    bufp->fullCData(oldp+655,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+656,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+657,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
    bufp->fullBit(oldp+658,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger));
    bufp->fullBit(oldp+659,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller));
    bufp->fullCData(oldp+660,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq),4);
    bufp->fullCData(oldp+661,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero) 
                                << 7U) | ((0x40U & 
                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)) 
                                                    << 4U)) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero))))))))),8);
    bufp->fullCData(oldp+662,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0),2);
    bufp->fullCData(oldp+663,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1),2);
    bufp->fullCData(oldp+664,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2),2);
    bufp->fullCData(oldp+665,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3),2);
    bufp->fullCData(oldp+666,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4),2);
    bufp->fullCData(oldp+667,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5),2);
    bufp->fullCData(oldp+668,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6),2);
    bufp->fullCData(oldp+669,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7),2);
    bufp->fullCData(oldp+670,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y),3);
    bufp->fullBit(oldp+671,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero));
    bufp->fullBit(oldp+672,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 3U))));
    bufp->fullBit(oldp+673,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 2U))));
    bufp->fullBit(oldp+674,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 1U))));
    bufp->fullBit(oldp+675,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    bufp->fullBit(oldp+676,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero));
    bufp->fullBit(oldp+677,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 7U))));
    bufp->fullBit(oldp+678,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 6U))));
    bufp->fullBit(oldp+679,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 5U))));
    bufp->fullBit(oldp+680,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 4U))));
    bufp->fullBit(oldp+681,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)))));
    bufp->fullBit(oldp+682,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xbU))));
    bufp->fullBit(oldp+683,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xaU))));
    bufp->fullBit(oldp+684,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 9U))));
    bufp->fullBit(oldp+685,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 8U))));
    bufp->fullBit(oldp+686,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero));
    bufp->fullBit(oldp+687,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xfU))));
    bufp->fullBit(oldp+688,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xeU))));
    bufp->fullBit(oldp+689,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xdU))));
    bufp->fullBit(oldp+690,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xcU))));
    bufp->fullBit(oldp+691,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)))));
    bufp->fullBit(oldp+692,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x13U))));
    bufp->fullBit(oldp+693,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x12U))));
    bufp->fullBit(oldp+694,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x11U))));
    bufp->fullBit(oldp+695,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x10U))));
    bufp->fullBit(oldp+696,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8)))));
    bufp->fullBit(oldp+697,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x17U))));
    bufp->fullBit(oldp+698,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x16U))));
    bufp->fullBit(oldp+699,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x15U))));
    bufp->fullBit(oldp+700,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x14U))));
    bufp->fullBit(oldp+701,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)))));
    bufp->fullBit(oldp+702,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+703,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+704,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x19U))));
    bufp->fullBit(oldp+705,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x18U))));
    bufp->fullBit(oldp+706,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero));
    bufp->fullBit(oldp+707,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                             >> 0x1fU)));
    bufp->fullBit(oldp+708,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+709,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+710,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+711,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7))));
    bufp->fullBit(oldp+712,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6))));
    bufp->fullBit(oldp+713,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5))));
    bufp->fullBit(oldp+714,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4))));
    bufp->fullBit(oldp+715,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3))));
    bufp->fullBit(oldp+716,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2))));
    bufp->fullBit(oldp+717,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1))));
    bufp->fullBit(oldp+718,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0))));
    bufp->fullBit(oldp+719,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux));
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7) 
                                   >> 1U))));
    bufp->fullBit(oldp+721,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6) 
                                   >> 1U))));
    bufp->fullBit(oldp+722,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5) 
                                   >> 1U))));
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4) 
                                   >> 1U))));
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3) 
                                   >> 1U))));
    bufp->fullBit(oldp+725,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2) 
                                   >> 1U))));
    bufp->fullBit(oldp+726,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1) 
                                   >> 1U))));
    bufp->fullBit(oldp+727,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0) 
                                   >> 1U))));
    bufp->fullBit(oldp+728,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux));
    bufp->fullIData(oldp+729,(VL_SHIFTL_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q, 1U)),32);
    bufp->fullBit(oldp+730,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+731,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result)),32);
    bufp->fullBit(oldp+732,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Quotient_sign_assignment__sel));
    bufp->fullIData(oldp+733,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q)),32);
    bufp->fullIData(oldp+734,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                           << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),32);
    bufp->fullIData(oldp+735,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in),32);
    bufp->fullIData(oldp+736,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in, 1U)),32);
    bufp->fullIData(oldp+737,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1, 2U)),32);
    bufp->fullIData(oldp+738,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2, 4U)),32);
    bufp->fullIData(oldp+739,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4, 8U)),32);
    bufp->fullIData(oldp+740,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8, 0x10U)),32);
    bufp->fullIData(oldp+741,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1),32);
    bufp->fullIData(oldp+742,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2),32);
    bufp->fullIData(oldp+743,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4),32);
    bufp->fullIData(oldp+744,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8),32);
    bufp->fullIData(oldp+745,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16),32);
    bufp->fullBit(oldp+746,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel));
    bufp->fullBit(oldp+747,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel));
    bufp->fullBit(oldp+748,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel));
    bufp->fullCData(oldp+749,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                           << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),6);
    bufp->fullBit(oldp+750,((1U & (((IData)(0x21U) 
                                    + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))) 
                                   >> 6U))));
    bufp->fullCData(oldp+751,((0x7fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))))),7);
    bufp->fullCData(oldp+752,((0x7fU & ((IData)(0x21U) 
                                        + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))))),7);
    bufp->fullBit(oldp+753,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Remainder_sign_assignment__sel));
    bufp->fullIData(oldp+754,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q)),32);
    bufp->fullIData(oldp+755,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A)),32);
    bufp->fullBit(oldp+756,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Select_Absolute_B__sel));
    bufp->fullIData(oldp+757,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B)),32);
    bufp->fullQData(oldp+758,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend))),33);
    bufp->fullQData(oldp+760,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs))),33);
    bufp->fullBit(oldp+762,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                           >> 0x21U)))));
    bufp->fullQData(oldp+763,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend))),34);
    bufp->fullQData(oldp+765,((0x3ffffffffULL & (~ (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs))))),34);
    bufp->fullQData(oldp+767,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result),34);
    bufp->fullIData(oldp+769,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q 
                                << 1U) | (1U & (~ (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                                           >> 0x20U)))))),32);
    bufp->fullBit(oldp+770,((((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
                             | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))));
    bufp->fullIData(oldp+771,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder 
                                << 1U) | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
                                          >> 0x1fU))),32);
    bufp->fullBit(oldp+772,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                             | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))));
    bufp->fullCData(oldp+773,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state),2);
    bufp->fullCData(oldp+774,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Next_state),2);
    bufp->fullBit(oldp+775,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    bufp->fullBit(oldp+776,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    bufp->fullIData(oldp+777,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplicand),32);
    bufp->fullIData(oldp+778,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier),32);
    bufp->fullIData(oldp+779,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q)),32);
    bufp->fullIData(oldp+780,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q)),32);
    bufp->fullIData(oldp+781,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs),32);
    bufp->fullIData(oldp+782,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs),32);
    bufp->fullCData(oldp+783,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count),5);
    bufp->fullCData(oldp+784,((0x1fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))),5);
    bufp->fullBit(oldp+785,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count))));
    bufp->fullBit(oldp+786,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q))));
    bufp->fullBit(oldp+787,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q))));
    bufp->fullBit(oldp+788,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_is_zero));
    bufp->fullBit(oldp+789,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+790,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+791,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A));
    bufp->fullBit(oldp+792,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B));
    bufp->fullBit(oldp+793,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff));
    bufp->fullBit(oldp+794,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11) 
                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14)))));
    bufp->fullBit(oldp+795,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier_sel_b));
    bufp->fullCData(oldp+796,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                           << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))),5);
    bufp->fullQData(oldp+797,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q),64);
    bufp->fullIData(oldp+799,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_d),32);
    bufp->fullIData(oldp+800,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q),32);
    bufp->fullIData(oldp+801,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B),32);
    bufp->fullIData(oldp+802,(((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                        >> 0x20U)) 
                               + vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B)),32);
    bufp->fullBit(oldp+803,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                     >> 0x20U))) 
                                                    + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))) 
                                                   >> 0x20U))))));
    bufp->fullQData(oldp+804,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16),64);
    bufp->fullQData(oldp+806,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__final_result),64);
    bufp->fullBit(oldp+808,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q)));
    bufp->fullIData(oldp+809,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                       >> 0x20U))),32);
    bufp->fullQData(oldp+810,((QData)((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                               >> 0x20U)))),33);
    bufp->fullQData(oldp+812,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))),33);
    bufp->fullQData(oldp+814,((0x1ffffffffULL & ((QData)((IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                  >> 0x20U))) 
                                                 + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))))),33);
    bufp->fullBit(oldp+816,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))));
    bufp->fullBit(oldp+817,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5))) 
                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9)))))));
    bufp->fullBit(oldp+818,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                 >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+819,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                 >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+820,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                                      >> 0x1fU)))));
    bufp->fullCData(oldp+821,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal))))))))),8);
    bufp->fullCData(oldp+822,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger))))))))),8);
    bufp->fullCData(oldp+823,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
                                << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller))))))))),8);
    bufp->fullCData(oldp+824,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17))))),4);
    bufp->fullCData(oldp+825,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),4);
    bufp->fullCData(oldp+826,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),4);
    bufp->fullCData(oldp+827,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))),2);
    bufp->fullCData(oldp+828,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11) 
                                << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14))),2);
    bufp->fullCData(oldp+829,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5))) 
                                << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                          | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),2);
    bufp->fullCData(oldp+830,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs)),4);
    bufp->fullCData(oldp+831,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs)),4);
    bufp->fullBit(oldp+832,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal));
    bufp->fullBit(oldp+833,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger));
    bufp->fullBit(oldp+834,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller));
    bufp->fullCData(oldp+835,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq),4);
    bufp->fullCData(oldp+836,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 4U))),4);
    bufp->fullCData(oldp+837,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 4U))),4);
    bufp->fullBit(oldp+838,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
    bufp->fullBit(oldp+839,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger));
    bufp->fullBit(oldp+840,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller));
    bufp->fullCData(oldp+841,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq),4);
    bufp->fullCData(oldp+842,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 8U))),4);
    bufp->fullCData(oldp+843,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 8U))),4);
    bufp->fullBit(oldp+844,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal));
    bufp->fullBit(oldp+845,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger));
    bufp->fullBit(oldp+846,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller));
    bufp->fullCData(oldp+847,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq),4);
    bufp->fullCData(oldp+848,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+849,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+850,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
    bufp->fullBit(oldp+851,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger));
    bufp->fullBit(oldp+852,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller));
    bufp->fullCData(oldp+853,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq),4);
    bufp->fullCData(oldp+854,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+855,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+856,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal));
    bufp->fullBit(oldp+857,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger));
    bufp->fullBit(oldp+858,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller));
    bufp->fullCData(oldp+859,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq),4);
    bufp->fullCData(oldp+860,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+861,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+862,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
    bufp->fullBit(oldp+863,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger));
    bufp->fullBit(oldp+864,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller));
    bufp->fullCData(oldp+865,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq),4);
    bufp->fullCData(oldp+866,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+867,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+868,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal));
    bufp->fullBit(oldp+869,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger));
    bufp->fullBit(oldp+870,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller));
    bufp->fullCData(oldp+871,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq),4);
    bufp->fullCData(oldp+872,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+873,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+874,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
    bufp->fullBit(oldp+875,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger));
    bufp->fullBit(oldp+876,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller));
    bufp->fullCData(oldp+877,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq),4);
    bufp->fullBit(oldp+878,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                             & (((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero))))));
    bufp->fullCData(oldp+879,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero) 
                                << 7U) | ((0x40U & 
                                           ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)) 
                                                    << 4U)) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero))))))))),8);
    bufp->fullCData(oldp+880,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0),2);
    bufp->fullCData(oldp+881,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1),2);
    bufp->fullCData(oldp+882,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2),2);
    bufp->fullCData(oldp+883,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3),2);
    bufp->fullCData(oldp+884,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4),2);
    bufp->fullCData(oldp+885,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5),2);
    bufp->fullCData(oldp+886,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6),2);
    bufp->fullCData(oldp+887,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7),2);
    bufp->fullCData(oldp+888,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y),3);
    bufp->fullCData(oldp+889,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)),4);
    bufp->fullBit(oldp+890,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero));
    bufp->fullBit(oldp+891,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 3U))));
    bufp->fullBit(oldp+892,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 2U))));
    bufp->fullBit(oldp+893,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 1U))));
    bufp->fullBit(oldp+894,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    bufp->fullCData(oldp+895,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 4U))),4);
    bufp->fullBit(oldp+896,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero));
    bufp->fullBit(oldp+897,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 7U))));
    bufp->fullBit(oldp+898,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 6U))));
    bufp->fullBit(oldp+899,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 5U))));
    bufp->fullBit(oldp+900,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 4U))));
    bufp->fullCData(oldp+901,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 8U))),4);
    bufp->fullBit(oldp+902,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)))));
    bufp->fullBit(oldp+903,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xbU))));
    bufp->fullBit(oldp+904,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xaU))));
    bufp->fullBit(oldp+905,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 9U))));
    bufp->fullBit(oldp+906,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 8U))));
    bufp->fullCData(oldp+907,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+908,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero));
    bufp->fullBit(oldp+909,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xfU))));
    bufp->fullBit(oldp+910,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xeU))));
    bufp->fullBit(oldp+911,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xdU))));
    bufp->fullBit(oldp+912,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0xcU))));
    bufp->fullCData(oldp+913,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+914,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)))));
    bufp->fullBit(oldp+915,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x13U))));
    bufp->fullBit(oldp+916,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x12U))));
    bufp->fullBit(oldp+917,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x11U))));
    bufp->fullBit(oldp+918,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x10U))));
    bufp->fullCData(oldp+919,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+920,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1)))));
    bufp->fullBit(oldp+921,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x17U))));
    bufp->fullBit(oldp+922,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x16U))));
    bufp->fullBit(oldp+923,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x15U))));
    bufp->fullBit(oldp+924,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x14U))));
    bufp->fullCData(oldp+925,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+926,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0)))));
    bufp->fullBit(oldp+927,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+928,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+929,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x19U))));
    bufp->fullBit(oldp+930,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x18U))));
    bufp->fullCData(oldp+931,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+932,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero));
    bufp->fullBit(oldp+933,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                             >> 0x1fU)));
    bufp->fullBit(oldp+934,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+935,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+936,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+937,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7))));
    bufp->fullBit(oldp+938,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6))));
    bufp->fullBit(oldp+939,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5))));
    bufp->fullBit(oldp+940,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4))));
    bufp->fullBit(oldp+941,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3))));
    bufp->fullBit(oldp+942,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2))));
    bufp->fullBit(oldp+943,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1))));
    bufp->fullBit(oldp+944,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0))));
    bufp->fullBit(oldp+945,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux));
    bufp->fullBit(oldp+946,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7) 
                                   >> 1U))));
    bufp->fullBit(oldp+947,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6) 
                                   >> 1U))));
    bufp->fullBit(oldp+948,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5) 
                                   >> 1U))));
    bufp->fullBit(oldp+949,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4) 
                                   >> 1U))));
    bufp->fullBit(oldp+950,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3) 
                                   >> 1U))));
    bufp->fullBit(oldp+951,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2) 
                                   >> 1U))));
    bufp->fullBit(oldp+952,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1) 
                                   >> 1U))));
    bufp->fullBit(oldp+953,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0) 
                                   >> 1U))));
    bufp->fullBit(oldp+954,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux));
    bufp->fullQData(oldp+955,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16)),64);
    bufp->fullQData(oldp+957,((QData)((IData)((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))),64);
    bufp->fullQData(oldp+959,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_in),64);
    bufp->fullQData(oldp+961,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_out),64);
    bufp->fullQData(oldp+963,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q, 1U)),64);
    bufp->fullQData(oldp+965,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1, 2U)),64);
    bufp->fullQData(oldp+967,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2, 4U)),64);
    bufp->fullQData(oldp+969,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4, 8U)),64);
    bufp->fullQData(oldp+971,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8, 0x10U)),64);
    bufp->fullQData(oldp+973,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16, 0x20U)),64);
    bufp->fullQData(oldp+975,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1),64);
    bufp->fullQData(oldp+977,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2),64);
    bufp->fullQData(oldp+979,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4),64);
    bufp->fullQData(oldp+981,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8),64);
    bufp->fullBit(oldp+983,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel));
    bufp->fullBit(oldp+984,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel));
    bufp->fullBit(oldp+985,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel));
    bufp->fullQData(oldp+986,(((((QData)((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                  >> 0x20U))) 
                                 + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))) 
                                << 0x1fU) | (QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                        >> 1U))))))),64);
    bufp->fullBit(oldp+988,((1U & (((IData)(0x20U) 
                                    + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))) 
                                   >> 5U))));
    bufp->fullCData(oldp+989,((0x3fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux))))))),6);
    bufp->fullCData(oldp+990,((0x3fU & ((IData)(0x20U) 
                                        + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))))),6);
    bufp->fullIData(oldp+991,((- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q))),32);
    bufp->fullIData(oldp+992,((- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q))),32);
    bufp->fullBit(oldp+993,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                             | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))));
    bufp->fullQData(oldp+994,((((QData)((IData)((1U 
                                                 & (~ (IData)(
                                                              (0xc00U 
                                                               == 
                                                               (0xc00U 
                                                                & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))))))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))),33);
    bufp->fullQData(oldp+996,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q),33);
    bufp->fullQData(oldp+998,((((QData)((IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                     >> 0xbU))))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))),33);
    bufp->fullQData(oldp+1000,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q),33);
    bufp->fullBit(oldp+1002,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel));
    bufp->fullIData(oldp+1003,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q, 1U)),32);
    bufp->fullCData(oldp+1004,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1005,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                         >> 0xaU))),5);
    bufp->fullWData(oldp+1006,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R),1024);
    bufp->fullIData(oldp+1038,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U]),32);
    bufp->fullIData(oldp+1039,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U]),32);
    bufp->fullIData(oldp+1040,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U]),32);
    bufp->fullIData(oldp+1041,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U]),32);
    bufp->fullIData(oldp+1042,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U]),32);
    bufp->fullIData(oldp+1043,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U]),32);
    bufp->fullIData(oldp+1044,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U]),32);
    bufp->fullIData(oldp+1045,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U]),32);
    bufp->fullIData(oldp+1046,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U]),32);
    bufp->fullIData(oldp+1047,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU]),32);
    bufp->fullIData(oldp+1048,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U]),32);
    bufp->fullIData(oldp+1049,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU]),32);
    bufp->fullIData(oldp+1050,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U]),32);
    bufp->fullIData(oldp+1051,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU]),32);
    bufp->fullIData(oldp+1052,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U]),32);
    bufp->fullIData(oldp+1053,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU]),32);
    bufp->fullIData(oldp+1054,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U]),32);
    bufp->fullIData(oldp+1055,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU]),32);
    bufp->fullIData(oldp+1056,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U]),32);
    bufp->fullIData(oldp+1057,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU]),32);
    bufp->fullIData(oldp+1058,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U]),32);
    bufp->fullIData(oldp+1059,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU]),32);
    bufp->fullIData(oldp+1060,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U]),32);
    bufp->fullIData(oldp+1061,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU]),32);
    bufp->fullIData(oldp+1062,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U]),32);
    bufp->fullIData(oldp+1063,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU]),32);
    bufp->fullIData(oldp+1064,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U]),32);
    bufp->fullIData(oldp+1065,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU]),32);
    bufp->fullIData(oldp+1066,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U]),32);
    bufp->fullIData(oldp+1067,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU]),32);
    bufp->fullIData(oldp+1068,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U]),32);
    bufp->fullIData(oldp+1069,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU]),32);
    bufp->fullBit(oldp+1070,(vlSelfRef.processor_tb__DOT__clk_i));
    bufp->fullBit(oldp+1071,(vlSelfRef.processor_tb__DOT__rst));
    bufp->fullIData(oldp+1072,(vlSelfRef.processor_tb__DOT__sw_tb),32);
    bufp->fullIData(oldp+1073,(vlSelfRef.processor_tb__DOT__input_port_tb),32);
    bufp->fullBit(oldp+1074,(vlSelfRef.processor_tb__DOT__dut__DOT__ID_flush));
    bufp->fullBit(oldp+1075,(((IData)(vlSelfRef.processor_tb__DOT__rst) 
                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))));
    bufp->fullBit(oldp+1076,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul));
    bufp->fullBit(oldp+1077,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div));
    bufp->fullBit(oldp+1078,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul) 
                              | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start)) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed)))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div) 
                              | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start)) 
                                 & (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))));
    bufp->fullBit(oldp+1080,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__rst));
    bufp->fullBit(oldp+1081,((((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
                               & (1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) 
                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0))));
    bufp->fullBit(oldp+1082,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel) 
                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul))));
}
