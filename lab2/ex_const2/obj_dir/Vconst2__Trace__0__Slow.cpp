// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconst2__Syms.h"


VL_ATTR_COLD void Vconst2___024root__trace_init_sub__TOP__0(Vconst2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_init_sub__TOP__0\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"o_auto_expand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"o_auto_cut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"o_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("const2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"o_auto_expand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"o_auto_cut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"o_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconst2___024root__trace_init_top(Vconst2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_init_top\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconst2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconst2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconst2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconst2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconst2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconst2___024root__trace_register(Vconst2___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_register\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconst2___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconst2___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconst2___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconst2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconst2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_const_0\n"); );
    // Init
    Vconst2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst2___024root*>(voidSelf);
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vconst2___024root__trace_full_0_sub_0(Vconst2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconst2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_full_0\n"); );
    // Init
    Vconst2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst2___024root*>(voidSelf);
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconst2___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconst2___024root__trace_full_0_sub_0(Vconst2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst2___024root__trace_full_0_sub_0\n"); );
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.o_auto_expand),8);
    bufp->fullCData(oldp+2,(vlSelfRef.o_auto_cut),8);
    bufp->fullCData(oldp+3,(vlSelfRef.o_neg),8);
}
