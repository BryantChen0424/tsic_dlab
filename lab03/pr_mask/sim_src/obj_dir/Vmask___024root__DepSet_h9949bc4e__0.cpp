// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask.h for the primary calling header

#include "Vmask__pch.h"
#include "Vmask___024root.h"

void Vmask___024root___ico_sequent__TOP__0(Vmask___024root* vlSelf);

void Vmask___024root___eval_ico(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_ico\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmask___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmask___024root___ico_sequent__TOP__0(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___ico_sequent__TOP__0\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mask__DOT__a = vlSelfRef.a;
    vlSelfRef.o = (0xfU & (IData)(vlSelfRef.a));
    vlSelfRef.mask__DOT__o = vlSelfRef.o;
}

void Vmask___024root___eval_triggers__ico(Vmask___024root* vlSelf);

bool Vmask___024root___eval_phase__ico(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_phase__ico\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmask___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmask___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmask___024root___eval_act(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_act\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmask___024root___eval_nba(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_nba\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmask___024root___eval_triggers__act(Vmask___024root* vlSelf);

bool Vmask___024root___eval_phase__act(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_phase__act\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmask___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmask___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmask___024root___eval_phase__nba(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_phase__nba\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmask___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__ico(Vmask___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__nba(Vmask___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__act(Vmask___024root* vlSelf);
#endif  // VL_DEBUG

void Vmask___024root___eval(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmask___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmask___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmask___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmask___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/mask.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmask___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmask___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmask___024root___eval_debug_assertions(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_debug_assertions\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
