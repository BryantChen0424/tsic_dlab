// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Varray__Syms.h"


VL_ATTR_COLD void Varray___024root__trace_init_sub__TOP__array__0(Varray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varray___024root__trace_init_sub__TOP__0(Varray___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_init_sub__TOP__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("array", VerilatedTracePrefixType::SCOPE_MODULE);
    Varray___024root__trace_init_sub__TOP__array__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Varray___024root__trace_init_sub__TOP__array__0(Varray___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_init_sub__TOP__array__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("R", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("R_nxt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"p_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Varray___024root__trace_init_top(Varray___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_init_top\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varray___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Varray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Varray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varray___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Varray___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Varray___024root__trace_register(Varray___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_register\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Varray___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Varray___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Varray___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Varray___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Varray___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_const_0\n"); );
    // Init
    Varray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varray___024root*>(voidSelf);
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Varray___024root__trace_full_0_sub_0(Varray___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Varray___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_full_0\n"); );
    // Init
    Varray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varray___024root*>(voidSelf);
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Varray___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Varray___024root__trace_full_0_sub_0(Varray___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varray___024root__trace_full_0_sub_0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.w_ready));
    bufp->fullBit(oldp+4,(vlSelfRef.w_valid));
    bufp->fullCData(oldp+5,(vlSelfRef.w_data),8);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__array.clk));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__array.rst_n));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__array.w_ready));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__array.w_valid));
    bufp->fullCData(oldp+10,(vlSymsp->TOP__array.w_data),8);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__array.R[0]),8);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__array.R[1]),8);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__array.R[2]),8);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__array.R[3]),8);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__array.R[4]),8);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__array.R[5]),8);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__array.R[6]),8);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__array.R[7]),8);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__array.R_nxt[0]),8);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__array.R_nxt[1]),8);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__array.R_nxt[2]),8);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__array.R_nxt[3]),8);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__array.R_nxt[4]),8);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__array.R_nxt[5]),8);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__array.R_nxt[6]),8);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__array.R_nxt[7]),8);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__array.p),4);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__array.p_nxt),4);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__array.w_fire));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__array.i),32);
}
