// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmask.h for the primary calling header

#ifndef VERILATED_VMASK___024ROOT_H_
#define VERILATED_VMASK___024ROOT_H_  // guard

#include "verilated.h"


class Vmask__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmask___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(o,7,0);
    CData/*7:0*/ mask__DOT__a;
    CData/*7:0*/ mask__DOT__o;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmask__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmask___024root(Vmask__Syms* symsp, const char* v__name);
    ~Vmask___024root();
    VL_UNCOPYABLE(Vmask___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
