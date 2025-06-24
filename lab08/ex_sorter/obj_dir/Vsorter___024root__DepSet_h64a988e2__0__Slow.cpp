// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter.h for the primary calling header

#include "Vsorter__pch.h"
#include "Vsorter___024root.h"

VL_ATTR_COLD void Vsorter___024root___eval_static(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_static\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsorter___024root___eval_initial(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_initial\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsorter___024root___eval_final(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_final\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__stl(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsorter___024root___eval_phase__stl(Vsorter___024root* vlSelf);

VL_ATTR_COLD void Vsorter___024root___eval_settle(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_settle\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsorter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sorter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsorter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__stl(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___dump_triggers__stl\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vsorter___024root___ico_sequent__TOP__0(Vsorter___024root* vlSelf);
VL_ATTR_COLD void Vsorter___024root____Vm_traceActivitySetAll(Vsorter___024root* vlSelf);

VL_ATTR_COLD void Vsorter___024root___eval_stl(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_stl\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsorter___024root___ico_sequent__TOP__0(vlSelf);
        Vsorter___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsorter___024root___eval_triggers__stl(Vsorter___024root* vlSelf);

VL_ATTR_COLD bool Vsorter___024root___eval_phase__stl(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_phase__stl\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsorter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsorter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__ico(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___dump_triggers__ico\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsorter___024root___dump_triggers__act(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___dump_triggers__act\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__nba(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___dump_triggers__nba\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsorter___024root____Vm_traceActivitySetAll(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root____Vm_traceActivitySetAll\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vsorter___024root___ctor_var_reset(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___ctor_var_reset\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->v0 = VL_RAND_RESET_I(4);
    vlSelf->v1 = VL_RAND_RESET_I(4);
    vlSelf->v2 = VL_RAND_RESET_I(4);
    vlSelf->v3 = VL_RAND_RESET_I(4);
    vlSelf->o0 = VL_RAND_RESET_I(4);
    vlSelf->o1 = VL_RAND_RESET_I(4);
    vlSelf->o2 = VL_RAND_RESET_I(4);
    vlSelf->o3 = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c0_min = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c0_max = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c1_min = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c1_max = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c2_min = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c3_min = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c3_max = VL_RAND_RESET_I(4);
    vlSelf->sorter__DOT__c4_min = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
