// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray__Syms.h"
#include "Varray___024root.h"

VL_ATTR_COLD void Varray___024root___eval_static(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_static\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__array__clk__0 
        = vlSymsp->TOP__array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__array__rst_n__0 
        = vlSymsp->TOP__array.rst_n;
}

VL_ATTR_COLD void Varray_array___eval_initial__TOP__array(Varray_array* vlSelf);

VL_ATTR_COLD void Varray___024root___eval_initial(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_initial\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varray_array___eval_initial__TOP__array((&vlSymsp->TOP__array));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__stl(Varray___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Varray___024root___eval_triggers__stl(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_triggers__stl\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varray___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Varray___024root___ico_sequent__TOP__0(Varray___024root* vlSelf);
VL_ATTR_COLD void Varray_array___stl_sequent__TOP__array__0(Varray_array* vlSelf);
void Varray___024root___nba_sequent__TOP__0(Varray___024root* vlSelf);

VL_ATTR_COLD void Varray___024root___eval_stl(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_stl\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Varray___024root___ico_sequent__TOP__0(vlSelf);
        Varray_array___stl_sequent__TOP__array__0((&vlSymsp->TOP__array));
        Varray___024root___nba_sequent__TOP__0(vlSelf);
    }
}
