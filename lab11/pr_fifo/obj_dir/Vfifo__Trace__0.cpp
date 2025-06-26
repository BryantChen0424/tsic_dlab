// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo__Syms.h"


void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0_sub_0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__fifo.__PVT__R_nxt[0]),8);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__fifo.__PVT__R_nxt[1]),8);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__fifo.__PVT__R_nxt[2]),8);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__fifo.__PVT__R_nxt[3]),8);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__fifo.__PVT__R_nxt[4]),8);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__fifo.__PVT__R_nxt[5]),8);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__fifo.__PVT__R_nxt[6]),8);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__fifo.__PVT__R_nxt[7]),8);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__fifo.__PVT__r_data_nxt),8);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__fifo.__PVT__wp_nxt),4);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__fifo.__PVT__rp_nxt),4);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__fifo.__PVT__w_fire));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__fifo.__PVT__r_fire));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+13,(vlSymsp->TOP__fifo.w_ready));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__fifo.r_ready));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__fifo.r_data),8);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__fifo.__PVT__wp),4);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__fifo.__PVT__rp),4);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__fifo.__PVT__i),32);
    }
    bufp->chgBit(oldp+19,(vlSelfRef.clk));
    bufp->chgBit(oldp+20,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+21,(vlSelfRef.w_ready));
    bufp->chgBit(oldp+22,(vlSelfRef.w_valid));
    bufp->chgCData(oldp+23,(vlSelfRef.w_data),8);
    bufp->chgBit(oldp+24,(vlSelfRef.r_ready));
    bufp->chgBit(oldp+25,(vlSelfRef.r_valid));
    bufp->chgCData(oldp+26,(vlSelfRef.r_data),8);
    bufp->chgCData(oldp+27,(vlSymsp->TOP__fifo.R[0]),8);
    bufp->chgCData(oldp+28,(vlSymsp->TOP__fifo.R[1]),8);
    bufp->chgCData(oldp+29,(vlSymsp->TOP__fifo.R[2]),8);
    bufp->chgCData(oldp+30,(vlSymsp->TOP__fifo.R[3]),8);
    bufp->chgCData(oldp+31,(vlSymsp->TOP__fifo.R[4]),8);
    bufp->chgCData(oldp+32,(vlSymsp->TOP__fifo.R[5]),8);
    bufp->chgCData(oldp+33,(vlSymsp->TOP__fifo.R[6]),8);
    bufp->chgCData(oldp+34,(vlSymsp->TOP__fifo.R[7]),8);
}

void Vfifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_cleanup\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
