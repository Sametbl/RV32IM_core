// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb__Syms.h"
#include "Vprocessor_tb___024root.h"

extern const VlWide<10>/*319:0*/ Vprocessor_tb__ConstPool__CONST_h334934e0_0;

VL_ATTR_COLD void Vprocessor_tb___024root___eval_initial__TOP(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 8, 2048, 0, VL_CVT_PACK_STR_NW(10, Vprocessor_tb__ConstPool__CONST_h334934e0_0)
                 ,  &(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__stl(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprocessor_tb___024root___eval_triggers__stl(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vprocessor_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
