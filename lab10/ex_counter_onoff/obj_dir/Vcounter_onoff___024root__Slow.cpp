// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_onoff.h for the primary calling header

#include "Vcounter_onoff__pch.h"
#include "Vcounter_onoff__Syms.h"
#include "Vcounter_onoff___024root.h"

void Vcounter_onoff___024root___ctor_var_reset(Vcounter_onoff___024root* vlSelf);

Vcounter_onoff___024root::Vcounter_onoff___024root(Vcounter_onoff__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounter_onoff___024root___ctor_var_reset(this);
}

void Vcounter_onoff___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounter_onoff___024root::~Vcounter_onoff___024root() {
}
