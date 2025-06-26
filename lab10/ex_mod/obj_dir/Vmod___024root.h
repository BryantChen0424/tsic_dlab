// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmod.h for the primary calling header

#ifndef VERILATED_VMOD___024ROOT_H_
#define VERILATED_VMOD___024ROOT_H_  // guard

#include "verilated.h"


class Vmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmod___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(valid,0,0);
    VL_IN8(dividend,7,0);
    VL_IN8(divisor,7,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(remainder,7,0);
    CData/*1:0*/ mod__DOT__S;
    CData/*1:0*/ mod__DOT__S_nxt;
    CData/*7:0*/ mod__DOT__a;
    CData/*7:0*/ mod__DOT__a_nxt;
    CData/*7:0*/ mod__DOT__b;
    CData/*7:0*/ mod__DOT__b_nxt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmod__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmod___024root(Vmod__Syms* symsp, const char* v__name);
    ~Vmod___024root();
    VL_UNCOPYABLE(Vmod___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
