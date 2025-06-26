// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Varray__pch.h"
#include "Varray.h"
#include "Varray___024root.h"
#include "Varray_array.h"

// FUNCTIONS
Varray__Syms::~Varray__Syms()
{
}

Varray__Syms::Varray__Syms(VerilatedContext* contextp, const char* namep, Varray* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__array{this, Verilated::catName(namep, "array")}
{
        // Check resources
        Verilated::stackCheck(45);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.array = &TOP__array;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__array.__Vconfigure(true);
    // Setup scopes
    __Vscope_array.configure(this, name(), "array", "array", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_array.varInsert(__Vfinal,"R", &(TOP__array.R), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,7 ,7,0);
    }
}
