// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray___024root.h"

VL_ATTR_COLD void Varray___024root___eval_final(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_final\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__stl(Varray___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Varray___024root___eval_phase__stl(Varray___024root* vlSelf);

VL_ATTR_COLD void Varray___024root___eval_settle(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_settle\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Varray___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("array.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Varray___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__stl(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___dump_triggers__stl\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Varray___024root___eval_triggers__stl(Varray___024root* vlSelf);
VL_ATTR_COLD void Varray___024root___eval_stl(Varray___024root* vlSelf);

VL_ATTR_COLD bool Varray___024root___eval_phase__stl(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_phase__stl\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Varray___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Varray___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__ico(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___dump_triggers__ico\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__act(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___dump_triggers__act\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge array.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge array.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__nba(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___dump_triggers__nba\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge array.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge array.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Varray___024root___ctor_var_reset(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___ctor_var_reset\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->w_ready = VL_RAND_RESET_I(1);
    vlSelf->w_valid = VL_RAND_RESET_I(1);
    vlSelf->w_data = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__array__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__array__rst_n__0 = VL_RAND_RESET_I(1);
}
