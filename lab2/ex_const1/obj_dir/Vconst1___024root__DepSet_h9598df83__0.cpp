// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst1.h for the primary calling header

#include "Vconst1__pch.h"
#include "Vconst1___024root.h"

void Vconst1___024root___eval_act(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_act\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconst1___024root___eval_nba(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_nba\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconst1___024root___eval_triggers__act(Vconst1___024root* vlSelf);

bool Vconst1___024root___eval_phase__act(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_phase__act\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconst1___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconst1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconst1___024root___eval_phase__nba(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_phase__nba\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconst1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst1___024root___dump_triggers__nba(Vconst1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst1___024root___dump_triggers__act(Vconst1___024root* vlSelf);
#endif  // VL_DEBUG

void Vconst1___024root___eval(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vconst1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("const1.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconst1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("const1.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconst1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconst1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconst1___024root___eval_debug_assertions(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_debug_assertions\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
