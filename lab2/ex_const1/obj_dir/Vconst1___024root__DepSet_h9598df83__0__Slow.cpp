// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst1.h for the primary calling header

#include "Vconst1__pch.h"
#include "Vconst1___024root.h"

VL_ATTR_COLD void Vconst1___024root___eval_static(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_static\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst1___024root___eval_initial__TOP(Vconst1___024root* vlSelf);

VL_ATTR_COLD void Vconst1___024root___eval_initial(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_initial\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconst1___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vconst1___024root___eval_initial__TOP(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_initial__TOP\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.of = 0U;
    vlSelfRef.ot = 1U;
    vlSelfRef.o1 = 5U;
    vlSelfRef.o2 = 0x65U;
    vlSelfRef.o16 = 0x5aU;
}

VL_ATTR_COLD void Vconst1___024root___eval_final(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_final\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst1___024root___eval_settle(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_settle\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst1___024root___dump_triggers__act(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___dump_triggers__act\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst1___024root___dump_triggers__nba(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___dump_triggers__nba\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconst1___024root___ctor_var_reset(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___ctor_var_reset\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ot = VL_RAND_RESET_I(1);
    vlSelf->of = VL_RAND_RESET_I(1);
    vlSelf->o1 = VL_RAND_RESET_I(8);
    vlSelf->o2 = VL_RAND_RESET_I(8);
    vlSelf->o16 = VL_RAND_RESET_I(8);
}
