// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vprocessor_tb__Syms.h"


void Vprocessor_tb___024root__trace_chg_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vprocessor_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_chg_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vprocessor_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vprocessor_tb___024root__trace_chg_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data),32);
        bufp->chgIData(oldp+1,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data),32);
        bufp->chgIData(oldp+2,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data),32);
        bufp->chgIData(oldp+3,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.processor_tb__DOT__clk_counter),32);
        bufp->chgBit(oldp+5,(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)))));
        bufp->chgBit(oldp+7,(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss));
        bufp->chgBit(oldp+8,(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection));
        bufp->chgBit(oldp+9,(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed));
        __Vtemp_3[0U] = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result) 
                          << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                     << 2U) | (3U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
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
        __Vtemp_3[2U] = (((IData)((((QData)((IData)(
                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
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
                                >> 6U)) | ((IData)(
                                                   ((((QData)((IData)(
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
        bufp->chgWData(oldp+10,(__Vtemp_3),100);
        bufp->chgWData(oldp+14,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q),66);
        bufp->chgWData(oldp+17,(vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID),218);
        bufp->chgWData(oldp+24,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q),218);
        bufp->chgCData(oldp+31,(((0x3eU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                           >> 3U)) 
                                 | (0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))),6);
        bufp->chgCData(oldp+32,(((0x3eU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                           >> 3U)) 
                                 | (0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))),6);
        bufp->chgIData(oldp+33,(((0x1f0000U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 1U)) 
                                 | ((0xf800U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 0xbU)) 
                                    | ((0x7c0U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 3U)) 
                                       | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren) 
                                                     << 1U) 
                                                    | (1U 
                                                       & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U])))))))))),21);
        bufp->chgQData(oldp+34,((((QData)((IData)((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                              >> 2U))))) 
                                  << 0x21U) | (((QData)((IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                 >> 7U))) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren))))),38);
        bufp->chgQData(oldp+36,(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data),64);
        bufp->chgIData(oldp+38,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
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
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
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
        bufp->chgIData(oldp+39,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
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
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
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
        bufp->chgIData(oldp+40,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded),32);
        bufp->chgIData(oldp+41,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded),32);
        bufp->chgBit(oldp+42,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forward_en));
        bufp->chgBit(oldp+43,(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forward_en));
        bufp->chgBit(oldp+44,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                               & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL)) 
                                  & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 9U)) 
                                      == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                                   >> 4U))) 
                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))))));
        bufp->chgBit(oldp+45,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
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
                          << 0x12U) | ((0x3e000U & 
                                        (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                         << 8U)) | 
                                       ((0x1f00U & 
                                         (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                          >> 6U)) | 
                                        (0xffU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))));
        __Vtemp_9[4U] = (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                         >> 0xeU);
        bufp->chgWData(oldp+46,(__Vtemp_9),146);
        bufp->chgWData(oldp+51,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q),146);
        bufp->chgQData(oldp+56,((((QData)((IData)((
                                                   (0x4000000U 
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
        bufp->chgQData(oldp+58,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q),39);
        bufp->chgWData(oldp+60,(vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg),289);
        __Vtemp_10[0U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)) 
                                     << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))) 
                           << 0xdU) | ((0x1f00U & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                   << 3U)) 
                                       | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start) 
                                           << 7U) | 
                                          (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start) 
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
        bufp->chgWData(oldp+70,(__Vtemp_10),77);
        bufp->chgQData(oldp+73,((((QData)((IData)((0x1fU 
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
        bufp->chgQData(oldp+75,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q),39);
        bufp->chgQData(oldp+77,((((QData)((IData)((
                                                   (2U 
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
        bufp->chgQData(oldp+79,((((QData)((IData)((
                                                   (((2U 
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
        bufp->chgBit(oldp+81,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                               | ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                                  | (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))));
        bufp->chgQData(oldp+82,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux),39);
        bufp->chgCData(oldp+84,(vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel),2);
        bufp->chgBit(oldp+85,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_0) 
                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_1))));
        bufp->chgCData(oldp+86,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                           << 5U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0x1bU)))),6);
        bufp->chgIData(oldp+87,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                  << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+88,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+89,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                  << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+90,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+91,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                  << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+92,(((IData)(4U) + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                   >> 0x10U)))),32);
        bufp->chgCData(oldp+93,((7U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                       >> 0x18U))),3);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                          >> 0xbU))),5);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                     >> 8U))));
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                     >> 9U))));
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                     >> 7U))));
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+103,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+104,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+107,(((3U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                  << 5U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 0x1bU)))) 
                                | (4U == (0x3fU & (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                    << 5U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                      >> 0x1bU)))))));
        bufp->chgIData(oldp+108,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 >> 0x10U)) 
                                  | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0x10U) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x10U)))),32);
        bufp->chgIData(oldp+109,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 >> 0x10U)) 
                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0x10U) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x10U)))),32);
        bufp->chgIData(oldp+110,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 >> 0x10U)) 
                                  ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0x10U) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x10U)))),32);
        bufp->chgIData(oldp+111,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                  | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                     & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                        | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))),32);
        bufp->chgIData(oldp+112,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result)),32);
        bufp->chgIData(oldp+113,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                            ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16))),32);
        bufp->chgIData(oldp+114,(((0x4000000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                   ? ((0x2000000U & 
                                       vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                       ? ((0x1000000U 
                                           & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                           ? 0U : ((IData)(4U) 
                                                   + 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
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
                                   : ((0x2000000U & 
                                       vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
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
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
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
        bufp->chgBit(oldp+115,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl));
        bufp->chgBit(oldp+116,((0x1dU == (0x3fU & (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                    << 5U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                      >> 0x1bU))))));
        bufp->chgCData(oldp+117,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1))),2);
        bufp->chgBit(oldp+118,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp));
        bufp->chgBit(oldp+119,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2));
        bufp->chgBit(oldp+120,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2));
        bufp->chgBit(oldp+121,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2));
        bufp->chgBit(oldp+122,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken));
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result 
                                              >> 0x20U)))));
        bufp->chgQData(oldp+124,((QData)((IData)(((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     >> 0x10U))))),33);
        bufp->chgQData(oldp+126,((0x1ffffffffULL & 
                                  ((0x1dU == (0x3fU 
                                              & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                  << 5U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 0x1bU))))
                                    ? (~ (((QData)((IData)(
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
        bufp->chgQData(oldp+128,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result),33);
        bufp->chgQData(oldp+130,((QData)((IData)((0x1dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                       << 5U) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         >> 0x1bU))))))),33);
        bufp->chgBit(oldp+132,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))));
        bufp->chgBit(oldp+133,((1U & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                      | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                         & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                 >> 0xfU)) 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                >> 0xfU)) 
                                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32))))))));
        bufp->chgBit(oldp+134,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))));
        bufp->chgBit(oldp+135,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0xfU)) 
                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+136,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos));
        bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))));
        bufp->chgCData(oldp+138,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal) 
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
        bufp->chgCData(oldp+139,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger) 
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
        bufp->chgCData(oldp+140,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller) 
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
        bufp->chgCData(oldp+141,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+142,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+143,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+144,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+145,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14))),2);
        bufp->chgCData(oldp+146,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15))),2);
        bufp->chgBit(oldp+147,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32));
        bufp->chgBit(oldp+148,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32));
        bufp->chgBit(oldp+149,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
        bufp->chgBit(oldp+150,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
        bufp->chgBit(oldp+151,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                      & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 0xfU)) 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                             >> 0xfU)) 
                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32)))))));
        bufp->chgBit(oldp+152,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32))))));
        bufp->chgCData(oldp+153,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+154,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+155,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+156,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+157,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+158,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+159,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+160,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+161,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+162,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+163,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+164,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+165,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+166,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+167,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+168,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+169,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+170,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+171,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+172,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+173,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+174,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+175,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+176,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+177,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])),4);
        bufp->chgCData(oldp+178,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U])),4);
        bufp->chgBit(oldp+179,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+180,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+181,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+182,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+183,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+184,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 4U))),4);
        bufp->chgBit(oldp+185,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+186,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+187,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+188,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+189,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+190,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 8U))),4);
        bufp->chgBit(oldp+191,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+192,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+193,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+194,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+195,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+196,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+197,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+198,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+199,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+200,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgIData(oldp+201,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in),32);
        bufp->chgIData(oldp+202,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in),32);
        bufp->chgIData(oldp+203,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out),32);
        bufp->chgIData(oldp+204,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit) 
                                   << 0x1fU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                                                >> 1U))),32);
        bufp->chgIData(oldp+205,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                                                >> 2U))),32);
        bufp->chgIData(oldp+206,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                                                >> 4U))),32);
        bufp->chgIData(oldp+207,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                                                >> 8U))),32);
        bufp->chgIData(oldp+208,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+209,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1),32);
        bufp->chgIData(oldp+210,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2),32);
        bufp->chgIData(oldp+211,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4),32);
        bufp->chgIData(oldp+212,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8),32);
        bufp->chgIData(oldp+213,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16),32);
        bufp->chgBit(oldp+214,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode));
        bufp->chgBit(oldp+215,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1)) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0))));
        bufp->chgBit(oldp+216,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode));
        bufp->chgBit(oldp+217,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit));
        bufp->chgBit(oldp+218,((0U != (0x7ffffffU & 
                                       ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                         << 0xbU) | 
                                        (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                         >> 0x15U))))));
        bufp->chgCData(oldp+219,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel),2);
        bufp->chgBit(oldp+220,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel));
        bufp->chgBit(oldp+221,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel));
        bufp->chgBit(oldp+222,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel));
        bufp->chgBit(oldp+223,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel));
        bufp->chgBit(oldp+224,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel));
        bufp->chgBit(oldp+225,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0xfU)) 
                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+226,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos));
        bufp->chgBit(oldp+227,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
        bufp->chgCData(oldp+228,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal) 
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
        bufp->chgCData(oldp+229,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger) 
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
        bufp->chgCData(oldp+230,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller) 
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
        bufp->chgCData(oldp+231,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+232,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+233,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+234,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+235,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14))),2);
        bufp->chgCData(oldp+236,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15))),2);
        bufp->chgBit(oldp+237,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32));
        bufp->chgBit(oldp+238,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32));
        bufp->chgBit(oldp+239,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
        bufp->chgBit(oldp+240,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
        bufp->chgBit(oldp+241,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                                      & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 0xfU)) 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                             >> 0xfU)) 
                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32)))))));
        bufp->chgBit(oldp+242,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32))))));
        bufp->chgCData(oldp+243,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+244,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+245,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+246,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+247,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+248,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+249,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+250,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+251,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+252,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+253,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+254,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+255,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+256,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+257,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+258,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+259,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+260,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+261,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+262,((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+263,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+264,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+265,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+266,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+267,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U])),4);
        bufp->chgCData(oldp+268,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U])),4);
        bufp->chgBit(oldp+269,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+270,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+271,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+272,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+273,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+274,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 4U))),4);
        bufp->chgBit(oldp+275,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+276,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+277,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+278,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+279,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+280,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 8U))),4);
        bufp->chgBit(oldp+281,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+282,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+283,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+284,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+285,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+286,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+287,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+288,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+289,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+290,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgBit(oldp+291,((1U & (IData)((1ULL 
                                              & ((4ULL 
                                                  + (QData)((IData)(
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                        >> 0x10U))))) 
                                                 >> 0x20U))))));
        bufp->chgQData(oldp+292,((QData)((IData)(((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                     >> 0x10U))))),33);
        bufp->chgQData(oldp+294,((0x1ffffffffULL & 
                                  (4ULL + (QData)((IData)(
                                                          ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                            << 0x10U) 
                                                           | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                              >> 0x10U))))))),33);
        bufp->chgBit(oldp+296,((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
        bufp->chgBit(oldp+297,((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
        bufp->chgIData(oldp+298,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded),32);
        bufp->chgIData(oldp+299,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded),32);
        bufp->chgIData(oldp+300,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                   << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+301,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                   << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+302,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+303,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+304,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                           >> 5U))),5);
        bufp->chgBit(oldp+305,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                      >> 2U))));
        bufp->chgBit(oldp+306,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                      >> 1U))));
        bufp->chgBit(oldp+307,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                      >> 4U))));
        bufp->chgBit(oldp+308,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+309,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+310,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start));
        bufp->chgBit(oldp+311,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start));
        bufp->chgIData(oldp+312,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                            ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                << 0x1bU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                  >> 5U))
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded))),32);
        bufp->chgIData(oldp+313,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                            ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                << 0x1bU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                  >> 5U))
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))),32);
        bufp->chgCData(oldp+314,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel),2);
        bufp->chgCData(oldp+315,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel),2);
        bufp->chgIData(oldp+316,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data)),32);
        bufp->chgIData(oldp+317,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+318,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                          >> 7U))),32);
        bufp->chgCData(oldp+319,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                   >> 2U)))),5);
        bufp->chgBit(oldp+320,((IData)((3ULL == (3ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)))));
        bufp->chgIData(oldp+321,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                          >> 7U))),32);
        bufp->chgCData(oldp+322,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                   >> 2U)))),5);
        bufp->chgBit(oldp+323,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren));
        bufp->chgCData(oldp+324,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel),2);
        bufp->chgCData(oldp+325,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel),2);
        bufp->chgBit(oldp+326,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched));
        bufp->chgBit(oldp+327,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched));
        bufp->chgBit(oldp+328,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                   >> 2U))) 
                                 == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                              >> 0xfU))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0))));
        bufp->chgBit(oldp+329,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                   >> 2U))) 
                                 == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                              >> 0xaU))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0))));
        bufp->chgBit(oldp+330,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                  >> 2U))) 
                                == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+331,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                  >> 2U))) 
                                == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+332,((0U == (0x1fU & (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                        >> 2U))))));
        bufp->chgBit(oldp+333,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                  >> 2U))) 
                                == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+334,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                  >> 2U))) 
                                == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+335,((0U == (0x1fU & (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                        >> 2U))))));
        bufp->chgCData(oldp+336,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q))),2);
        bufp->chgIData(oldp+337,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d),32);
        bufp->chgIData(oldp+338,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q),32);
        bufp->chgBit(oldp+339,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t));
        bufp->chgBit(oldp+340,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
        bufp->chgBit(oldp+341,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q));
        bufp->chgIData(oldp+342,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                  + (IData)((QData)((IData)(
                                                            (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                             << 2U)))))),32);
        bufp->chgCData(oldp+343,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel),2);
        bufp->chgIData(oldp+344,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data),32);
        bufp->chgBit(oldp+345,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                          >> 1U) | 
                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                          | (0U == vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)))))));
        __Vtemp_11[0U] = (1U | (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
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
        bufp->chgWData(oldp+346,(__Vtemp_11),66);
        bufp->chgIData(oldp+349,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                  << 2U)),32);
        bufp->chgBit(oldp+350,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                                  + (QData)((IData)(
                                                                    (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                                     << 2U)))) 
                                                 >> 0x20U))))));
        bufp->chgQData(oldp+351,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))),33);
        bufp->chgQData(oldp+353,((QData)((IData)((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                  << 2U)))),33);
        bufp->chgQData(oldp+355,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                   + (QData)((IData)(
                                                     (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                      << 2U)))))),33);
        bufp->chgBit(oldp+357,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))));
        bufp->chgBit(oldp+358,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q));
        bufp->chgBit(oldp+359,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q));
        bufp->chgIData(oldp+360,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d, 2U)),32);
        bufp->chgIData(oldp+361,((0xfffffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)),32);
        bufp->chgBit(oldp+362,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                       >> 0x12U) & 
                                      vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]))));
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+364,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+365,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x11U))),5);
        bufp->chgCData(oldp+366,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+367,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 9U))),5);
        bufp->chgBit(oldp+368,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1));
        bufp->chgBit(oldp+369,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2));
        bufp->chgBit(oldp+370,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en));
        bufp->chgBit(oldp+371,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en));
        bufp->chgBit(oldp+372,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren));
        bufp->chgBit(oldp+373,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U])));
        bufp->chgBit(oldp+374,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x11U)) 
                                 == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                              >> 5U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
        bufp->chgBit(oldp+375,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U)) 
                                 == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                              >> 5U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
        bufp->chgBit(oldp+376,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x11U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
        bufp->chgBit(oldp+377,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
        bufp->chgBit(oldp+378,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x11U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0))));
        bufp->chgBit(oldp+379,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0))));
        bufp->chgBit(oldp+380,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0));
        bufp->chgBit(oldp+381,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0));
        bufp->chgBit(oldp+382,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0));
        bufp->chgBit(oldp+383,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2) 
                                & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                    >> 0x12U) & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]))));
        bufp->chgBit(oldp+384,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                                & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 0xdU)))));
        bufp->chgBit(oldp+385,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                                & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                      >> 0xcU)))));
        bufp->chgBit(oldp+386,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL));
        bufp->chgBit(oldp+387,(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV));
        bufp->chgBit(oldp+388,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 9U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))));
        bufp->chgBit(oldp+389,((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 9U)) 
                                 == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                              >> 4U))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0))));
        bufp->chgQData(oldp+390,((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded)))),64);
        bufp->chgBit(oldp+392,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                                & (0x400000U == (0x7c00000U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+393,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                                & (0U == (0x7c00000U 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgIData(oldp+394,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                >> 2U))),32);
        bufp->chgBit(oldp+395,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                      >> 1U))));
        bufp->chgIData(oldp+396,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))),32);
        bufp->chgCData(oldp+397,((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 2U))),7);
        bufp->chgCData(oldp+398,((((7U == (7U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 0xeU))) 
                                   << 7U) | (((6U == 
                                               (7U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 0xeU))) 
                                              << 6U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
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
        bufp->chgWData(oldp+399,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7),128);
        bufp->chgBit(oldp+403,((0x33U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+404,((0x13U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+405,((3U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
        bufp->chgBit(oldp+406,((0x23U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+407,((0x63U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+408,((0x73U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+409,((0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 2U)))));
        bufp->chgBit(oldp+410,((0x37U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+411,((0x17U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+412,((0x6fU == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+413,((0x67U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgCData(oldp+414,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded),6);
        bufp->chgCData(oldp+415,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded),4);
        bufp->chgBit(oldp+416,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U])));
        bufp->chgBit(oldp+417,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U])));
        bufp->chgBit(oldp+418,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt));
        bufp->chgBit(oldp+419,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu));
        bufp->chgBit(oldp+420,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xor_));
        bufp->chgBit(oldp+421,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__or_));
        bufp->chgBit(oldp+422,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_));
        bufp->chgBit(oldp+423,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll));
        bufp->chgBit(oldp+424,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl));
        bufp->chgBit(oldp+425,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra));
        bufp->chgBit(oldp+426,((IData)((0x4cU == (0x1c1fcU 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+427,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti));
        bufp->chgBit(oldp+428,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu));
        bufp->chgBit(oldp+429,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xori));
        bufp->chgBit(oldp+430,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__ori));
        bufp->chgBit(oldp+431,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi));
        bufp->chgBit(oldp+432,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli));
        bufp->chgBit(oldp+433,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli));
        bufp->chgBit(oldp+434,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai));
        bufp->chgBit(oldp+435,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq));
        bufp->chgBit(oldp+436,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne));
        bufp->chgBit(oldp+437,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt));
        bufp->chgBit(oldp+438,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge));
        bufp->chgBit(oldp+439,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu));
        bufp->chgBit(oldp+440,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu));
        bufp->chgBit(oldp+441,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb));
        bufp->chgBit(oldp+442,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh));
        bufp->chgBit(oldp+443,((IData)((0x800cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+444,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu));
        bufp->chgBit(oldp+445,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu));
        bufp->chgBit(oldp+446,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb));
        bufp->chgBit(oldp+447,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh));
        bufp->chgBit(oldp+448,((IData)((0x808cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+449,((IData)(((0x400003cU 
                                         == (0x7fffffcU 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]))));
        bufp->chgBit(oldp+450,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul));
        bufp->chgBit(oldp+451,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh));
        bufp->chgBit(oldp+452,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu));
        bufp->chgBit(oldp+453,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu));
        bufp->chgBit(oldp+454,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div));
        bufp->chgBit(oldp+455,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu));
        bufp->chgBit(oldp+456,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem));
        bufp->chgBit(oldp+457,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu));
        bufp->chgIData(oldp+458,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                >> 1U)))) 
                                   << 0xcU) | (0xfffU 
                                               & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 0x16U))))),32);
        bufp->chgIData(oldp+459,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
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
        bufp->chgIData(oldp+460,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
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
        bufp->chgIData(oldp+461,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U))),32);
        bufp->chgIData(oldp+462,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
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
        bufp->chgIData(oldp+463,((0xfffff000U & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  << 0x1eU) 
                                                 | (0x3ffff000U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       >> 2U))))),32);
        bufp->chgIData(oldp+464,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate),32);
        bufp->chgCData(oldp+465,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel),3);
        bufp->chgBit(oldp+466,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel)) 
                                & ((0x13U == (0x7fU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                                   | ((3U == (0x7fU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                                      | (0x67U == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))))))));
        bufp->chgBit(oldp+467,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel));
        bufp->chgBit(oldp+468,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel));
        bufp->chgBit(oldp+469,(((0x63U == (0x7fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 2U))) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21))));
        bufp->chgBit(oldp+470,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                | (0x63U == (0x7fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))))));
        bufp->chgBit(oldp+471,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_22) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16))));
        bufp->chgCData(oldp+472,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_) 
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
                                              << 1U) 
                                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt) 
                                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti) 
                                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu) 
                                                      | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu) 
                                                         | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19))))))))),3);
        bufp->chgCData(oldp+473,((((0x67U == (0x7fU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                                   << 7U) | (((0x6fU 
                                               == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu) 
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
        bufp->chgBit(oldp+474,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                   | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu)))));
        bufp->chgBit(oldp+475,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
                                   | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu)))));
        bufp->chgBit(oldp+476,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh))));
        bufp->chgCData(oldp+477,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu)) 
                                   << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh)))),2);
        bufp->chgCData(oldp+478,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem)) 
                                   << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu)))),2);
        bufp->chgQData(oldp+479,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in),64);
        bufp->chgSData(oldp+481,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in),16);
        bufp->chgQData(oldp+482,((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)) 
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
        bufp->chgQData(oldp+484,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q),44);
        bufp->chgIData(oldp+486,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address),32);
        bufp->chgIData(oldp+487,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                          >> 0xcU))),32);
        bufp->chgIData(oldp+488,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                               >> 0x12U))),32);
        bufp->chgCData(oldp+489,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                           >> 0xdU))),5);
        bufp->chgBit(oldp+490,((IData)((0x1080U == 
                                        (0x1080U & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])))));
        bufp->chgBit(oldp+491,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+493,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+494,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+496,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                   >> 0xbU)))) 
                                      & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+497,(((~ (IData)((0U != (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                   >> 0xbU)))) 
                                & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                       >> 8U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_18)))));
        bufp->chgBit(oldp+498,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en));
        bufp->chgBit(oldp+499,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                  >> 0xbU)))))));
        bufp->chgIData(oldp+500,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata),32);
        bufp->chgCData(oldp+501,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask),4);
        bufp->chgBit(oldp+502,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
                                & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)) 
                                   & ((~ (IData)((0U 
                                                  != 
                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                   >> 0xbU)))) 
                                      & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                            >> 0xaU)))))));
        bufp->chgIData(oldp+503,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data),32);
        bufp->chgIData(oldp+504,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data),32);
        bufp->chgIData(oldp+505,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                            ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data))),32);
        bufp->chgCData(oldp+506,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel),2);
        bufp->chgIData(oldp+507,(((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                   ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data
                                                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data)
                                            : ((1U 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data
                                                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data)))),32);
        bufp->chgCData(oldp+508,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel),3);
        bufp->chgBit(oldp+509,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                    >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12))));
        bufp->chgBit(oldp+510,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12) 
                                & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                   >> 4U))));
        bufp->chgBit(oldp+511,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                    >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8))));
        bufp->chgBit(oldp+512,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8) 
                                & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                   >> 4U))));
        bufp->chgIData(oldp+513,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data),32);
        bufp->chgBit(oldp+514,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                              >> 2U)))));
        bufp->chgBit(oldp+515,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                              >> 6U)))));
        bufp->chgBit(oldp+516,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                              >> 5U)))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                              >> 3U)))));
        bufp->chgBit(oldp+518,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                              >> 4U)))));
        bufp->chgIData(oldp+519,(((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
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
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data)))),32);
        bufp->chgCData(oldp+520,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel),2);
        bufp->chgCData(oldp+521,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel),2);
        bufp->chgCData(oldp+522,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                            << 3U) 
                                           | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
                                              >> 0x1dU)))),6);
        bufp->chgSData(oldp+523,((0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)),10);
        bufp->chgCData(oldp+524,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel),3);
        bufp->chgCData(oldp+525,((0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+526,((0xffU & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                         >> 7U)))))),8);
        bufp->chgCData(oldp+527,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                   ? 0U : (0xffU & 
                                           ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                             ? (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                              >> 7U))))
                                             : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                >> 8U))))),8);
        bufp->chgSData(oldp+528,((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+529,((0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                           >> 7U)))))),16);
        bufp->chgSData(oldp+530,((0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                           >> 0xfU)))))),16);
        bufp->chgSData(oldp+531,((0xffffU & ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                              ? ((1U 
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
                                              : ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                  >> 0x10U))))),16);
        bufp->chgQData(oldp+532,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product),64);
        bufp->chgIData(oldp+534,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product)),32);
        bufp->chgIData(oldp+535,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+536,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient),32);
        bufp->chgIData(oldp+537,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder),32);
        bufp->chgBit(oldp+538,((1U & (~ (IData)((0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))))));
        bufp->chgBit(oldp+539,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+540,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+541,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                        >> 8U))),2);
        bufp->chgBit(oldp+542,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start));
        bufp->chgBit(oldp+543,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start));
        bufp->chgBit(oldp+544,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                         >> 8U)))));
        bufp->chgBit(oldp+545,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
        bufp->chgBit(oldp+546,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
        bufp->chgBit(oldp+547,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
        bufp->chgBit(oldp+548,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
        bufp->chgBit(oldp+549,((0U == vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B)));
        bufp->chgCData(oldp+550,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state),2);
        bufp->chgCData(oldp+551,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Next_state),2);
        bufp->chgBit(oldp+552,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
        bufp->chgBit(oldp+553,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
        bufp->chgBit(oldp+554,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
        bufp->chgBit(oldp+555,((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
        bufp->chgSData(oldp+556,(((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 1U)) 
                                  | ((0xcU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                              >> 8U)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))),9);
        bufp->chgSData(oldp+557,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q),9);
        bufp->chgSData(oldp+558,(((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                             >> 1U)) 
                                  | ((0xcU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                              >> 6U)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))),9);
        bufp->chgSData(oldp+559,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q),9);
        bufp->chgSData(oldp+560,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux),9);
        bufp->chgIData(oldp+561,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                   ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                       ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder
                                       : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient)
                                   : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                       ? (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product)
                                       : (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
                                                  >> 0x20U))))),32);
        bufp->chgCData(oldp+562,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel),2);
        bufp->chgBit(oldp+563,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed));
        bufp->chgBit(oldp+564,(((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                & (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))));
        bufp->chgCData(oldp+565,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+566,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+567,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep),2);
        bufp->chgCData(oldp+568,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__NextStep),2);
        bufp->chgBit(oldp+569,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
        bufp->chgBit(oldp+570,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))));
        bufp->chgCData(oldp+571,((0x3fU & ((IData)(0x21U) 
                                           + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))))),6);
        bufp->chgCData(oldp+572,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count),6);
        bufp->chgBit(oldp+573,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count))));
        bufp->chgBit(oldp+574,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand));
        bufp->chgBit(oldp+575,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B));
        bufp->chgIData(oldp+576,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A),32);
        bufp->chgIData(oldp+577,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B),32);
        bufp->chgIData(oldp+578,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs),32);
        bufp->chgIData(oldp+579,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs),32);
        bufp->chgBit(oldp+580,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q));
        bufp->chgIData(oldp+581,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_out),32);
        bufp->chgCData(oldp+582,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                   << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),5);
        bufp->chgBit(oldp+583,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_9) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero))))));
        bufp->chgQData(oldp+584,((0x1ffffffffULL & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result)),33);
        bufp->chgIData(oldp+586,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend),32);
        bufp->chgIData(oldp+587,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_d),32);
        bufp->chgIData(oldp+588,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q),32);
        bufp->chgIData(oldp+589,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder),32);
        bufp->chgIData(oldp+590,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q),32);
        bufp->chgIData(oldp+591,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_d),32);
        bufp->chgIData(oldp+592,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q),32);
        bufp->chgIData(oldp+593,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_quotient),32);
        bufp->chgIData(oldp+594,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_remainder),32);
        bufp->chgBit(oldp+595,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                                 ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+596,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                                >> 0x1fU)));
        bufp->chgBit(oldp+597,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B 
                                >> 0x1fU)));
        bufp->chgBit(oldp+598,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))));
        bufp->chgBit(oldp+599,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4))) 
                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                      | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8)))))));
        bufp->chgBit(oldp+600,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                    >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+601,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                    >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+602,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+603,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
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
        bufp->chgCData(oldp+604,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
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
        bufp->chgCData(oldp+605,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
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
        bufp->chgCData(oldp+606,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+607,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+608,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+609,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+610,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4))) 
                                   << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),2);
        bufp->chgCData(oldp+611,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_12) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_15))),2);
        bufp->chgCData(oldp+612,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)),4);
        bufp->chgCData(oldp+613,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs)),4);
        bufp->chgBit(oldp+614,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+615,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+616,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+617,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+618,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 4U))),4);
        bufp->chgCData(oldp+619,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 4U))),4);
        bufp->chgBit(oldp+620,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+621,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+622,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+623,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+624,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 8U))),4);
        bufp->chgCData(oldp+625,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 8U))),4);
        bufp->chgBit(oldp+626,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+627,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+628,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+629,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+630,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+631,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+632,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+633,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+634,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+635,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+636,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+637,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+638,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+639,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+640,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+641,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+642,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+643,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+644,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+645,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+646,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+647,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+648,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+649,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+650,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+651,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+652,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+653,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+654,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+655,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+656,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+657,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+658,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+659,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgCData(oldp+660,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero) 
                                   << 7U) | ((0x40U 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)) 
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
        bufp->chgCData(oldp+661,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0),2);
        bufp->chgCData(oldp+662,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1),2);
        bufp->chgCData(oldp+663,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2),2);
        bufp->chgCData(oldp+664,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3),2);
        bufp->chgCData(oldp+665,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4),2);
        bufp->chgCData(oldp+666,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5),2);
        bufp->chgCData(oldp+667,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6),2);
        bufp->chgCData(oldp+668,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7),2);
        bufp->chgCData(oldp+669,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y),3);
        bufp->chgBit(oldp+670,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero));
        bufp->chgBit(oldp+671,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 3U))));
        bufp->chgBit(oldp+672,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 2U))));
        bufp->chgBit(oldp+673,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 1U))));
        bufp->chgBit(oldp+674,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
        bufp->chgBit(oldp+675,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero));
        bufp->chgBit(oldp+676,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 7U))));
        bufp->chgBit(oldp+677,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 6U))));
        bufp->chgBit(oldp+678,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 5U))));
        bufp->chgBit(oldp+679,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 4U))));
        bufp->chgBit(oldp+680,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)))));
        bufp->chgBit(oldp+681,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xbU))));
        bufp->chgBit(oldp+682,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xaU))));
        bufp->chgBit(oldp+683,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 9U))));
        bufp->chgBit(oldp+684,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 8U))));
        bufp->chgBit(oldp+685,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero));
        bufp->chgBit(oldp+686,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xfU))));
        bufp->chgBit(oldp+687,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xeU))));
        bufp->chgBit(oldp+688,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xdU))));
        bufp->chgBit(oldp+689,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+690,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)))));
        bufp->chgBit(oldp+691,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x13U))));
        bufp->chgBit(oldp+692,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x12U))));
        bufp->chgBit(oldp+693,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x11U))));
        bufp->chgBit(oldp+694,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+695,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8)))));
        bufp->chgBit(oldp+696,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x17U))));
        bufp->chgBit(oldp+697,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x16U))));
        bufp->chgBit(oldp+698,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x15U))));
        bufp->chgBit(oldp+699,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x14U))));
        bufp->chgBit(oldp+700,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)))));
        bufp->chgBit(oldp+701,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+702,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+703,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x19U))));
        bufp->chgBit(oldp+704,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x18U))));
        bufp->chgBit(oldp+705,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero));
        bufp->chgBit(oldp+706,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                >> 0x1fU)));
        bufp->chgBit(oldp+707,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+708,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+709,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+710,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7))));
        bufp->chgBit(oldp+711,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6))));
        bufp->chgBit(oldp+712,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5))));
        bufp->chgBit(oldp+713,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4))));
        bufp->chgBit(oldp+714,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3))));
        bufp->chgBit(oldp+715,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2))));
        bufp->chgBit(oldp+716,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1))));
        bufp->chgBit(oldp+717,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0))));
        bufp->chgBit(oldp+718,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux));
        bufp->chgBit(oldp+719,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7) 
                                      >> 1U))));
        bufp->chgBit(oldp+720,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6) 
                                      >> 1U))));
        bufp->chgBit(oldp+721,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5) 
                                      >> 1U))));
        bufp->chgBit(oldp+722,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4) 
                                      >> 1U))));
        bufp->chgBit(oldp+723,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3) 
                                      >> 1U))));
        bufp->chgBit(oldp+724,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2) 
                                      >> 1U))));
        bufp->chgBit(oldp+725,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1) 
                                      >> 1U))));
        bufp->chgBit(oldp+726,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0) 
                                      >> 1U))));
        bufp->chgBit(oldp+727,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux));
        bufp->chgIData(oldp+728,(VL_SHIFTL_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q, 1U)),32);
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+730,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result)),32);
        bufp->chgBit(oldp+731,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Quotient_sign_assignment__sel));
        bufp->chgIData(oldp+732,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q)),32);
        bufp->chgIData(oldp+733,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                   << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),32);
        bufp->chgIData(oldp+734,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in),32);
        bufp->chgIData(oldp+735,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in, 1U)),32);
        bufp->chgIData(oldp+736,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1, 2U)),32);
        bufp->chgIData(oldp+737,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2, 4U)),32);
        bufp->chgIData(oldp+738,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4, 8U)),32);
        bufp->chgIData(oldp+739,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8, 0x10U)),32);
        bufp->chgIData(oldp+740,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1),32);
        bufp->chgIData(oldp+741,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2),32);
        bufp->chgIData(oldp+742,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4),32);
        bufp->chgIData(oldp+743,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8),32);
        bufp->chgIData(oldp+744,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16),32);
        bufp->chgBit(oldp+745,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel));
        bufp->chgBit(oldp+746,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel));
        bufp->chgBit(oldp+747,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel));
        bufp->chgCData(oldp+748,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                   << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))),6);
        bufp->chgBit(oldp+749,((1U & (((IData)(0x21U) 
                                       + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))) 
                                      >> 6U))));
        bufp->chgCData(oldp+750,((0x7fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))))),7);
        bufp->chgCData(oldp+751,((0x7fU & ((IData)(0x21U) 
                                           + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux))))))),7);
        bufp->chgBit(oldp+752,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Remainder_sign_assignment__sel));
        bufp->chgIData(oldp+753,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q)),32);
        bufp->chgIData(oldp+754,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A)),32);
        bufp->chgBit(oldp+755,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Select_Absolute_B__sel));
        bufp->chgIData(oldp+756,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B)),32);
        bufp->chgQData(oldp+757,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend))),33);
        bufp->chgQData(oldp+759,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs))),33);
        bufp->chgBit(oldp+761,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                              >> 0x21U)))));
        bufp->chgQData(oldp+762,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend))),34);
        bufp->chgQData(oldp+764,((0x3ffffffffULL & 
                                  (~ (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs))))),34);
        bufp->chgQData(oldp+766,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result),34);
        bufp->chgIData(oldp+768,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q 
                                   << 1U) | (1U & (~ (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                                              >> 0x20U)))))),32);
        bufp->chgBit(oldp+769,((((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
                                | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))));
        bufp->chgIData(oldp+770,(((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder 
                                   << 1U) | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
                                             >> 0x1fU))),32);
        bufp->chgBit(oldp+771,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))));
        bufp->chgCData(oldp+772,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state),2);
        bufp->chgCData(oldp+773,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Next_state),2);
        bufp->chgBit(oldp+774,((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
        bufp->chgBit(oldp+775,((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
        bufp->chgIData(oldp+776,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplicand),32);
        bufp->chgIData(oldp+777,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier),32);
        bufp->chgIData(oldp+778,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q)),32);
        bufp->chgIData(oldp+779,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q)),32);
        bufp->chgIData(oldp+780,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs),32);
        bufp->chgIData(oldp+781,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs),32);
        bufp->chgCData(oldp+782,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count),5);
        bufp->chgCData(oldp+783,((0x1fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))),5);
        bufp->chgBit(oldp+784,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count))));
        bufp->chgBit(oldp+785,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q))));
        bufp->chgBit(oldp+786,((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q))));
        bufp->chgBit(oldp+787,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_is_zero));
        bufp->chgBit(oldp+788,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+790,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A));
        bufp->chgBit(oldp+791,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B));
        bufp->chgBit(oldp+792,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff));
        bufp->chgBit(oldp+793,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11) 
                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14)))));
        bufp->chgBit(oldp+794,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier_sel_b));
        bufp->chgCData(oldp+795,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                   << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))),5);
        bufp->chgQData(oldp+796,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q),64);
        bufp->chgIData(oldp+798,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_d),32);
        bufp->chgIData(oldp+799,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q),32);
        bufp->chgIData(oldp+800,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B),32);
        bufp->chgIData(oldp+801,(((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                           >> 0x20U)) 
                                  + vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B)),32);
        bufp->chgBit(oldp+802,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                   >> 0x20U))) 
                                                  + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))) 
                                                 >> 0x20U))))));
        bufp->chgQData(oldp+803,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16),64);
        bufp->chgQData(oldp+805,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__final_result),64);
        bufp->chgBit(oldp+807,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q)));
        bufp->chgIData(oldp+808,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                          >> 0x20U))),32);
        bufp->chgQData(oldp+809,((QData)((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                  >> 0x20U)))),33);
        bufp->chgQData(oldp+811,((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))),33);
        bufp->chgQData(oldp+813,((0x1ffffffffULL & 
                                  ((QData)((IData)(
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                    >> 0x20U))) 
                                   + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))))),33);
        bufp->chgBit(oldp+815,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))));
        bufp->chgBit(oldp+816,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5))) 
                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                      | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9)))))));
        bufp->chgBit(oldp+817,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                    >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+818,(((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                    >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+819,((1U & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                                         >> 0x1fU)))));
        bufp->chgCData(oldp+820,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
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
        bufp->chgCData(oldp+821,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
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
        bufp->chgCData(oldp+822,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
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
        bufp->chgCData(oldp+823,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+824,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+825,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+826,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+827,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14))),2);
        bufp->chgCData(oldp+828,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5))) 
                                   << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
                                             | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9))))),2);
        bufp->chgCData(oldp+829,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs)),4);
        bufp->chgCData(oldp+830,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs)),4);
        bufp->chgBit(oldp+831,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+832,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+833,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+834,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+835,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 4U))),4);
        bufp->chgCData(oldp+836,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 4U))),4);
        bufp->chgBit(oldp+837,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+838,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+839,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+840,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+841,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 8U))),4);
        bufp->chgCData(oldp+842,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 8U))),4);
        bufp->chgBit(oldp+843,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+844,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+845,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+846,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+847,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+848,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+849,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+850,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+851,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+852,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+853,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+854,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+855,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+856,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+857,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+858,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+859,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+860,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+861,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+862,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+863,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+864,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+865,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+866,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+867,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+868,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+869,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+870,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+871,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+872,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+873,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+874,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+875,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+876,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgBit(oldp+877,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                & (((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)) 
                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero)) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero))))));
        bufp->chgCData(oldp+878,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero) 
                                   << 7U) | ((0x40U 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0)) 
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
        bufp->chgCData(oldp+879,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0),2);
        bufp->chgCData(oldp+880,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1),2);
        bufp->chgCData(oldp+881,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2),2);
        bufp->chgCData(oldp+882,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3),2);
        bufp->chgCData(oldp+883,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4),2);
        bufp->chgCData(oldp+884,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5),2);
        bufp->chgCData(oldp+885,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6),2);
        bufp->chgCData(oldp+886,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7),2);
        bufp->chgCData(oldp+887,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y),3);
        bufp->chgCData(oldp+888,((0xfU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)),4);
        bufp->chgBit(oldp+889,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero));
        bufp->chgBit(oldp+890,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 3U))));
        bufp->chgBit(oldp+891,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 2U))));
        bufp->chgBit(oldp+892,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 1U))));
        bufp->chgBit(oldp+893,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
        bufp->chgCData(oldp+894,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 4U))),4);
        bufp->chgBit(oldp+895,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero));
        bufp->chgBit(oldp+896,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 7U))));
        bufp->chgBit(oldp+897,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 6U))));
        bufp->chgBit(oldp+898,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 5U))));
        bufp->chgBit(oldp+899,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 4U))));
        bufp->chgCData(oldp+900,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 8U))),4);
        bufp->chgBit(oldp+901,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)))));
        bufp->chgBit(oldp+902,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xbU))));
        bufp->chgBit(oldp+903,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xaU))));
        bufp->chgBit(oldp+904,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 9U))));
        bufp->chgBit(oldp+905,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 8U))));
        bufp->chgCData(oldp+906,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+907,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero));
        bufp->chgBit(oldp+908,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xfU))));
        bufp->chgBit(oldp+909,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xeU))));
        bufp->chgBit(oldp+910,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xdU))));
        bufp->chgBit(oldp+911,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0xcU))));
        bufp->chgCData(oldp+912,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+913,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)))));
        bufp->chgBit(oldp+914,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x13U))));
        bufp->chgBit(oldp+915,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x12U))));
        bufp->chgBit(oldp+916,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x11U))));
        bufp->chgBit(oldp+917,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x10U))));
        bufp->chgCData(oldp+918,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+919,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1)))));
        bufp->chgBit(oldp+920,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x17U))));
        bufp->chgBit(oldp+921,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x16U))));
        bufp->chgBit(oldp+922,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x15U))));
        bufp->chgBit(oldp+923,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x14U))));
        bufp->chgCData(oldp+924,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+925,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0)))));
        bufp->chgBit(oldp+926,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+927,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+928,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x19U))));
        bufp->chgBit(oldp+929,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x18U))));
        bufp->chgCData(oldp+930,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+931,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero));
        bufp->chgBit(oldp+932,((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                >> 0x1fU)));
        bufp->chgBit(oldp+933,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+934,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+935,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+936,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7))));
        bufp->chgBit(oldp+937,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6))));
        bufp->chgBit(oldp+938,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5))));
        bufp->chgBit(oldp+939,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4))));
        bufp->chgBit(oldp+940,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3))));
        bufp->chgBit(oldp+941,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2))));
        bufp->chgBit(oldp+942,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1))));
        bufp->chgBit(oldp+943,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0))));
        bufp->chgBit(oldp+944,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux));
        bufp->chgBit(oldp+945,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7) 
                                      >> 1U))));
        bufp->chgBit(oldp+946,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6) 
                                      >> 1U))));
        bufp->chgBit(oldp+947,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5) 
                                      >> 1U))));
        bufp->chgBit(oldp+948,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4) 
                                      >> 1U))));
        bufp->chgBit(oldp+949,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3) 
                                      >> 1U))));
        bufp->chgBit(oldp+950,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2) 
                                      >> 1U))));
        bufp->chgBit(oldp+951,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1) 
                                      >> 1U))));
        bufp->chgBit(oldp+952,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0) 
                                      >> 1U))));
        bufp->chgBit(oldp+953,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux));
        bufp->chgQData(oldp+954,((- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16)),64);
        bufp->chgQData(oldp+956,((QData)((IData)((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))),64);
        bufp->chgQData(oldp+958,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_in),64);
        bufp->chgQData(oldp+960,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_out),64);
        bufp->chgQData(oldp+962,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q, 1U)),64);
        bufp->chgQData(oldp+964,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1, 2U)),64);
        bufp->chgQData(oldp+966,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2, 4U)),64);
        bufp->chgQData(oldp+968,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4, 8U)),64);
        bufp->chgQData(oldp+970,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8, 0x10U)),64);
        bufp->chgQData(oldp+972,(VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16, 0x20U)),64);
        bufp->chgQData(oldp+974,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1),64);
        bufp->chgQData(oldp+976,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2),64);
        bufp->chgQData(oldp+978,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4),64);
        bufp->chgQData(oldp+980,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8),64);
        bufp->chgBit(oldp+982,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel));
        bufp->chgBit(oldp+983,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel));
        bufp->chgBit(oldp+984,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel));
        bufp->chgQData(oldp+985,(((((QData)((IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                     >> 0x20U))) 
                                    + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))) 
                                   << 0x1fU) | (QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                           >> 1U))))))),64);
        bufp->chgBit(oldp+987,((1U & (((IData)(0x20U) 
                                       + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))) 
                                      >> 5U))));
        bufp->chgCData(oldp+988,((0x3fU & (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux))))))),6);
        bufp->chgCData(oldp+989,((0x3fU & ((IData)(0x20U) 
                                           + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux)))))))),6);
        bufp->chgIData(oldp+990,((- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q))),32);
        bufp->chgIData(oldp+991,((- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q))),32);
        bufp->chgBit(oldp+992,(((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                                | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))));
        bufp->chgQData(oldp+993,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0xc00U 
                                                                  == 
                                                                  (0xc00U 
                                                                   & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))),33);
        bufp->chgQData(oldp+995,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q),33);
        bufp->chgQData(oldp+997,((((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                        >> 0xbU))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))),33);
        bufp->chgQData(oldp+999,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q),33);
        bufp->chgBit(oldp+1001,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel));
        bufp->chgIData(oldp+1002,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q, 1U)),32);
        bufp->chgCData(oldp+1003,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1004,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                            >> 0xaU))),5);
        bufp->chgWData(oldp+1005,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R),1024);
        bufp->chgIData(oldp+1037,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U]),32);
        bufp->chgIData(oldp+1038,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U]),32);
        bufp->chgIData(oldp+1039,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U]),32);
        bufp->chgIData(oldp+1040,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U]),32);
        bufp->chgIData(oldp+1041,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U]),32);
        bufp->chgIData(oldp+1042,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U]),32);
        bufp->chgIData(oldp+1043,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U]),32);
        bufp->chgIData(oldp+1044,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U]),32);
        bufp->chgIData(oldp+1045,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U]),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU]),32);
        bufp->chgIData(oldp+1047,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U]),32);
        bufp->chgIData(oldp+1048,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU]),32);
        bufp->chgIData(oldp+1049,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U]),32);
        bufp->chgIData(oldp+1050,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU]),32);
        bufp->chgIData(oldp+1051,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U]),32);
        bufp->chgIData(oldp+1052,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU]),32);
        bufp->chgIData(oldp+1053,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U]),32);
        bufp->chgIData(oldp+1054,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU]),32);
        bufp->chgIData(oldp+1055,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U]),32);
        bufp->chgIData(oldp+1056,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU]),32);
        bufp->chgIData(oldp+1057,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U]),32);
        bufp->chgIData(oldp+1058,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU]),32);
        bufp->chgIData(oldp+1059,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U]),32);
        bufp->chgIData(oldp+1060,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU]),32);
        bufp->chgIData(oldp+1061,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U]),32);
        bufp->chgIData(oldp+1062,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU]),32);
        bufp->chgIData(oldp+1063,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U]),32);
        bufp->chgIData(oldp+1064,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU]),32);
        bufp->chgIData(oldp+1065,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U]),32);
        bufp->chgIData(oldp+1066,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU]),32);
        bufp->chgIData(oldp+1067,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U]),32);
        bufp->chgIData(oldp+1068,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU]),32);
    }
    bufp->chgBit(oldp+1069,(vlSelfRef.processor_tb__DOT__clk_i));
    bufp->chgBit(oldp+1070,(vlSelfRef.processor_tb__DOT__rst));
    bufp->chgIData(oldp+1071,(vlSelfRef.processor_tb__DOT__sw_tb),32);
    bufp->chgIData(oldp+1072,(vlSelfRef.processor_tb__DOT__input_port_tb),32);
    bufp->chgBit(oldp+1073,(vlSelfRef.processor_tb__DOT__dut__DOT__ID_flush));
    bufp->chgBit(oldp+1074,(((IData)(vlSelfRef.processor_tb__DOT__rst) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))));
    bufp->chgBit(oldp+1075,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul));
    bufp->chgBit(oldp+1076,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div));
    bufp->chgBit(oldp+1077,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul) 
                             | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start)) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed)))));
    bufp->chgBit(oldp+1078,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div) 
                             | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start)) 
                                & (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))));
    bufp->chgBit(oldp+1079,(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__rst));
    bufp->chgBit(oldp+1080,((((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
                              & (1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0))));
    bufp->chgBit(oldp+1081,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel) 
                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul))));
}

void Vprocessor_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_cleanup\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
