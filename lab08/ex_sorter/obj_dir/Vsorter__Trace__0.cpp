// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsorter__Syms.h"


void Vsorter___024root__trace_chg_0_sub_0(Vsorter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsorter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_chg_0\n"); );
    // Init
    Vsorter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter___024root*>(voidSelf);
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsorter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsorter___024root__trace_chg_0_sub_0(Vsorter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_chg_0_sub_0\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.sorter__DOT__c0_min),4);
        bufp->chgCData(oldp+1,(vlSelfRef.sorter__DOT__c0_max),4);
        bufp->chgCData(oldp+2,(vlSelfRef.sorter__DOT__c1_min),4);
        bufp->chgCData(oldp+3,(vlSelfRef.sorter__DOT__c1_max),4);
        bufp->chgCData(oldp+4,(vlSelfRef.sorter__DOT__c2_min),4);
        bufp->chgCData(oldp+5,(vlSelfRef.sorter__DOT__c3_min),4);
        bufp->chgCData(oldp+6,(vlSelfRef.sorter__DOT__c3_max),4);
        bufp->chgCData(oldp+7,(vlSelfRef.sorter__DOT__c4_min),4);
    }
    bufp->chgCData(oldp+8,(vlSelfRef.v0),4);
    bufp->chgCData(oldp+9,(vlSelfRef.v1),4);
    bufp->chgCData(oldp+10,(vlSelfRef.v2),4);
    bufp->chgCData(oldp+11,(vlSelfRef.v3),4);
    bufp->chgCData(oldp+12,(vlSelfRef.o0),4);
    bufp->chgCData(oldp+13,(vlSelfRef.o1),4);
    bufp->chgCData(oldp+14,(vlSelfRef.o2),4);
    bufp->chgCData(oldp+15,(vlSelfRef.o3),4);
}

void Vsorter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_cleanup\n"); );
    // Init
    Vsorter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter___024root*>(voidSelf);
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
