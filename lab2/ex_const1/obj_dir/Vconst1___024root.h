// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconst1.h for the primary calling header

#ifndef VERILATED_VCONST1___024ROOT_H_
#define VERILATED_VCONST1___024ROOT_H_  // guard

#include "verilated.h"


class Vconst1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconst1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(ot,0,0);
    VL_OUT8(of,0,0);
    VL_OUT8(o1,7,0);
    VL_OUT8(o2,7,0);
    VL_OUT8(o16,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconst1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconst1___024root(Vconst1__Syms* symsp, const char* v__name);
    ~Vconst1___024root();
    VL_UNCOPYABLE(Vconst1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
