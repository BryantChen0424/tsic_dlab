// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbound.h for the primary calling header

#include "Vbound__pch.h"
#include "Vbound__Syms.h"
#include "Vbound___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__ico(Vbound___024root* vlSelf);
#endif  // VL_DEBUG

void Vbound___024root___eval_triggers__ico(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_triggers__ico\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbound___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbound___024root___dump_triggers__act(Vbound___024root* vlSelf);
#endif  // VL_DEBUG

void Vbound___024root___eval_triggers__act(Vbound___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbound___024root___eval_triggers__act\n"); );
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbound___024root___dump_triggers__act(vlSelf);
    }
#endif
}
