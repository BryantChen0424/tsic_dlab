// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsorter_id.h for the primary calling header

#ifndef VERILATED_VSORTER_ID___024ROOT_H_
#define VERILATED_VSORTER_ID___024ROOT_H_  // guard

#include "verilated.h"


class Vsorter_id__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsorter_id___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(v0,3,0);
    VL_IN8(v1,3,0);
    VL_IN8(v2,3,0);
    VL_IN8(v3,3,0);
    VL_OUT8(o0,3,0);
    VL_OUT8(o1,3,0);
    VL_OUT8(o2,3,0);
    VL_OUT8(o3,3,0);
    VL_OUT8(o3_id,1,0);
    CData/*3:0*/ sorter_id__DOT__c0_min;
    CData/*3:0*/ sorter_id__DOT__c0_max;
    CData/*3:0*/ sorter_id__DOT__c1_min;
    CData/*3:0*/ sorter_id__DOT__c1_max;
    CData/*3:0*/ sorter_id__DOT__c2_min;
    CData/*3:0*/ sorter_id__DOT__c3_min;
    CData/*3:0*/ sorter_id__DOT__c3_max;
    CData/*3:0*/ sorter_id__DOT__c4_min;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c0__max_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c0__min_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c1__max_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c1__min_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c2__min_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c3__max_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c3__min_id;
    CData/*1:0*/ sorter_id__DOT____Vcellout__c4__min_id;
    CData/*0:0*/ sorter_id__DOT__c0__DOT__a_is_max;
    CData/*0:0*/ sorter_id__DOT__c1__DOT__a_is_max;
    CData/*0:0*/ sorter_id__DOT__c2__DOT__a_is_max;
    CData/*0:0*/ sorter_id__DOT__c3__DOT__a_is_max;
    CData/*1:0*/ sorter_id__DOT__c4__DOT__max_id;
    CData/*0:0*/ sorter_id__DOT__c4__DOT__a_is_max;
    CData/*1:0*/ sorter_id__DOT__c5__DOT__min_id;
    CData/*1:0*/ sorter_id__DOT__c5__DOT__max_id;
    CData/*0:0*/ sorter_id__DOT__c5__DOT__a_is_max;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsorter_id__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsorter_id___024root(Vsorter_id__Syms* symsp, const char* v__name);
    ~Vsorter_id___024root();
    VL_UNCOPYABLE(Vsorter_id___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
