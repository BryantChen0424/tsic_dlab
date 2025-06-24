// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconst_.h for the primary calling header

#ifndef VERILATED_VCONST____024ROOT_H_
#define VERILATED_VCONST____024ROOT_H_  // guard

#include "verilated.h"


class Vconst___Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconst____024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(ot,0,0);
    VL_OUT8(of,0,0);
    VL_OUT8(o1,7,0);
    VL_OUT8(o2,7,0);
    VL_OUT8(o16,7,0);
    VL_OUT8(o_auto_expand,7,0);
    VL_OUT8(o_auto_cut,7,0);
    VL_OUT8(o_neg,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconst___Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconst____024root(Vconst___Syms* symsp, const char* v__name);
    ~Vconst____024root();
    VL_UNCOPYABLE(Vconst____024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
