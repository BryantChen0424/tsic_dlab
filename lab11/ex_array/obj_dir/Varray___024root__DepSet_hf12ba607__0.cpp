// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray__Syms.h"
#include "Varray___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__ico(Varray___024root* vlSelf);
#endif  // VL_DEBUG

void Varray___024root___eval_triggers__ico(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_triggers__ico\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varray___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Varray___024root___ico_sequent__TOP__0(Varray___024root* vlSelf);
void Varray_array___ico_sequent__TOP__array__0(Varray_array* vlSelf);

void Varray___024root___eval_ico(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_ico\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Varray___024root___ico_sequent__TOP__0(vlSelf);
        Varray_array___ico_sequent__TOP__array__0((&vlSymsp->TOP__array));
    }
}

VL_INLINE_OPT void Varray___024root___ico_sequent__TOP__0(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___ico_sequent__TOP__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__array.rst_n = vlSelfRef.rst_n;
    vlSymsp->TOP__array.clk = vlSelfRef.clk;
    vlSymsp->TOP__array.w_data = vlSelfRef.w_data;
    vlSymsp->TOP__array.w_valid = vlSelfRef.w_valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varray___024root___dump_triggers__act(Varray___024root* vlSelf);
#endif  // VL_DEBUG

void Varray___024root___eval_triggers__act(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_triggers__act\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__array.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__array__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__array.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__array__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__array__clk__0 
        = vlSymsp->TOP__array.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__array__rst_n__0 
        = vlSymsp->TOP__array.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varray___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Varray_array___nba_sequent__TOP__array__0(Varray_array* vlSelf);
void Varray___024root___nba_sequent__TOP__0(Varray___024root* vlSelf);

void Varray___024root___eval_nba(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___eval_nba\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Varray_array___nba_sequent__TOP__array__0((&vlSymsp->TOP__array));
        Varray___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Varray___024root___nba_sequent__TOP__0(Varray___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root___nba_sequent__TOP__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_ready = vlSymsp->TOP__array.w_ready;
}
