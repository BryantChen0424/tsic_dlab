// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst2.h for the primary calling header

#include "Vconst2__pch.h"
#include "Vconst2__Syms.h"
#include "Vconst2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst2___024root___dump_triggers__act(Vconst2___024root* vlSelf);
#endif  // VL_DEBUG

void Vconst2___024root___eval_triggers__act(Vconst2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root___eval_triggers__act\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconst2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
