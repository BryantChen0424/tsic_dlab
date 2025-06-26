// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varray.h for the primary calling header

#ifndef VERILATED_VARRAY_ARRAY_H_
#define VERILATED_VARRAY_ARRAY_H_  // guard

#include "verilated.h"


class Varray__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varray_array final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(w_ready,0,0);
    VL_IN8(w_valid,0,0);
    VL_IN8(w_data,7,0);
    CData/*3:0*/ p;
    CData/*3:0*/ p_nxt;
    CData/*0:0*/ w_fire;
    IData/*31:0*/ i;
    VlUnpacked<CData/*7:0*/, 8> R;
    VlUnpacked<CData/*7:0*/, 8> R_nxt;

    // INTERNAL VARIABLES
    Varray__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varray_array(Varray__Syms* symsp, const char* v__name);
    ~Varray_array();
    VL_UNCOPYABLE(Varray_array);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
