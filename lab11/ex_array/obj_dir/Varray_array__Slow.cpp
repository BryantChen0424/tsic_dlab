// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray__Syms.h"
#include "Varray_array.h"

void Varray_array___ctor_var_reset(Varray_array* vlSelf);

Varray_array::Varray_array(Varray__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varray_array___ctor_var_reset(this);
}

void Varray_array::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varray_array::~Varray_array() {
}
