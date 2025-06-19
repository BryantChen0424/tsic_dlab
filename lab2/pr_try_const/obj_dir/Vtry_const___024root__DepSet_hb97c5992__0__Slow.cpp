// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtry_const.h for the primary calling header

#include "Vtry_const__pch.h"
#include "Vtry_const___024root.h"

VL_ATTR_COLD void Vtry_const___024root___eval_static(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_static\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtry_const___024root___eval_initial__TOP(Vtry_const___024root* vlSelf);

VL_ATTR_COLD void Vtry_const___024root___eval_initial(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_initial\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtry_const___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtry_const___024root___eval_initial__TOP(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_initial__TOP\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o16 = 0x5aU;
}

VL_ATTR_COLD void Vtry_const___024root___eval_final(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_final\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtry_const___024root___eval_settle(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_settle\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__act(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___dump_triggers__act\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__nba(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___dump_triggers__nba\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtry_const___024root___ctor_var_reset(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___ctor_var_reset\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->o16 = VL_RAND_RESET_I(16);
}
