// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxornot.h for the primary calling header

#include "Vxornot__pch.h"
#include "Vxornot__Syms.h"
#include "Vxornot___024root.h"

void Vxornot___024root___ctor_var_reset(Vxornot___024root* vlSelf);

Vxornot___024root::Vxornot___024root(Vxornot__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vxornot___024root___ctor_var_reset(this);
}

void Vxornot___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vxornot___024root::~Vxornot___024root() {
}
