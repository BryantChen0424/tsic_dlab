// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo.h for the primary calling header

#ifndef VERILATED_VFIFO_FIFO_H_
#define VERILATED_VFIFO_FIFO_H_  // guard

#include "verilated.h"


class Vfifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(w_ready,0,0);
    VL_IN8(w_valid,0,0);
    VL_IN8(w_data,7,0);
    VL_OUT8(r_ready,0,0);
    VL_IN8(r_valid,0,0);
    VL_OUT8(r_data,7,0);
    CData/*7:0*/ __PVT__r_data_nxt;
    CData/*3:0*/ __PVT__wp;
    CData/*3:0*/ __PVT__wp_nxt;
    CData/*3:0*/ __PVT__rp;
    CData/*3:0*/ __PVT__rp_nxt;
    CData/*0:0*/ __PVT__w_fire;
    CData/*0:0*/ __PVT__r_fire;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<CData/*7:0*/, 8> R;
    VlUnpacked<CData/*7:0*/, 8> __PVT__R_nxt;

    // INTERNAL VARIABLES
    Vfifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo_fifo(Vfifo__Syms* symsp, const char* v__name);
    ~Vfifo_fifo();
    VL_UNCOPYABLE(Vfifo_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
