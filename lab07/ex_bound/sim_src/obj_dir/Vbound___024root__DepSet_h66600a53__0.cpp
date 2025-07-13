// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbound.h for the primary calling header

#include "Vbound__pch.h"
#include "Vbound___024root.h"

void Vbound___024root___ico_sequent__TOP__0(Vbound___024root* vlSelf);

void Vbound___024root___eval_ico(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_ico\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbound___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbound___024root___ico_sequent__TOP__0(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___ico_sequent__TOP__0\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bound__DOT__a = vlSelfRef.a;
    vlSelfRef.bound_a = ((0x3fU < (IData)(vlSelfRef.a))
                          ? 0x3fU : (IData)(vlSelfRef.a));
    vlSelfRef.bound__DOT__bound_a = vlSelfRef.bound_a;
}

void Vbound___024root___eval_triggers__ico(Vbound___024root* vlSelf);

bool Vbound___024root___eval_phase__ico(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_phase__ico\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbound___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbound___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbound___024root___eval_act(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_act\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbound___024root___eval_nba(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_nba\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbound___024root___eval_triggers__act(Vbound___024root* vlSelf);

bool Vbound___024root___eval_phase__act(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_phase__act\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbound___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbound___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbound___024root___eval_phase__nba(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_phase__nba\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbound___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__ico(Vbound___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__nba(Vbound___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__act(Vbound___024root* vlSelf);
#endif  // VL_DEBUG

void Vbound___024root___eval(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vbound___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/bound.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbound___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbound___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/bound.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbound___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/bound.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbound___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbound___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbound___024root___eval_debug_assertions(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_debug_assertions\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
