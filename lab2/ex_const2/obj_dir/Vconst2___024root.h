// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconst2.h for the primary calling header

#ifndef VERILATED_VCONST2___024ROOT_H_
#define VERILATED_VCONST2___024ROOT_H_  // guard

#include "verilated.h"


class Vconst2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconst2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(o_auto_expand,7,0);
    VL_OUT8(o_auto_cut,7,0);
    VL_OUT8(o_neg,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconst2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconst2___024root(Vconst2__Syms* symsp, const char* v__name);
    ~Vconst2___024root();
    VL_UNCOPYABLE(Vconst2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
