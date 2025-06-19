// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst2.h for the primary calling header

#include "Vconst2__pch.h"
#include "Vconst2__Syms.h"
#include "Vconst2___024root.h"

void Vconst2___024root___ctor_var_reset(Vconst2___024root* vlSelf);

Vconst2___024root::Vconst2___024root(Vconst2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconst2___024root___ctor_var_reset(this);
}

void Vconst2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconst2___024root::~Vconst2___024root() {
}
