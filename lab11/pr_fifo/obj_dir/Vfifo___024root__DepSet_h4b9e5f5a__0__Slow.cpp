// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo___024root.h"

VL_ATTR_COLD void Vfifo_fifo___eval_initial__TOP__fifo(Vfifo_fifo* vlSelf);
VL_ATTR_COLD void Vfifo___024root____Vm_traceActivitySetAll(Vfifo___024root* vlSelf);

VL_ATTR_COLD void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_fifo___eval_initial__TOP__fifo((&vlSymsp->TOP__fifo));
    Vfifo___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__stl(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo___024root___eval_triggers__stl(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_triggers__stl\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vfifo___024root___stl_sequent__TOP__0(Vfifo___024root* vlSelf);
VL_ATTR_COLD void Vfifo_fifo___stl_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf);
VL_ATTR_COLD void Vfifo___024root___stl_sequent__TOP__1(Vfifo___024root* vlSelf);

VL_ATTR_COLD void Vfifo___024root___eval_stl(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_stl\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfifo___024root___stl_sequent__TOP__0(vlSelf);
        Vfifo___024root____Vm_traceActivitySetAll(vlSelf);
        Vfifo_fifo___stl_sequent__TOP__fifo__0((&vlSymsp->TOP__fifo));
        Vfifo___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vfifo___024root___stl_sequent__TOP__0(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___stl_sequent__TOP__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_data = vlSymsp->TOP__fifo.r_data;
}

VL_ATTR_COLD void Vfifo___024root___stl_sequent__TOP__1(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___stl_sequent__TOP__1\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_ready = vlSymsp->TOP__fifo.w_ready;
    vlSelfRef.r_ready = vlSymsp->TOP__fifo.r_ready;
}
