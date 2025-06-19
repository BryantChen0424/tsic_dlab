// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONST2__SYMS_H_
#define VERILATED_VCONST2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconst2.h"

// INCLUDE MODULE CLASSES
#include "Vconst2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconst2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconst2* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconst2___024root              TOP;

    // CONSTRUCTORS
    Vconst2__Syms(VerilatedContext* contextp, const char* namep, Vconst2* modelp);
    ~Vconst2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
