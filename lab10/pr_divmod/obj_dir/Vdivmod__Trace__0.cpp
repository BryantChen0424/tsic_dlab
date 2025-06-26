// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdivmod__Syms.h"


void Vdivmod___024root__trace_chg_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdivmod___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_chg_0\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdivmod___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdivmod___024root__trace_chg_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_chg_0_sub_0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.divmod__DOT__S),2);
        bufp->chgCData(oldp+1,(vlSelfRef.divmod__DOT__a),8);
        bufp->chgCData(oldp+2,(vlSelfRef.divmod__DOT__b),8);
        bufp->chgCData(oldp+3,(vlSelfRef.divmod__DOT__q),8);
        bufp->chgCData(oldp+4,(vlSelfRef.divmod__DOT__q_nxt),8);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.clk));
    bufp->chgBit(oldp+6,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+7,(vlSelfRef.valid));
    bufp->chgCData(oldp+8,(vlSelfRef.dividend),8);
    bufp->chgCData(oldp+9,(vlSelfRef.divisor),8);
    bufp->chgBit(oldp+10,(vlSelfRef.ready));
    bufp->chgCData(oldp+11,(vlSelfRef.quotient),8);
    bufp->chgCData(oldp+12,(vlSelfRef.remainder),8);
    bufp->chgCData(oldp+13,(vlSelfRef.divmod__DOT__S_nxt),2);
    bufp->chgCData(oldp+14,(vlSelfRef.divmod__DOT__a_nxt),8);
    bufp->chgCData(oldp+15,(vlSelfRef.divmod__DOT__b_nxt),8);
}

void Vdivmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_cleanup\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
