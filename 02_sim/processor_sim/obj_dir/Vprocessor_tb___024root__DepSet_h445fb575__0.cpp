// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb___024root.h"

VL_ATTR_COLD void Vprocessor_tb___024root___eval_initial__TOP(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_initial(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprocessor_tb___024root___eval_initial__TOP(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0 
        = vlSelfRef.processor_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         49);
    vlSelfRef.processor_tb__DOT__clk_i = 1U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "../../01_tb/processor_tb.sv", 
                                             50);
        vlSelfRef.processor_tb__DOT__clk_i = (1U & 
                                              (~ (IData)(vlSelfRef.processor_tb__DOT__clk_i)));
    }
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         54);
    vlSelfRef.processor_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x9c40ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         55);
    vlSelfRef.processor_tb__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         81);
    vlSelfRef.processor_tb__DOT__sw_tb = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         82);
    vlSelfRef.processor_tb__DOT__sw_tb = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         83);
    vlSelfRef.processor_tb__DOT__sw_tb = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         84);
    vlSelfRef.processor_tb__DOT__sw_tb = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         85);
    vlSelfRef.processor_tb__DOT__sw_tb = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         86);
    vlSelfRef.processor_tb__DOT__sw_tb = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         87);
    vlSelfRef.processor_tb__DOT__sw_tb = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         88);
    vlSelfRef.processor_tb__DOT__sw_tb = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         89);
    vlSelfRef.processor_tb__DOT__sw_tb = 0x19U;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         94);
    vlSelfRef.processor_tb__DOT__input_port_tb = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         95);
    vlSelfRef.processor_tb__DOT__input_port_tb = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         96);
    vlSelfRef.processor_tb__DOT__input_port_tb = 5U;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x12a05f200ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         101);
    VL_FINISH_MT("../../01_tb/processor_tb.sv", 102, "");
}

void Vprocessor_tb___024root___act_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vprocessor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vprocessor_tb___024root___act_sequent__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.processor_tb__DOT__dut__DOT__ID_flush 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss) 
              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL)) 
               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                             >> 9U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0)))) 
           | (IData)(vlSelfRef.processor_tb__DOT__rst));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV)) 
               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                             >> 9U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0)))) 
           | (IData)(vlSelfRef.processor_tb__DOT__rst));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__rst 
        = ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0));
}

void Vprocessor_tb___024root___nba_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___nba_comb__TOP__0(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_nba(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<32>/*1023:0*/ Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vprocessor_tb__ConstPool__TABLE_h332b0a32_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vprocessor_tb__ConstPool__TABLE_h64db6e76_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vprocessor_tb__ConstPool__TABLE_h63966fb0_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vprocessor_tb__ConstPool__TABLE_h3be6425e_0;

VL_INLINE_OPT void Vprocessor_tb___024root___nba_sequent__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____VdfgRegularize_h83e762c5_0_0;
    processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____VdfgRegularize_h83e762c5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_9;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_9 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_25;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_25 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_0;
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_1;
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_1 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_MEM_stage__DOT____VdfgRegularize_h05e61976_0_0;
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_MEM_stage__DOT____VdfgRegularize_h05e61976_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_3;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_3 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_10;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_10 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_13;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_13 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2;
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2;
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*10:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    IData/*31:0*/ __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q = 0;
    CData/*0:0*/ __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q = 0;
    VlWide<32>/*1023:0*/ __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R;
    VL_ZERO_W(1024, __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R);
    VlWide<7>/*217:0*/ __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q;
    VL_ZERO_W(218, __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q);
    QData/*38:0*/ __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q = 0;
    VlWide<5>/*145:0*/ __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q;
    VL_ZERO_W(146, __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q);
    IData/*31:0*/ __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q;
    __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q = 0;
    CData/*7:0*/ __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1;
    __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1;
    __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2;
    __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2;
    __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3;
    __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3;
    __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<6>/*191:0*/ __Vtemp_49;
    // Body
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU];
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0U;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 = 0U;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 = 0U;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 = 0U;
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U];
    __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U];
    __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
        = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__rst)) 
           & ((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en))) 
              && (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q)));
    if (((IData)(vlSelfRef.processor_tb__DOT__rst) 
         | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))) {
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] = 0U;
    } else if (vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) {
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                          >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))) 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp_2[2U] = ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))) 
                                  >> 0x20U)) >> 0x1eU);
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            = (1U | (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                      << 2U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q) 
                                << 1U)));
    } else {
        __Vtemp_2[1U] = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U];
        __Vtemp_2[2U] = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U];
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U];
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
        = __Vtemp_2[2U];
    if (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
         & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)) 
            & ((~ (IData)((0U != (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                  >> 0xbU)))) & (~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                  >> 0xaU)))))) {
        if ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask))) {
            __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 
                = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                            >> 0x12U));
            __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 
                = (0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address);
            __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask))) {
            __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 
                = (0xffU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                             << 6U) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                       >> 0x1aU)));
            __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 
                = (0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address);
            __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask))) {
            __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 
                = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                            >> 2U));
            __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 
                = (0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address);
            __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask))) {
            __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 
                = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                            >> 0xaU));
            __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 
                = (0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address);
            __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ID_flush) {
        vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data = 0ULL;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] = 0U;
    } else if (vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed) {
        vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
            = vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U];
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
            = (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded)));
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[0U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[1U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[2U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[3U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[4U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U];
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U];
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul) 
            | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start)) 
               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed)))
            ? 0U : ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start)
                     ? ((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                   >> 1U)) | ((0xcU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 8U)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))
                     : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__rst) {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend = 0U;
    } else if ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__D;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend 
            = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder 
                << 1U) | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
                          >> 0x1fU));
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q 
        = ((((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
             & (1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) 
            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0))
            ? 0U : ((((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B)) 
                     | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))
                     ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_d
                     : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel) 
            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul))
            ? 0ULL : ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))
                       ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__Partial_product_reg__D
                       : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul) {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state = 0U;
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q 
            = (((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_d
                : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q);
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count 
            = (0x1fU & ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))
                         ? (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) 
                                           << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux))))
                         : ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))
                             ? ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count))));
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product 
            = ((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__final_result
                : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_product);
        if ((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q 
                = (((QData)((IData)((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                              >> 0xbU))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)));
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q 
                = (((QData)((IData)((1U & (~ (IData)(
                                                     (0xc00U 
                                                      == 
                                                      (0xc00U 
                                                       & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)));
        } else {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q;
        }
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Next_state;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div)) 
                 & ((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))
                     ? (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                           >> 8U)) : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div) {
        __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep = 0U;
    } else {
        __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
            = (((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                | (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_d
                : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q);
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count 
            = (0x3fU & ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))
                         ? ((IData)(0x21U) + (~ (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux)))))
                         : ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))
                             ? ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count))));
        if ((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B 
                = vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                = vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded;
        } else {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A;
        }
        if ((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_quotient;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_remainder;
        } else {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder;
        }
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__NextStep;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div) 
            | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start)) 
               & (2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))
            ? 0U : ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start)
                     ? ((0x1f0U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                   >> 1U)) | ((0xcU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 6U)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_11)))
                     : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q)));
    if (vlSelfRef.processor_tb__DOT__rst) {
        vlSelfRef.processor_tb__DOT__clk_counter = 0U;
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q = 0U;
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] = 0U;
        __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state = 0U;
    } else {
        vlSelfRef.processor_tb__DOT__clk_counter = 
            ((IData)(1U) + vlSelfRef.processor_tb__DOT__clk_counter);
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
            = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d
                : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q);
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                    >> 2U))), 5U)), __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R, 
                        (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren) 
                          & (0U != (0x1fU & (IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                     >> 2U)))))
                          ? (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                     >> 7U)) : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                               >> 2U))), 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                                >> 2U))), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,32,32, 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                                >> 2U))), 5U))))) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                                >> 2U))), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,32,32, 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                                                >> 2U))), 5U))))));
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data 
            = (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                    >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12))
                ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                    << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                >> 0x12U)) : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data 
            = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12) 
                & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                   >> 4U)) ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                               << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                           >> 0x12U))
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data 
            = (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                    >> 4U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8))
                ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                    << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                >> 0x12U)) : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data 
            = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8) 
                & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                   >> 4U)) ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                               << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                           >> 0x12U))
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data);
        if (vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed) {
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
            vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q;
            vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q;
        } else {
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                = ((vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                    << 0x12U) | ((0x3e000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                              << 8U)) 
                                 | ((0x1f00U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                >> 6U)) 
                                    | (0xffU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))));
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                = (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                   >> 0xeU);
            __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                = (((QData)((IData)(((0x4000000U & 
                                      vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                      ? ((0x2000000U 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                          ? ((0x1000000U 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                              ? 0U : 
                                             ((IData)(4U) 
                                              + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                    >> 0x10U))))
                                          : ((0x1000000U 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                              ? (((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     >> 0x10U)) 
                                                 | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 0x10U)))
                                              : (((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     >> 0x10U)) 
                                                 & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 0x10U)))))
                                      : ((0x2000000U 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                          ? ((0x1000000U 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])
                                              ? (((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x10U)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                  ? 0U
                                                  : 
                                                 ((1U 
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
                                              : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result)))))) 
                    << 7U) | (QData)((IData)(((0x7eU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                    >> 8U))))));
            vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q 
                = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
            vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                = (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)) 
                    << 0xcU) | (QData)((IData)(((0xf80U 
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
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en)))))))));
        }
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data 
            = vlSelfRef.processor_tb__DOT__sw_tb;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data 
            = vlSelfRef.processor_tb__DOT__input_port_tb;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Next_state;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__rst)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata 
        = vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
        [(0x3ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)];
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
        = __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
        = __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q 
        = __Vdly__processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q;
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U];
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
        = __Vdly__processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U];
    if (__VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
                [__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0]) 
               | (IData)(__VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0));
    }
    if (__VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
                [__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
                [__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
                [__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffffff00U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
           [(0x7ffU & ((IData)(3U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))]);
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffff00ffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7ffU & ((IData)(2U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))] 
              << 8U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xff00ffffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7ffU & ((IData)(1U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))] 
              << 0x10U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffffffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)] 
              << 0x18U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in 
        = (((0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) << 7U) | ((
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 2U))) 
                                                   << 6U) 
                                                  | (((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 2U))) 
                                                      << 5U) 
                                                     | (((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                              >> 2U))) 
                                                         << 4U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                 >> 2U))) 
                                                            << 3U) 
                                                           | (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                    >> 2U))) 
                                                               << 2U) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                      >> 2U))) 
                                                                 << 1U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21 
        = ((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x67U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11 
        = (IData)((0xccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16 
        = ((0x23U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x63U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq 
        = (IData)((0x18cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne 
        = (IData)((0x418cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt 
        = (IData)((0x1018cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge 
        = (IData)((0x1418cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu 
        = (IData)((0x1818cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu 
        = (IData)((0x1c18cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb 
        = (IData)((0xcU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh 
        = (IData)((0x400cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu 
        = (IData)((0x1000cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu 
        = (IData)((0x1400cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb 
        = (IData)((0x8cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh 
        = (IData)((0x408cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti 
        = (IData)((0x804cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu 
        = (IData)((0xc04cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi 
        = (IData)((0x1c04cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xori 
        = (IData)((0x1004cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__ori 
        = (IData)((0x1804cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17 
        = ((0x17U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x6fU == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12 
        = (IData)((0x140ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_9 
        = (IData)((0x1404cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2 
        = ((0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | ((0x23U == 
                                            (0x7fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))) 
                                           | (0x33U 
                                              == (0x7fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 2U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel 
        = ((0x37U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x17U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U] 
        = ((0xfffffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]) 
           | (((1U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                 << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x1bU)))) 
               << 1U) | (0U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                          << 5U) | 
                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                          >> 0x1bU))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U] 
        = ((0xfffffffeU & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U]) 
           | (0x20U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                  << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 0x1bU)))));
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_MEM_stage__DOT____VdfgRegularize_h05e61976_0_0 
        = ((0U != (0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                    >> 2U)))) & ((IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                          >> 1U)) 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_in 
        = (((QData)((IData)((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q)))) 
            << 0x3fU) | (((QData)((IData)((1U & (IData)(
                                                        (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                         >> 1U))))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                    >> 2U))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                     >> 3U))))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                        >> 4U))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                           >> 5U))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                              >> 6U))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 7U))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 8U))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 9U))))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xaU))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xbU))))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xcU))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xdU))))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xeU))))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0xfU))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x10U))))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x11U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x12U))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x13U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x14U))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x15U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x16U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x17U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x18U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x19U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1aU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1bU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1dU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1eU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x1fU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x21U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x22U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x23U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x24U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x25U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x26U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Quotient_sign_assignment__sel 
        = (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
             ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B) 
            >> 0x1fU) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Select_Absolute_B__sel 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B 
            >> 0x1fU) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Remainder_sign_assignment__sel 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A 
            >> 0x1fU) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_en_q));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B 
        = (IData)((0x180000000ULL == (0x180000000ULL 
                                      & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_is_zero 
        = ((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q)) 
           | (0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A 
        = (IData)((0x180000000ULL == (0x180000000ULL 
                                      & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_11 = ((2U 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                       >> 7U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel 
        = ((2U & ((~ (IData)((0U != (0x14U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 4U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel 
        = ((2U & ((~ (IData)((0U != (0xaU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                   >> 3U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start 
        = (IData)((0x2080U == (0x2080U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])));
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_1 
        = (1U & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                  >> 2U) & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                            >> 7U)));
    processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_0 
        = (1U & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                  >> 1U) & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                            >> 7U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start 
        = (IData)((0x1080U == (0x1080U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])));
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_3 
        = (IData)((0U == (0x600U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en 
        = (IData)((0x880U == (0x880U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel 
        = (((IData)((2ULL != (0xe0002ULL & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q))) 
            << 1U) | (IData)((0x10002ULL == (0x10002ULL 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel 
        = ((4U & ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q) 
                    & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                               >> 0x13U))) | (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                                      >> 0x12U))) 
                  << 2U)) | (((IData)((0x20001ULL == 
                                       (0x20001ULL 
                                        & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q))) 
                              << 1U) | (IData)((0x10001ULL 
                                                == 
                                                (0x10001ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel 
        = (7U & ((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                          >> 0x14U)) | (- (IData)((1U 
                                                   & (~ (IData)(
                                                                (0x44ULL 
                                                                 == 
                                                                 (0x44ULL 
                                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q)))))))));
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_10 
        = (IData)((0x20ULL == (0x28ULL & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q 
        = (1U & (~ (IData)(vlSelfRef.processor_tb__DOT__rst)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                         ? 1U : ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                  ? 2U : ((8U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                           ? 3U : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                      ? 6U
                                                      : 7U)))))))
            : ((IData)((0U != (0xff00U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))))
                ? ((0x100U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                    ? 8U : ((0x200U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                             ? 9U : ((0x400U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                      ? 0xaU : ((0x800U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : 0U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_22 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
           | ((0x67U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                  >> 2U))) | ((0x37U 
                                               == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))) 
                                              | ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 2U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0 
        = ((0U != (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                            >> 0x16U))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel) 
                    | ((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 2U))) 
                       | ((0x73U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                              >> 2U))) 
                          | (0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 2U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24 
        = (IData)(((0x1ccU == (0x3ffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt 
        = (IData)(((0x80ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu 
        = (IData)(((0xc0ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_ 
        = (IData)(((0x1c0ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
           & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]);
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
           & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U]);
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xor_ 
        = (IData)(((0x100ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__or_ 
        = (IData)(((0x180ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_9) 
           & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]);
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_9) 
           & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U]);
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_25 
        = (IData)(((0x4000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14 
        = (IData)(((0xccU == (0x1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U] 
                      >> 1U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched 
        = (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                              >> 2U))) == (0x1fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                            >> 0xfU))) 
           & (IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_MEM_stage__DOT____VdfgRegularize_h05e61976_0_0));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched 
        = (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                              >> 2U))) == (0x1fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                            >> 0xaU))) 
           & (IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_MEM_stage__DOT____VdfgRegularize_h05e61976_0_0));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Quotient_sign_assignment__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Quotient_sign_assignment__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_quotient 
                = (- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_quotient 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Select_Absolute_B__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Select_Absolute_B__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                = (- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Remainder_sign_assignment__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Remainder_sign_assignment__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_remainder 
                = (- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q);
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                = (- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__signed_remainder 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_q;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                = (- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
            = (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_B__Q);
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A) 
           ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_B));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                = (- (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
            = (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellout__fetch_A__Q);
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start) 
           & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
              >> 7U));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start) 
           & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
              >> 7U));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__bytemask 
        = (1U | (((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_3) 
                  << 3U) | (((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_3) 
                             << 2U) | (2U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                 >> 0xaU)) 
                                             << 1U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
        = ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
            ? ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
                         ? ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                             ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                      ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                          ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data
                                          : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data)
                                      : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                          ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data
                                          : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data)))
                         : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                             ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                      ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data
                                      : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data))))
            : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata);
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel 
        = (((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_10) 
            << 1U) | (IData)((0x28ULL == (0x28ULL & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel 
        = (((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                      >> 3U) & (0ULL != (0x30ULL & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q)))) 
            << 1U) | (1U & ((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_10) 
                            | (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                       >> 4U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_22) 
           | (0x33U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                 >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
           & (0U != (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                              >> 0x11U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xor_) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xori));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__or_) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__ori));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll 
        = (IData)(((0xccU == (0x1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_25)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli 
        = (IData)(((0x4cU == (0x1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_25)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x10000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x4000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x8000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0xc000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x14000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x18000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_14) 
           & (0x1c000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
        = (0x3ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend)) 
                                     + (~ (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xcU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                      ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 0x10U)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 8U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 4U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 0x18U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 0x14U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 0xcU)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc00U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                      >> 0x1cU)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc00000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                      ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 0x10U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 8U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 4U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 0x18U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 0x14U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 0xcU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                       ^ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                      >> 0x1cU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel 
        = ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_is_zero));
    __Vtableidx2 = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_start) 
                     << 6U) | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_is_zero)
                                  ? 3U : 2U) << 4U) 
                               | ((((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__count))
                                     ? 3U : 2U) << 2U) 
                                  | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Next_state 
        = Vprocessor_tb__ConstPool__TABLE_h332b0a32_0
        [__Vtableidx2];
    __Vtableidx1 = ((((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                      & (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state))) 
                     << 4U) | (((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                << 3U) | (((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                                           << 2U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Next_state 
        = Vprocessor_tb__ConstPool__TABLE_h64db6e76_0
        [__Vtableidx1];
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed 
        = ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
           | (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)));
    if ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))) {
        if ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed 
        = ((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
           | ((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
              | (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0 
        = ((0U != (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                            >> 9U))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2 
        = ((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                       >> 0x11U)) == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                               >> 5U))) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0)) 
           | (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                         >> 0x16U)) == (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                 >> 5U))) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu) 
                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
        = (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu)) 
            << 0x30U) | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem)) 
                          << 0x2fU) | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu)) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div)) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu)) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu)) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh)) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul)) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        ((0x400003cU 
                                                                          == 
                                                                          (0x7fffffcU 
                                                                           & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                         & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                                                                            & (0x400000U 
                                                                               == 
                                                                               (0x7c00000U 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))))) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_24) 
                                                                               & (0U 
                                                                                == 
                                                                                (0x7c00000U 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))))) 
                                                              << 0x26U) 
                                                             | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra)) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl)) 
                                                                    << 0x24U) 
                                                                   | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll)) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_)) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__or_)) 
                                                                             << 0x21U) 
                                                                            | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xor_)) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[1U]) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__funct7[0U]) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__ori) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__xori) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0x4cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0x808cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0x800cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq) 
                                                                                << 5U) 
                                                                                | (((0x67U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 4U) 
                                                                                | (((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 3U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem) 
                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__D 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__quotient_q 
            << 1U) | (1U & (~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                                       >> 0x20U)))));
    if ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                       >> 0x20U)))) {
        if ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result 
                           >> 0x20U)))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__dividend;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder 
            = (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Subtract__DOT__full_result);
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                        >> 1U) | vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((2U == 
                                              (6U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 3U))))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x20U 
                                              == (0x60U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 7U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x30U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 0xfU))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x3000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x200U 
                                              == (0x600U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 0xbU))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_9 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x300U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x200000U 
                                              == (0x600000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 0x17U))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_8 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x20000U 
                                              == (0x60000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 0x13U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0) 
           | (0U != (0x30000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                >> 0x1fU) | (0x20000000U 
                                             == (0x60000000U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x30000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                        >> 0x1bU))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_7 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x3000000U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel 
        = (((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
            << 1U) | (((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                          >> 3U)) | ((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q))))) 
                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_proceed))));
    vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_1 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux) 
            >> 1U) & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux) 
                      & ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                         | ((2U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state)) 
                            | (3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__Pre_state))))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed) {
            vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                           >> 0xcU));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
            = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                       >> 7U));
    }
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = (1U 
                                                & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)) 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                                              >> 6U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_4 = (1U 
                                                & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed)) 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                                              >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL 
        = ((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                       >> 0x11U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                               >> 4U))) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0)) 
           | ((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                          >> 0x16U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0)) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                    >> 0xdU))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV 
        = ((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                       >> 0x11U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                               >> 4U))) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0)) 
           | ((((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                          >> 0x16U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0)) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                    >> 0xcU))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel 
        = ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel) 
             | ((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                    >> 2U))) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel))) 
            << 2U) | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16) 
                        | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel)) 
                       << 1U) | (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel)) 
                                  & ((0x13U == (0x7fU 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))) 
                                     | ((3U == (0x7fU 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))) 
                                        | (0x67U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U)))))) 
                                 | ((0x63U == (0x7fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 2U))) 
                                    | (0x6fU == (0x7fU 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 2U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded 
        = ((IData)((0ULL != (0xffULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in))
                ? 0U : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                       >> 1U))) ? 1U
                         : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                           >> 2U)))
                             ? 2U : ((1U & (IData)(
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                    >> 3U)))
                                      ? 3U : ((1U & (IData)(
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                             >> 4U)))
                                               ? 4U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                              >> 5U)))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 6U)))
                                                    ? 6U
                                                    : 7U)))))))
            : ((IData)((0ULL != (0xff00ULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                  >> 8U))) ? 8U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 9U)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0xaU)))
                                                     ? 0xaU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0xbU)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0xcU)))
                                                       ? 0xcU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0xdU)))
                                                        ? 0xdU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                    >> 0xeU)))
                                                         ? 0xeU
                                                         : 0xfU)))))))
                : ((IData)((0ULL != (0xff0000ULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                    ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                      >> 0x10U))) ? 0x10U
                        : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                          >> 0x11U)))
                            ? 0x11U : ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x12U)))
                                        ? 0x12U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x13U)))
                                                    ? 0x13U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x14U)))
                                                     ? 0x14U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x15U)))
                                                      ? 0x15U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x16U)))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((IData)((0ULL != (0xff000000ULL 
                                         & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                        ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                          >> 0x18U)))
                            ? 0x18U : ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x19U)))
                                        ? 0x19U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x1aU)))
                                                    ? 0x1aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x1bU)))
                                                     ? 0x1bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x1cU)))
                                                      ? 0x1cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x1dU)))
                                                       ? 0x1dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x1eU)))
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : ((IData)((0ULL != (0xff00000000ULL 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                            ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                              >> 0x20U)))
                                ? 0x20U : ((1U & (IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                          >> 0x21U)))
                                            ? 0x21U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x22U)))
                                                ? 0x22U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x23U)))
                                                    ? 0x23U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x24U)))
                                                     ? 0x24U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x25U)))
                                                      ? 0x25U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U)))))))
                            : ((IData)((0ULL != (0xff0000000000ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                  >> 0x28U)))
                                    ? 0x28U : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x29U)))
                                                ? 0x29U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x2bU)))
                                                     ? 0x2bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x2cU)))
                                                      ? 0x2cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x2dU)))
                                                       ? 0x2dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x2eU)))
                                                        ? 0x2eU
                                                        : 0x2fU)))))))
                                : ((IData)((0ULL != 
                                            (0xff000000000000ULL 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x30U)))
                                        ? 0x30U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x31U)))
                                                    ? 0x31U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x32U)))
                                                     ? 0x32U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x33U)))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x34U)))
                                                       ? 0x34U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x35U)))
                                                        ? 0x35U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                    >> 0x36U)))
                                                         ? 0x36U
                                                         : 0x37U)))))))
                                    : ((IData)((0ULL 
                                                != 
                                                (0xff00000000000000ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                          >> 0x38U)))
                                            ? 0x38U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x39U)))
                                                ? 0x39U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x3aU)))
                                                    ? 0x3aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x3bU)))
                                                     ? 0x3bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x3cU)))
                                                      ? 0x3cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x3dU)))
                                                       ? 0x3dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x3eU)))
                                                        ? 0x3eU
                                                        : 0x3fU)))))))
                                        : 0U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 3U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                 >> 3U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                              >> 2U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                  >> 1U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 1U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                  & ((~ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0x13U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                    >> 0x13U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 0x12U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x12U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x11U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                          >> 0x11U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                         >> 0x10U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                             >> 0x10U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0xbU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xbU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                  >> 0xaU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                      >> 0xaU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                      >> 9U)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                        >> 9U) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                       >> 8U) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                           >> 8U)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 7U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                 >> 7U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                              >> 6U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                  >> 6U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                  >> 5U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 5U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                   >> 4U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                       >> 4U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0x1bU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                    >> 0x1bU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 0x1aU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x1aU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x19U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                          >> 0x19U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                         >> 0x18U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                             >> 0x18U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0x17U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                    >> 0x17U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x16U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x15U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                          >> 0x15U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                         >> 0x14U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                             >> 0x14U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0xfU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                   >> 0xfU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                  >> 0xeU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                      >> 0xeU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                      >> 0xdU)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                        >> 0xdU) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                       >> 0xcU) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                           >> 0xcU)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_9 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                      >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                    >> 0x1fU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                    >> 0x1eU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x1eU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                        >> 0x1dU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                          >> 0x1dU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs 
                                                         >> 0x1cU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B_abs 
                                                             >> 0x1cU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero) 
           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7) 
               | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8)) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8))) 
              | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8)) 
                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_3__o_all_zero) 
                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero) 
                       | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9))))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_7)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_7__o_all_zero));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 3U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                 >> 3U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                              >> 2U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                  >> 1U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 1U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                  & ((~ vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0x13U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                    >> 0x13U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 0x12U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x12U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x11U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                          >> 0x11U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                         >> 0x10U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                             >> 0x10U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0xbU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                   >> 0xbU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                  >> 0xaU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                      >> 0xaU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                      >> 9U)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                        >> 9U) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                       >> 8U) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                           >> 8U)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 7U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                 >> 7U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                              >> 6U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                  >> 6U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                  >> 5U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 5U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                   >> 4U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                       >> 4U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0x1bU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                    >> 0x1bU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 0x1aU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x1aU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x19U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                          >> 0x19U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                         >> 0x18U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                             >> 0x18U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0x17U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                    >> 0x17U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x16U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x15U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                          >> 0x15U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                         >> 0x14U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                             >> 0x14U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0xfU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                   >> 0xfU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                  >> 0xeU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                      >> 0xeU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                      >> 0xdU)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                        >> 0xdU) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                       >> 0xcU) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                           >> 0xcU)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_3__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                      >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                    >> 0x1fU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                    >> 0x1eU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x1eU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                        >> 0x1dU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                          >> 0x1dU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs 
                                                         >> 0x1cU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs 
                                                             >> 0x1cU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT__Layer1_7__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_18 
        = (IData)((0x400U == (0x600U & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)));
    vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_0 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4));
    vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT____VdfgRegularize_h59e7220e_0_2) 
               & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                   >> 0x12U) & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]))) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV) 
                 | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                     & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Pre_state)) 
                        | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                           >> 0xdU))) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                                         & ((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
                                            | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                               >> 0xcU)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
            ? ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                    ? 0U : (0xfffff000U & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                            << 0x1eU) 
                                           | (0x3ffff000U 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U)))))
                : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                          >> 1U)))) 
                        << 0x15U) | ((0x100000U & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                   << 0x13U)) 
                                     | ((0xff000U & 
                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                          >> 2U)) | 
                                        ((0x800U & 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0xbU)) 
                                         | (0x7feU 
                                            & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                << 0xaU) 
                                               | (0x3feU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 0x16U))))))))
                    : (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                >> 0x16U)))) : ((2U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
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
                                                                 >> 9U))))))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                          << 0xaU) 
                                                         | (0x3e0U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               >> 0x16U)))) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 9U)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xcU) 
                                                  | (0xfffU 
                                                     & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 0x16U))))
                                                  : 0U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8) 
                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_9))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2) 
           & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)) 
              & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_8))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en 
        = ((~ (IData)((0U != (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                              >> 0xbU)))) & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_18) 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
                                                >> 8U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel = 
        (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_1) 
          << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____VdfgRegularize_h677c064a_8_0));
    vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_mul_div_proceed))));
    __Vtemp_41[0U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               << 0x1eU) 
                                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                 >> 2U)))))) 
                       << 0x1eU) | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                      | (0x63U == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U)))) 
                                     << 0x1dU) | ((
                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_22) 
                                                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16)) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren) 
                                                            << 0x19U) 
                                                           | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__and_) 
                                                                 | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__andi) 
                                                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                                                       | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21)))) 
                                                                << 0x18U) 
                                                               | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20) 
                                                                    | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
                                                                       | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srl) 
                                                                           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sra) 
                                                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sll))) 
                                                                          | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18) 
                                                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21))))) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slt) 
                                                                      | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slti) 
                                                                         | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltu) 
                                                                            | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sltiu) 
                                                                               | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_18) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19)))))) 
                                                                     << 0x16U))) 
                                                              | ((((0x63U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                        >> 2U))) 
                                                                   | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_21)) 
                                                                  << 0x15U) 
                                                                 | ((0x100000U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                        << 0x13U)) 
                                                                    | ((((0x67U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                              >> 2U))) 
                                                                         << 0x13U) 
                                                                        | (((0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bgeu) 
                                                                               << 0x11U) 
                                                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bltu) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bge) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__blt) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__bne) 
                                                                                << 0xdU) 
                                                                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__beq) 
                                                                                << 0xcU)))))))) 
                                                                       | (((3U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                           << 0xbU) 
                                                                          | (((0x23U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                              << 0xaU) 
                                                                             | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
                                                                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
                                                                                | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh)) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mul_en) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__div_en) 
                                                                                << 5U) 
                                                                                | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulsu)) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulu) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__mulh)) 
                                                                                << 3U)) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__rem)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__remu) 
                                                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__divu)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection)) 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U]))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[3U] 
        = ((0x7fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[3U]) 
           | (__Vtemp_41[0U] << 7U));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[4U] 
        = ((__Vtemp_41[0U] >> 0x19U) | (0xffffff80U 
                                        & ((IData)(
                                                   (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                        << 0x1eU) 
                                                                       | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                          >> 2U)))))) 
                                           << 5U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
        = ((((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     << 0x1eU) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                       >> 2U)))))) 
             >> 0x1bU) | (0x60U & ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                 << 0x1eU) 
                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                   >> 2U))))) 
                                            >> 0x20U)) 
                                   << 5U))) | (0xffffff80U 
                                               & ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                << 0x1eU) 
                                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                                >> 2U))))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
        = (0x3ffffffU & (((0x60U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                    >> 4U)) | ((IData)(
                                                       ((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                             << 0x1eU) 
                                                                            | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                               >> 2U))))) 
                                                        >> 0x20U)) 
                                               >> 0x1bU)) 
                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded) 
                             << 0x14U) | ((0xf8000U 
                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                              >> 2U)) 
                                          | ((0x7c00U 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 0xcU)) 
                                             | (0x380U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 4U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) 
            & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_9) 
               & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_1__o_all_zero) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__NLC_0__o_all_zero)))) 
           | (0U == vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_B));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) 
            << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel) 
                       << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_6) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_8)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_19));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_2) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_4)));
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
           & ((~ (IData)((0U != (0xc0U & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address)))) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en)));
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel))
                ? 0ULL : (((QData)((IData)(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__mul_div_data_sel))
                                                 ? vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_remainder
                                                 : vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_quotient)
                                             : ((1U 
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
                                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__Select_control_signal__o_mux)))))))
            : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__wb_sel))
                ? (((QData)((IData)(((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
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
                                            ? 0U : 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                            >> 0x10U))) 
                                      << 0x10U) | (
                                                   (((2U 
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
                    << 7U) | (QData)((IData)(((0x7cU 
                                               & ((IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__MEM_WB_buffer__Q 
                                                           >> 7U)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4))))))
                : vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_WB_data_buffer__Q));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_15 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_7) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_9)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_12 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_3) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_5)));
    __Vtableidx7 = ((0x400U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7) 
                               << 9U)) | ((0x200U & 
                                           ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6) 
                                            << 8U)) 
                                          | ((0x100U 
                                              & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5) 
                                                 << 7U)) 
                                             | ((0x80U 
                                                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4) 
                                                    << 6U)) 
                                                | ((0x40U 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3) 
                                                       << 5U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1) 
                                                             << 3U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux 
        = Vprocessor_tb__ConstPool__TABLE_h63966fb0_0
        [__Vtableidx7];
    __Vtableidx6 = ((0x400U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z7) 
                               << 0xaU)) | ((0x200U 
                                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z6) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z5) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z4) 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z3) 
                                                         << 6U)) 
                                                     | ((0x20U 
                                                         & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z2) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z1) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT__z0) 
                                                                  << 3U)) 
                                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__Boundary_Nibble_Encoder__o_y)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux 
        = Vprocessor_tb__ConstPool__TABLE_h63966fb0_0
        [__Vtableidx6];
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier_sel_b 
        = (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff)) 
            & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_11) 
               | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_14)))) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_A)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_12 
        = ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
               >> 5U)) & (IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_13));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8 
        = ((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_13) 
           & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address 
              >> 5U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren 
        = (IData)((3ULL == (3ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_12) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Compare_operand__DOT____VdfgRegularize_h09780577_0_15)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit0_NLZ__o_mux) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in, 1U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_in;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier_sel_b) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier_sel_b) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplicand 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs;
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplicand 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_B_abs;
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__operand_A_abs;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forward_en 
        = (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                      >> 0x11U)) == (0x1fU & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                      >> 2U)))) 
           & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs1_not_R0) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren)));
    vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forward_en 
        = (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                      >> 0x16U)) == (0x1fU & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                                      >> 2U)))) 
           & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rs2_not_R0) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0 
        = ((0U != (0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                    >> 2U)))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__wren));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_d 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__operand_A_abs;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__remainder_d 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__partial_remainder;
    }
    __Vtableidx5 = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__div_start) 
                     << 6U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__A_lt_B) 
                                << 5U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand) 
                                           << 4U) | 
                                          ((((0U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__count))
                                              ? 3U : 2U) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__NextStep 
        = Vprocessor_tb__ConstPool__TABLE_h3be6425e_0
        [__Vtableidx5];
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Find_Reduced_A__DOT____Vcellout__bit1_NLZ__o_mux) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1, 2U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R1;
    }
    if ((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q)) {
        if ((1U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q)) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplicand;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B = 0U;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__product_upper_init_mux__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_d 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__temp_multiplier_q, 1U);
    }
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xcU & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc00U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc00000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc0000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0 
        = (IData)((0U != (0xc000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forward_en) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forward_en) {
            vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded 
                = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                           >> 7U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs1_forwarded 
            = (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                              (0x1fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                  >> 0xfU)), 5U)))
                 ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                         (((IData)(0x1fU) + (0x3ffU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xfU)), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                   >> 0xfU)), 5U))))) 
               | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                  (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                          (0x1fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                            >> 0xfU)), 5U) 
                            >> 5U))] >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                   >> 0xfU)), 5U))));
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forward_en) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forward_en) {
            vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded 
                = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                           >> 7U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__WB_rs2_forwarded 
            = (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                              (0x1fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                  >> 0xaU)), 5U)))
                 ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                         (((IData)(0x1fU) + (0x3ffU 
                                             & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                 >> 0xaU)), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                   >> 0xaU)), 5U))))) 
               | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                  (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                          (0x1fU & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                            >> 0xaU)), 5U) 
                            >> 5U))] >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
                                                                   >> 0xaU)), 5U))));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel 
        = ((((IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_1) 
             & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched)) 
                & (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                      >> 2U))) == (0x1fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                      >> 0xfU))) 
                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0)))) 
            << 1U) | ((IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_1) 
                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel 
        = ((((IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_0) 
             & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched)) 
                & (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                      >> 2U))) == (0x1fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                      >> 0xaU))) 
                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__FWD_check_WB_stage__DOT____VdfgRegularize_h05e61976_0_0)))) 
            << 1U) | ((IData)(processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT____VdfgRegularize_h641f91ad_0_0) 
                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_4__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2, 4U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R2;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT____Vcellinp__Partial_product_reg__D 
        = ((((QData)((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                              >> 0x20U))) + (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__adder_operand_B))) 
            << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                         & (IData)(
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q 
                                                    >> 1U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_0__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                        >> 1U) | vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_0__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((2U == 
                                              (6U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 3U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x20U 
                                              == (0x60U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 7U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_1__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x30U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 0xfU))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_3__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x3000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x200U 
                                              == (0x600U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 0xbU))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_7_2 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_2__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x300U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x200000U 
                                              == (0x600000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 0x17U))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_7_1 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_5__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x20000U 
                                              == (0x60000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 0x13U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_4__DOT____VdfgRegularize_hbcf032f5_0_0) 
           | (0U != (0x30000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                >> 0x1fU) | (0x20000000U 
                                             == (0x60000000U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero 
        = (1U & (~ ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_7__DOT____VdfgRegularize_hbcf032f5_0_0) 
                    | (IData)((0U != (0x30000000U & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6 
        = (3U & (~ (((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0) 
                     << 1U) | (1U & ((IData)((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier))) 
                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier 
                                        >> 0x1bU))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_7_0 = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__NLC_6__DOT____VdfgRegularize_hbcf032f5_0_0) 
                                                | (0U 
                                                   != 
                                                   (0x3000000U 
                                                    & vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__multiplier)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel))
                ? 0U : (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                >> 7U))) : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_data_sel))
                                             ? (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                        >> 7U))
                                             : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel))
                ? 0U : (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                                >> 7U))) : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_data_sel))
                                             ? (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                        >> 7U))
                                             : (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
                                                        >> 0x20U))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_8__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4, 8U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R4;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero) 
           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0) 
               | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1)) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8))) 
              | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1)) 
                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero) 
                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_1__o_all_zero) 
                       | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2))))));
    processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_0)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_7__o_all_zero));
    __Vtemp_49[4U] = (((IData)((((QData)((IData)(((2U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                    ? 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                     << 0x1bU) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                       >> 5U))
                                                    : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((2U 
                                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                ? 
                                                               ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                                 << 0x1bU) 
                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                   >> 5U))
                                                                : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                       >> 0x17U) | ((IData)(((((QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                  ? 
                                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                   << 0x1bU) 
                                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                     >> 5U))
                                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((2U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                  ? 0U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                   ? 
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                      >> 5U))
                                                                   : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))))) 
                                             >> 0x20U)) 
                                    << 9U));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
        = ((0x7fU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U]) 
           | ((0xffff0000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                              << 0xbU)) | ((0xf800U 
                                            & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                               << 6U)) 
                                           | ((0x400U 
                                               & (((~ 
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                     >> 0x12U)) 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U]) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                     >> 0x13U)) 
                                                 | ((0x100U 
                                                     & (((~ 
                                                          ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mul_start) 
                                                           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__div_start))) 
                                                         << 8U) 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                           << 1U))) 
                                                    | (0x80U 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                          >> 0x14U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                     >> 0x15U)) | (((0xf800U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                << 0xbU)) 
                                    | (0x780U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                 >> 0x15U))) 
                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                                      << 0x10U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                     >> 0x10U)) | ((0xff80U & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                                               >> 0x10U)) 
                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                                      << 0x10U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                     >> 0x10U)) | ((0xff80U & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                                               >> 0x10U)) 
                                   | ((IData)((((QData)((IData)(
                                                                ((2U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                  ? 0U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                   ? 
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                    << 0x1bU) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                      >> 5U))
                                                                   : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((2U 
                                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                   ? 0U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                    ? 
                                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                                     << 0x1bU) 
                                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                       >> 5U))
                                                                    : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                                      << 0x10U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
        = ((0x7fU & ((IData)((((QData)((IData)(((2U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                  ? 
                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                   << 0x1bU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                     >> 5U))
                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                              ? 
                                                             ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                               << 0x1bU) 
                                                              | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                 >> 5U))
                                                              : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                     >> 0x10U)) | (__Vtemp_49[4U] << 7U));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
        = ((__Vtemp_49[4U] >> 0x19U) | ((0xf8000000U 
                                         & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                            << 7U)) 
                                        | ((0x7000000U 
                                            & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                               >> 5U)) 
                                           | ((0xff0000U 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 3U)) 
                                              | (0xff80U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               ((2U 
                                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                                 ? 
                                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                                >> 5U))
                                                                                 : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((2U 
                                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                                 ? 
                                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                                >> 5U))
                                                                                 : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))))) 
                                                             >> 0x20U)) 
                                                    >> 0x10U))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
        = (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                 >> 0x19U));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT____Vcellinp__mux_16__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8, 0x10U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R8;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2) 
           & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8)) 
              & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel 
        = ((IData)(processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_2) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_1) 
              | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__Boundary_Nibble_Encoder__DOT____VdfgRegularize_hc60a1ccd_0_8) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_7_2)) 
                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__NLC_3__o_all_zero)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl 
        = ((0x1fU == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0x1bU)))) 
           | (0x15U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                  << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                            >> 0x1bU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result 
        = (0x1ffffffffULL & ((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                               << 0x10U) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 >> 0x10U)))) 
                             + (((0x1dU == (0x3fU & 
                                            ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
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
                                                        >> 0x10U))))) 
                                + (QData)((IData)((0x1dU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                                        << 5U) 
                                                       | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                          >> 0x1bU)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in 
        = ((0x80000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                            << 0xdU)) 
                                        | ((0x20000000U 
                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  << 9U)) 
                                              | ((0x8000000U 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     << 7U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           << 3U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                              << 1U)) 
                                                          | ((0x800000U 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                 >> 1U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                    >> 3U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                       >> 5U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                          >> 7U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                             >> 9U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                                >> 0xbU)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                                >> 0xdU)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xfU)))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos 
        = (1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                     >> 0xfU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                  >> 0xfU)));
    processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____VdfgRegularize_h83e762c5_0_0 
        = (IData)((0x300U == (0x300U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp 
        = (IData)((0U != (0x300000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                     >> 0x10U)) ^ (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                      >> 0x10U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                      ^ vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 8U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  >> 0x18U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 << 8U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x18U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 8U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 8U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 0xcU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x14U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   << 0xcU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x14U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 4U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 << 0x1cU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 4U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos 
        = (1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                     >> 0xfU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                  >> 0xfU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 4U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  >> 0x1cU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 << 4U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x1cU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0 
        = ((0x25U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0x1bU)))) 
           | (0x1bU == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                  << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                            >> 0x1bU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1 
        = ((0x23U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0x1bU)))) 
           | (0x19U == (0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[9U] 
                                  << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                            >> 0x1bU)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (1U 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    ^ 
                                                    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U]) 
                                                   >> 0xfU));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                     >> 0x10U)) ^ (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                      >> 0x10U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      ^ vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 8U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  >> 0x18U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                 << 8U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   >> 0x18U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 0xcU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x14U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   << 0xcU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                     >> 0x14U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                     >> 8U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 8U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                     >> 4U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                 << 0x1cU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 4U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 4U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  >> 0x1cU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                 << 4U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   >> 0x1cU)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = (1U 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    ^ 
                                                    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U]) 
                                                   >> 0xfU));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_out 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__mux_R16 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) 
            << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel) 
                       << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel)));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit 
        = (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1)) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0)) 
           & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
              >> 0xfU));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                       << 3U) | (7U & (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                         << 0x14U) 
                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0xcU)) 
                                       ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           << 0x14U) 
                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                             >> 0xcU)))))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                       << 3U) | (7U & (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                         << 0x14U) 
                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           >> 0xcU)) 
                                       ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                           << 0x14U) 
                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                             >> 0xcU)))))));
    if ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) {
        if ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep))) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_d 
                = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__Reduce_A__DOT__reversed_out;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_d 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__shifted_A_q, 1U);
    }
    __Vtableidx4 = ((0x400U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7) 
                               << 9U)) | ((0x200U & 
                                           ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6) 
                                            << 8U)) 
                                          | ((0x100U 
                                              & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5) 
                                                 << 7U)) 
                                             | ((0x80U 
                                                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4) 
                                                    << 6U)) 
                                                | ((0x40U 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3) 
                                                       << 5U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1) 
                                                             << 3U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux 
        = Vprocessor_tb__ConstPool__TABLE_h63966fb0_0
        [__Vtableidx4];
    __Vtableidx3 = ((0x400U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z7) 
                               << 0xaU)) | ((0x200U 
                                             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z6) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z5) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z4) 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z3) 
                                                         << 6U)) 
                                                     | ((0x20U 
                                                         & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z2) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z1) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT__z0) 
                                                                  << 3U)) 
                                                              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__Boundary_Nibble_Encoder__o_y)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux 
        = Vprocessor_tb__ConstPool__TABLE_h63966fb0_0
        [__Vtableidx3];
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x13U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x13U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x12U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x12U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x11U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x11U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x10U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x10U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 3U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 3U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 2U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 1U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 1U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  & ((~ 
                                                      vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U]) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x1bU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x1bU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x1aU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x1aU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x19U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x19U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x18U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x18U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 0xbU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0xbU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  >> 0xaU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                      >> 0xaU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                      >> 9U)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                        >> 9U) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                       >> 8U) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           >> 8U)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x17U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x17U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x16U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x15U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x15U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x14U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x14U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 7U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 7U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 6U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 6U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 5U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 5U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 4U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 4U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x1fU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x1eU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x1eU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x1dU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x1dU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x1cU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x1cU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel 
        = (((IData)((0U != (0x7ffffffU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           << 0xbU) 
                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                             >> 0x15U))))) 
            << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
            = ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                             >> 0x10U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x14U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x13U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x12U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x11U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x10U)));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x13U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x13U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x12U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x12U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x11U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x11U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x10U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x10U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 3U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                 >> 3U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 2U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 1U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 1U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  & ((~ 
                                                      vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U]) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x1bU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x1bU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x1aU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x1aU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x19U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x19U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x18U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x18U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x17U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x17U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x16U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x15U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x15U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x14U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x14U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 0xbU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                   >> 0xbU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0xaU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                      >> 0xaU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                      >> 9U)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 9U) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 8U) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                           >> 8U)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 7U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                 >> 7U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 6U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 6U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 5U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 5U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 4U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                       >> 4U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x1fU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x1fU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x1eU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x1eU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x1dU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x1dU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x1cU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x1cU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq)));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit0_NLZ__o_mux) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q, 1U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__partial_product_q;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit) 
                    << 0x1fU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                                 >> 1U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger 
        = (1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                 | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                      >> 0xeU) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      >> 0xeU)) & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq) 
                                                   >> 3U))) 
                    | (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                            >> 0xdU)) & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0xdU) 
                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                       | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                           >> 0xcU) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           >> 0xcU)) 
                                       & (IData)((0xeU 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger 
        = (1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                 | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0xeU) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                      >> 0xeU)) & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq) 
                                                   >> 3U))) 
                    | (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                            >> 0xdU)) & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0xdU) 
                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                       | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                           >> 0xcU) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                           >> 0xcU)) 
                                       & (IData)((0xeU 
                                                  == 
                                                  (0xeU 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Find_NLZ_mulipliter__DOT____Vcellout__bit1_NLZ__o_mux) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1, 2U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R1;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                                 >> 2U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_4__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2, 4U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R2;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                                 >> 4U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_8__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4, 8U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R4;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                                 >> 8U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT____Vcellinp__mux_16__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8, 0x10U);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R8;
    }
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                                 >> 0x10U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2 
        = (1U & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                 | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                    & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                            >> 0xfU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                         >> 0xfU)) 
                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__reversed_out 
        = (((QData)((IData)((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16)))) 
            << 0x3fU) | (((QData)((IData)((1U & (IData)(
                                                        (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                         >> 1U))))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                    >> 2U))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                     >> 3U))))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                        >> 4U))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                           >> 5U))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                              >> 6U))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 7U))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 8U))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 9U))))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xaU))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xbU))))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xcU))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xdU))))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xeU))))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0xfU))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x10U))))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x11U))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x12U))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x13U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x14U))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x15U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x16U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x17U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x18U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x19U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1aU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1bU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1dU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1eU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x1fU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x21U)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x22U)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x23U)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x24U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x25U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x26U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__sign_diff) {
            vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__final_result 
                = (- vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16);
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__final_result 
            = vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__MUL__DOT__Normalization__DOT__mux_R16;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
           | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
              & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken 
        = (1U & (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                   >> 0x10U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2)) 
                 | (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2)) 
                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        >> 0x11U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                        >> 0x12U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2)) 
                                      | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0x13U) 
                                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2)) 
                                         | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 0x13U) 
                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2)) 
                                            | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                 >> 0x14U) 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2)) 
                                               | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 0x15U) 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2)) 
                                                  | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                       >> 0x15U) 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2)) 
                                                     | (IData)(
                                                               (0U 
                                                                != 
                                                                (0xc00000U 
                                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U]))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t 
        = ((IData)(processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____VdfgRegularize_h83e762c5_0_0) 
           & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken)) 
              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                 >> 7U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt 
        = ((IData)(processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____VdfgRegularize_h83e762c5_0_0) 
           & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                  >> 7U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken)));
    vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t) 
            << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_target
                : ((IData)(4U) + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                >> 0x10U))))
            : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
                ? (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__full_result)
                : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                   + (IData)((QData)((IData)((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__IF_buffer_en) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                              << 2U)))))));
}

VL_INLINE_OPT void Vprocessor_tb___024root___nba_comb__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_mul 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_MUL)) 
               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                             >> 9U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__mul_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0)))) 
           | (IData)(vlSelfRef.processor_tb__DOT__rst));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
            & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__raw_depend_DIV)) 
               & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                             >> 9U)) == (0x1fU & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT____Vcellout__div_instr_ctrl_buffer__Q) 
                                                  >> 4U))) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Hazard_Detection__DOT__rd_not_R0)))) 
           | (IData)(vlSelfRef.processor_tb__DOT__rst));
    vlSelfRef.processor_tb__DOT__dut__DOT__ID_flush 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss) 
              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_by_hazard_detection)));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__zero_operand) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__flush_div));
    vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____Vcellinp__Temp_Quotient_register__rst 
        = ((1U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT__PreStep)) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__M_extension__DOT__DIV__DOT____VdfgRegularize_h35d56360_0_0));
}

void Vprocessor_tb___024root___timing_resume(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vprocessor_tb___024root___eval_triggers__act(Vprocessor_tb___024root* vlSelf);

bool Vprocessor_tb___024root___eval_phase__act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vprocessor_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vprocessor_tb___024root___timing_resume(vlSelf);
        Vprocessor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vprocessor_tb___024root___eval_phase__nba(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vprocessor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__nba(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__act(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vprocessor_tb___024root___eval(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vprocessor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_tb/processor_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vprocessor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_tb/processor_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vprocessor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vprocessor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vprocessor_tb___024root___eval_debug_assertions(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
