// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbound.h for the primary calling header

#ifndef VERILATED_VBOUND___024ROOT_H_
#define VERILATED_VBOUND___024ROOT_H_  // guard

#include "verilated.h"


class Vbound__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbound___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(bound_a,7,0);
    CData/*7:0*/ bound__DOT__a;
    CData/*7:0*/ bound__DOT__bound_a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbound__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbound___024root(Vbound__Syms* symsp, const char* v__name);
    ~Vbound___024root();
    VL_UNCOPYABLE(Vbound___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
