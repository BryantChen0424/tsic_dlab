// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbound.h for the primary calling header

#include "Vbound__pch.h"
#include "Vbound___024root.h"

VL_ATTR_COLD void Vbound___024root___eval_static(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_static\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbound___024root___eval_initial(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_initial\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbound___024root___eval_final(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_final\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__stl(Vbound___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbound___024root___eval_phase__stl(Vbound___024root* vlSelf);

VL_ATTR_COLD void Vbound___024root___eval_settle(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_settle\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbound___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/bound.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbound___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__stl(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___dump_triggers__stl\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vbound___024root___ico_sequent__TOP__0(Vbound___024root* vlSelf);

VL_ATTR_COLD void Vbound___024root___eval_stl(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_stl\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbound___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbound___024root___eval_triggers__stl(Vbound___024root* vlSelf);

VL_ATTR_COLD bool Vbound___024root___eval_phase__stl(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_phase__stl\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbound___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbound___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__ico(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___dump_triggers__ico\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbound___024root___dump_triggers__act(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___dump_triggers__act\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__nba(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___dump_triggers__nba\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbound___024root___ctor_var_reset(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___ctor_var_reset\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->bound_a = VL_RAND_RESET_I(8);
    vlSelf->bound__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->bound__DOT__bound_a = VL_RAND_RESET_I(8);
}
