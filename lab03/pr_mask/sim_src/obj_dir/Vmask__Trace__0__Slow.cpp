// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmask__Syms.h"


VL_ATTR_COLD void Vmask___024root__trace_init_sub__TOP__0(Vmask___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_init_sub__TOP__0\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mask", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmask___024root__trace_init_top(Vmask___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_init_top\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmask___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmask___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmask___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmask___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmask___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmask___024root__trace_register(Vmask___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_register\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmask___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmask___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmask___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmask___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmask___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_const_0\n"); );
    // Init
    Vmask___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmask___024root*>(voidSelf);
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmask___024root__trace_full_0_sub_0(Vmask___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmask___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_full_0\n"); );
    // Init
    Vmask___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmask___024root*>(voidSelf);
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmask___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmask___024root__trace_full_0_sub_0(Vmask___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask___024root__trace_full_0_sub_0\n"); );
    Vmask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.o),8);
    bufp->fullCData(oldp+3,(vlSelfRef.mask__DOT__a),8);
    bufp->fullCData(oldp+4,(vlSelfRef.mask__DOT__o),8);
}
