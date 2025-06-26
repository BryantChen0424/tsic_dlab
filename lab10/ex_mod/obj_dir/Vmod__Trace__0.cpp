// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmod__Syms.h"


void Vmod___024root__trace_chg_0_sub_0(Vmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmod___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_chg_0\n"); );
    // Init
    Vmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod___024root*>(voidSelf);
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmod___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmod___024root__trace_chg_0_sub_0(Vmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_chg_0_sub_0\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.mod__DOT__S),2);
        bufp->chgCData(oldp+1,(vlSelfRef.mod__DOT__a),8);
        bufp->chgCData(oldp+2,(vlSelfRef.mod__DOT__b),8);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.clk));
    bufp->chgBit(oldp+4,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+5,(vlSelfRef.valid));
    bufp->chgCData(oldp+6,(vlSelfRef.dividend),8);
    bufp->chgCData(oldp+7,(vlSelfRef.divisor),8);
    bufp->chgBit(oldp+8,(vlSelfRef.ready));
    bufp->chgCData(oldp+9,(vlSelfRef.remainder),8);
    bufp->chgCData(oldp+10,(vlSelfRef.mod__DOT__S_nxt),2);
    bufp->chgCData(oldp+11,(vlSelfRef.mod__DOT__a_nxt),8);
    bufp->chgCData(oldp+12,(vlSelfRef.mod__DOT__b_nxt),8);
}

void Vmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_cleanup\n"); );
    // Init
    Vmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod___024root*>(voidSelf);
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
