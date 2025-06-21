// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst_.h for the primary calling header

#include "Vconst___pch.h"
#include "Vconst____024root.h"

VL_ATTR_COLD void Vconst____024root___eval_static(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_static\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst____024root___eval_initial__TOP(Vconst____024root* vlSelf);

VL_ATTR_COLD void Vconst____024root___eval_initial(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_initial\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconst____024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vconst____024root___eval_initial__TOP(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_initial__TOP\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o16 = 0x5aU;
    vlSelfRef.o2 = 0x65U;
    vlSelfRef.o1 = 5U;
    vlSelfRef.ot = 1U;
    vlSelfRef.of = 0U;
    vlSelfRef.o_auto_expand = 5U;
    vlSelfRef.o_auto_cut = 0x59U;
    vlSelfRef.o_neg = 0xfbU;
}

VL_ATTR_COLD void Vconst____024root___eval_final(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_final\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vconst____024root___eval_settle(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_settle\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst____024root___dump_triggers__act(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___dump_triggers__act\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst____024root___dump_triggers__nba(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___dump_triggers__nba\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconst____024root___ctor_var_reset(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___ctor_var_reset\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ot = VL_RAND_RESET_I(1);
    vlSelf->of = VL_RAND_RESET_I(1);
    vlSelf->o1 = VL_RAND_RESET_I(8);
    vlSelf->o2 = VL_RAND_RESET_I(8);
    vlSelf->o16 = VL_RAND_RESET_I(8);
    vlSelf->o_auto_expand = VL_RAND_RESET_I(8);
    vlSelf->o_auto_cut = VL_RAND_RESET_I(8);
    vlSelf->o_neg = VL_RAND_RESET_I(8);
}
