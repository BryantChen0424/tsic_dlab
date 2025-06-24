// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter.h for the primary calling header

#include "Vsorter__pch.h"
#include "Vsorter___024root.h"

void Vsorter___024root___ico_sequent__TOP__0(Vsorter___024root* vlSelf);

void Vsorter___024root___eval_ico(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_ico\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsorter___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsorter___024root___ico_sequent__TOP__0(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___ico_sequent__TOP__0\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.v0) > (IData)(vlSelfRef.v1))) {
        vlSelfRef.sorter__DOT__c0_min = vlSelfRef.v1;
        vlSelfRef.sorter__DOT__c0_max = vlSelfRef.v0;
    } else {
        vlSelfRef.sorter__DOT__c0_min = vlSelfRef.v0;
        vlSelfRef.sorter__DOT__c0_max = vlSelfRef.v1;
    }
    if (((IData)(vlSelfRef.sorter__DOT__c0_max) > (IData)(vlSelfRef.v2))) {
        vlSelfRef.sorter__DOT__c1_max = vlSelfRef.sorter__DOT__c0_max;
        vlSelfRef.sorter__DOT__c1_min = vlSelfRef.v2;
    } else {
        vlSelfRef.sorter__DOT__c1_max = vlSelfRef.v2;
        vlSelfRef.sorter__DOT__c1_min = vlSelfRef.sorter__DOT__c0_max;
    }
    if (((IData)(vlSelfRef.sorter__DOT__c1_max) > (IData)(vlSelfRef.v3))) {
        vlSelfRef.o3 = vlSelfRef.sorter__DOT__c1_max;
        vlSelfRef.sorter__DOT__c2_min = vlSelfRef.v3;
    } else {
        vlSelfRef.o3 = vlSelfRef.v3;
        vlSelfRef.sorter__DOT__c2_min = vlSelfRef.sorter__DOT__c1_max;
    }
    if (((IData)(vlSelfRef.sorter__DOT__c0_min) > (IData)(vlSelfRef.sorter__DOT__c1_min))) {
        vlSelfRef.sorter__DOT__c3_min = vlSelfRef.sorter__DOT__c1_min;
        vlSelfRef.sorter__DOT__c3_max = vlSelfRef.sorter__DOT__c0_min;
    } else {
        vlSelfRef.sorter__DOT__c3_min = vlSelfRef.sorter__DOT__c0_min;
        vlSelfRef.sorter__DOT__c3_max = vlSelfRef.sorter__DOT__c1_min;
    }
    if (((IData)(vlSelfRef.sorter__DOT__c3_max) > (IData)(vlSelfRef.sorter__DOT__c2_min))) {
        vlSelfRef.o2 = vlSelfRef.sorter__DOT__c3_max;
        vlSelfRef.sorter__DOT__c4_min = vlSelfRef.sorter__DOT__c2_min;
    } else {
        vlSelfRef.o2 = vlSelfRef.sorter__DOT__c2_min;
        vlSelfRef.sorter__DOT__c4_min = vlSelfRef.sorter__DOT__c3_max;
    }
    if (((IData)(vlSelfRef.sorter__DOT__c3_min) > (IData)(vlSelfRef.sorter__DOT__c4_min))) {
        vlSelfRef.o1 = vlSelfRef.sorter__DOT__c3_min;
        vlSelfRef.o0 = vlSelfRef.sorter__DOT__c4_min;
    } else {
        vlSelfRef.o1 = vlSelfRef.sorter__DOT__c4_min;
        vlSelfRef.o0 = vlSelfRef.sorter__DOT__c3_min;
    }
}

void Vsorter___024root___eval_triggers__ico(Vsorter___024root* vlSelf);

bool Vsorter___024root___eval_phase__ico(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_phase__ico\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsorter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsorter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsorter___024root___eval_act(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_act\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsorter___024root___eval_nba(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_nba\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsorter___024root___eval_triggers__act(Vsorter___024root* vlSelf);

bool Vsorter___024root___eval_phase__act(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_phase__act\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsorter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsorter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsorter___024root___eval_phase__nba(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_phase__nba\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsorter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__ico(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__nba(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__act(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG

void Vsorter___024root___eval(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsorter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sorter.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsorter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsorter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sorter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsorter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sorter.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsorter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsorter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsorter___024root___eval_debug_assertions(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_debug_assertions\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.v0 & 0xf0U)))) {
        Verilated::overWidthError("v0");}
    if (VL_UNLIKELY(((vlSelfRef.v1 & 0xf0U)))) {
        Verilated::overWidthError("v1");}
    if (VL_UNLIKELY(((vlSelfRef.v2 & 0xf0U)))) {
        Verilated::overWidthError("v2");}
    if (VL_UNLIKELY(((vlSelfRef.v3 & 0xf0U)))) {
        Verilated::overWidthError("v3");}
}
#endif  // VL_DEBUG
