// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask.h for the primary calling header

#include "Vmask__pch.h"
#include "Vmask__Syms.h"
#include "Vmask___024root.h"

void Vmask___024root___ctor_var_reset(Vmask___024root* vlSelf);

Vmask___024root::Vmask___024root(Vmask__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmask___024root___ctor_var_reset(this);
}

void Vmask___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmask___024root::~Vmask___024root() {
}
