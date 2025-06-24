// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsorter_id__Syms.h"


void Vsorter_id___024root__trace_chg_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsorter_id___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_chg_0\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsorter_id___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsorter_id___024root__trace_chg_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_chg_0_sub_0\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.sorter_id__DOT__c0_min),4);
        bufp->chgCData(oldp+1,(vlSelfRef.sorter_id__DOT__c0_max),4);
        bufp->chgCData(oldp+2,(vlSelfRef.sorter_id__DOT__c1_min),4);
        bufp->chgCData(oldp+3,(vlSelfRef.sorter_id__DOT__c1_max),4);
        bufp->chgCData(oldp+4,(vlSelfRef.sorter_id__DOT__c2_min),4);
        bufp->chgCData(oldp+5,(vlSelfRef.sorter_id__DOT__c3_min),4);
        bufp->chgCData(oldp+6,(vlSelfRef.sorter_id__DOT__c3_max),4);
        bufp->chgCData(oldp+7,(vlSelfRef.sorter_id__DOT__c4_min),4);
        bufp->chgCData(oldp+8,(vlSelfRef.sorter_id__DOT____Vcellout__c0__min_id),4);
        bufp->chgCData(oldp+9,(vlSelfRef.sorter_id__DOT____Vcellout__c0__max_id),4);
        bufp->chgCData(oldp+10,(vlSelfRef.sorter_id__DOT____Vcellout__c1__min_id),4);
        bufp->chgCData(oldp+11,(vlSelfRef.sorter_id__DOT____Vcellout__c1__max_id),4);
        bufp->chgCData(oldp+12,(vlSelfRef.sorter_id__DOT____Vcellout__c2__min_id),4);
        bufp->chgCData(oldp+13,(vlSelfRef.sorter_id__DOT____Vcellout__c3__min_id),4);
        bufp->chgCData(oldp+14,(vlSelfRef.sorter_id__DOT____Vcellout__c3__max_id),4);
        bufp->chgCData(oldp+15,(vlSelfRef.sorter_id__DOT____Vcellout__c4__min_id),4);
        bufp->chgCData(oldp+16,(vlSelfRef.sorter_id__DOT____Vcellout__c0__min_id),2);
        bufp->chgCData(oldp+17,(vlSelfRef.sorter_id__DOT____Vcellout__c0__max_id),2);
        bufp->chgBit(oldp+18,(vlSelfRef.sorter_id__DOT__c0__DOT__a_is_max));
        bufp->chgCData(oldp+19,(vlSelfRef.sorter_id__DOT____Vcellout__c1__min_id),2);
        bufp->chgCData(oldp+20,(vlSelfRef.sorter_id__DOT____Vcellout__c1__max_id),2);
        bufp->chgBit(oldp+21,(vlSelfRef.sorter_id__DOT__c1__DOT__a_is_max));
        bufp->chgCData(oldp+22,(vlSelfRef.sorter_id__DOT____Vcellout__c2__min_id),2);
        bufp->chgBit(oldp+23,(vlSelfRef.sorter_id__DOT__c2__DOT__a_is_max));
        bufp->chgCData(oldp+24,(vlSelfRef.sorter_id__DOT____Vcellout__c3__min_id),2);
        bufp->chgCData(oldp+25,(vlSelfRef.sorter_id__DOT____Vcellout__c3__max_id),2);
        bufp->chgBit(oldp+26,(vlSelfRef.sorter_id__DOT__c3__DOT__a_is_max));
        bufp->chgCData(oldp+27,(vlSelfRef.sorter_id__DOT____Vcellout__c4__min_id),2);
        bufp->chgCData(oldp+28,(vlSelfRef.sorter_id__DOT__c4__DOT__max_id),2);
        bufp->chgBit(oldp+29,(vlSelfRef.sorter_id__DOT__c4__DOT__a_is_max));
        bufp->chgCData(oldp+30,(vlSelfRef.sorter_id__DOT__c5__DOT__min_id),2);
        bufp->chgCData(oldp+31,(vlSelfRef.sorter_id__DOT__c5__DOT__max_id),2);
        bufp->chgBit(oldp+32,(vlSelfRef.sorter_id__DOT__c5__DOT__a_is_max));
    }
    bufp->chgCData(oldp+33,(vlSelfRef.v0),4);
    bufp->chgCData(oldp+34,(vlSelfRef.v1),4);
    bufp->chgCData(oldp+35,(vlSelfRef.v2),4);
    bufp->chgCData(oldp+36,(vlSelfRef.v3),4);
    bufp->chgCData(oldp+37,(vlSelfRef.o0),4);
    bufp->chgCData(oldp+38,(vlSelfRef.o1),4);
    bufp->chgCData(oldp+39,(vlSelfRef.o2),4);
    bufp->chgCData(oldp+40,(vlSelfRef.o3),4);
    bufp->chgCData(oldp+41,(vlSelfRef.o3_id),2);
}

void Vsorter_id___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_cleanup\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
