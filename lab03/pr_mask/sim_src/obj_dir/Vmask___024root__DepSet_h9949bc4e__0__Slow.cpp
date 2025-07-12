// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask.h for the primary calling header

#include "Vmask__pch.h"
#include "Vmask___024root.h"

VL_ATTR_COLD void Vmask___024root___eval_static(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_static\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmask___024root___eval_initial(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_initial\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmask___024root___eval_final(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_final\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__stl(Vmask___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmask___024root___eval_phase__stl(Vmask___024root* vlSelf);

VL_ATTR_COLD void Vmask___024root___eval_settle(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_settle\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmask___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmask___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__stl(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___dump_triggers__stl\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vmask___024root___ico_sequent__TOP__0(Vmask___024root* vlSelf);

VL_ATTR_COLD void Vmask___024root___eval_stl(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_stl\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmask___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmask___024root___eval_triggers__stl(Vmask___024root* vlSelf);

VL_ATTR_COLD bool Vmask___024root___eval_phase__stl(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___eval_phase__stl\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmask___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmask___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__ico(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___dump_triggers__ico\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmask___024root___dump_triggers__act(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___dump_triggers__act\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask___024root___dump_triggers__nba(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___dump_triggers__nba\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmask___024root___ctor_var_reset(Vmask___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root___ctor_var_reset\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->o = VL_RAND_RESET_I(8);
    vlSelf->mask__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->mask__DOT__o = VL_RAND_RESET_I(8);
}
