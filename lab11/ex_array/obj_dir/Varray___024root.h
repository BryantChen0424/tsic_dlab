// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varray.h for the primary calling header

#ifndef VERILATED_VARRAY___024ROOT_H_
#define VERILATED_VARRAY___024ROOT_H_  // guard

#include "verilated.h"
class Varray_array;


class Varray__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varray___024root final : public VerilatedModule {
  public:
    // CELLS
    Varray_array* array;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(w_ready,0,0);
    VL_IN8(w_valid,0,0);
    VL_IN8(w_data,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__array__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__array__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Varray__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varray___024root(Varray__Syms* symsp, const char* v__name);
    ~Varray___024root();
    VL_UNCOPYABLE(Varray___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
