// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Varray__Syms.h"


void Varray___024root__trace_chg_0_sub_0(Varray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Varray___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_chg_0\n"); );
    // Init
    Varray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varray___024root*>(voidSelf);
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Varray___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Varray___024root__trace_chg_0_sub_0(Varray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_chg_0_sub_0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.w_ready));
    bufp->chgBit(oldp+3,(vlSelfRef.w_valid));
    bufp->chgCData(oldp+4,(vlSelfRef.w_data),8);
    bufp->chgBit(oldp+5,(vlSymsp->TOP__array.clk));
    bufp->chgBit(oldp+6,(vlSymsp->TOP__array.rst_n));
    bufp->chgBit(oldp+7,(vlSymsp->TOP__array.w_ready));
    bufp->chgBit(oldp+8,(vlSymsp->TOP__array.w_valid));
    bufp->chgCData(oldp+9,(vlSymsp->TOP__array.w_data),8);
    bufp->chgCData(oldp+10,(vlSymsp->TOP__array.R[0]),8);
    bufp->chgCData(oldp+11,(vlSymsp->TOP__array.R[1]),8);
    bufp->chgCData(oldp+12,(vlSymsp->TOP__array.R[2]),8);
    bufp->chgCData(oldp+13,(vlSymsp->TOP__array.R[3]),8);
    bufp->chgCData(oldp+14,(vlSymsp->TOP__array.R[4]),8);
    bufp->chgCData(oldp+15,(vlSymsp->TOP__array.R[5]),8);
    bufp->chgCData(oldp+16,(vlSymsp->TOP__array.R[6]),8);
    bufp->chgCData(oldp+17,(vlSymsp->TOP__array.R[7]),8);
    bufp->chgCData(oldp+18,(vlSymsp->TOP__array.R_nxt[0]),8);
    bufp->chgCData(oldp+19,(vlSymsp->TOP__array.R_nxt[1]),8);
    bufp->chgCData(oldp+20,(vlSymsp->TOP__array.R_nxt[2]),8);
    bufp->chgCData(oldp+21,(vlSymsp->TOP__array.R_nxt[3]),8);
    bufp->chgCData(oldp+22,(vlSymsp->TOP__array.R_nxt[4]),8);
    bufp->chgCData(oldp+23,(vlSymsp->TOP__array.R_nxt[5]),8);
    bufp->chgCData(oldp+24,(vlSymsp->TOP__array.R_nxt[6]),8);
    bufp->chgCData(oldp+25,(vlSymsp->TOP__array.R_nxt[7]),8);
    bufp->chgCData(oldp+26,(vlSymsp->TOP__array.p),4);
    bufp->chgCData(oldp+27,(vlSymsp->TOP__array.p_nxt),4);
    bufp->chgBit(oldp+28,(vlSymsp->TOP__array.w_fire));
    bufp->chgIData(oldp+29,(vlSymsp->TOP__array.i),32);
}

void Varray___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_cleanup\n"); );
    // Init
    Varray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varray___024root*>(voidSelf);
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
