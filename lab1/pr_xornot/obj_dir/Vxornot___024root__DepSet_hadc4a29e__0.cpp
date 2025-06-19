// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxornot.h for the primary calling header

#include "Vxornot__pch.h"
#include "Vxornot___024root.h"

void Vxornot___024root___ico_sequent__TOP__0(Vxornot___024root* vlSelf);

void Vxornot___024root___eval_ico(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_ico\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vxornot___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vxornot___024root___ico_sequent__TOP__0(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___ico_sequent__TOP__0\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a_not = (1U & (~ (IData)(vlSelfRef.a)));
    vlSelfRef.b_not = (1U & (~ (IData)(vlSelfRef.b)));
    vlSelfRef.o_xor = ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.b));
}

void Vxornot___024root___eval_triggers__ico(Vxornot___024root* vlSelf);

bool Vxornot___024root___eval_phase__ico(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_phase__ico\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vxornot___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vxornot___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vxornot___024root___eval_act(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_act\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vxornot___024root___eval_nba(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_nba\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vxornot___024root___eval_triggers__act(Vxornot___024root* vlSelf);

bool Vxornot___024root___eval_phase__act(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_phase__act\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vxornot___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vxornot___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vxornot___024root___eval_phase__nba(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_phase__nba\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vxornot___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxornot___024root___dump_triggers__ico(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxornot___024root___dump_triggers__nba(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxornot___024root___dump_triggers__act(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG

void Vxornot___024root___eval(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vxornot___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("xornot.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vxornot___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vxornot___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("xornot.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vxornot___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("xornot.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vxornot___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vxornot___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vxornot___024root___eval_debug_assertions(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_debug_assertions\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
