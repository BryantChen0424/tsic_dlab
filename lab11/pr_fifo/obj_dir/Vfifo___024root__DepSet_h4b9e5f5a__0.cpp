// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__ico(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo___024root___eval_triggers__ico(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_triggers__ico\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vfifo_fifo___ico_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf);

void Vfifo___024root___eval_ico(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_ico\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vfifo_fifo___ico_sequent__TOP__fifo__0((&vlSymsp->TOP__fifo));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__act(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo___024root___eval_triggers__act(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_triggers__act\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vfifo_fifo___nba_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf);
void Vfifo___024root___nba_sequent__TOP__0(Vfifo___024root* vlSelf);

void Vfifo___024root___eval_nba(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_nba\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfifo_fifo___nba_sequent__TOP__fifo__0((&vlSymsp->TOP__fifo));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vfifo___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfifo___024root___nba_sequent__TOP__0(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___nba_sequent__TOP__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_data = vlSymsp->TOP__fifo.r_data;
    vlSelfRef.w_ready = vlSymsp->TOP__fifo.w_ready;
    vlSelfRef.r_ready = vlSymsp->TOP__fifo.r_ready;
}
