// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst1.h for the primary calling header

#include "Vconst1__pch.h"
#include "Vconst1__Syms.h"
#include "Vconst1___024root.h"

void Vconst1___024root___ctor_var_reset(Vconst1___024root* vlSelf);

Vconst1___024root::Vconst1___024root(Vconst1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconst1___024root___ctor_var_reset(this);
}

void Vconst1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconst1___024root::~Vconst1___024root() {
}
