// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbound.h for the primary calling header

#include "Vbound__pch.h"
#include "Vbound__Syms.h"
#include "Vbound___024root.h"

void Vbound___024root___ctor_var_reset(Vbound___024root* vlSelf);

Vbound___024root::Vbound___024root(Vbound__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbound___024root___ctor_var_reset(this);
}

void Vbound___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbound___024root::~Vbound___024root() {
}
