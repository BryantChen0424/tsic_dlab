// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst2.h for the primary calling header

#include "Vconst2__pch.h"
#include "Vconst2___024root.h"

VL_ATTR_COLD void Vconst2___024root___eval_static(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_static\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst2___024root___eval_initial__TOP(Vconst2___024root* vlSelf);

VL_ATTR_COLD void Vconst2___024root___eval_initial(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_initial\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconst2___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vconst2___024root___eval_initial__TOP(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_initial__TOP\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_auto_cut = 0x59U;
    vlSelfRef.o_auto_expand = 5U;
    vlSelfRef.o_neg = 0xfbU;
}

VL_ATTR_COLD void Vconst2___024root___eval_final(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_final\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst2___024root___eval_settle(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_settle\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst2___024root___dump_triggers__act(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___dump_triggers__act\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst2___024root___dump_triggers__nba(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___dump_triggers__nba\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconst2___024root___ctor_var_reset(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___ctor_var_reset\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->o_auto_expand = VL_RAND_RESET_I(8);
    vlSelf->o_auto_cut = VL_RAND_RESET_I(8);
    vlSelf->o_neg = VL_RAND_RESET_I(8);
}
