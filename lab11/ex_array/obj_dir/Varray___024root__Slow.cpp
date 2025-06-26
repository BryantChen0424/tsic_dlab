// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray__Syms.h"
#include "Varray___024root.h"

void Varray___024root___ctor_var_reset(Varray___024root* vlSelf);

Varray___024root::Varray___024root(Varray__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varray___024root___ctor_var_reset(this);
}

void Varray___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varray___024root::~Varray___024root() {
}
