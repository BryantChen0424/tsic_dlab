// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxornot.h for the primary calling header

#include "Vxornot__pch.h"
#include "Vxornot__Syms.h"
#include "Vxornot___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxornot___024root___dump_triggers__ico(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG

void Vxornot___024root___eval_triggers__ico(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_triggers__ico\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vxornot___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxornot___024root___dump_triggers__act(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG

void Vxornot___024root___eval_triggers__act(Vxornot___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxornot___024root___eval_triggers__act\n"); );
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vxornot___024root___dump_triggers__act(vlSelf);
    }
#endif
}
