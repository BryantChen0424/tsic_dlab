// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst1.h for the primary calling header

#include "Vconst1__pch.h"
#include "Vconst1__Syms.h"
#include "Vconst1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst1___024root___dump_triggers__act(Vconst1___024root* vlSelf);
#endif  // VL_DEBUG

void Vconst1___024root___eval_triggers__act(Vconst1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst1___024root___eval_triggers__act\n"); );
    Vconst1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconst1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
