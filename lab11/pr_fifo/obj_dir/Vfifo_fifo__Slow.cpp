// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo_fifo.h"

void Vfifo_fifo___ctor_var_reset(Vfifo_fifo* vlSelf);

Vfifo_fifo::Vfifo_fifo(Vfifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfifo_fifo___ctor_var_reset(this);
}

void Vfifo_fifo::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfifo_fifo::~Vfifo_fifo() {
}
