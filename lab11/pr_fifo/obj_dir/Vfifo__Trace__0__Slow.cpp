// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo__Syms.h"


VL_ATTR_COLD void Vfifo___024root__trace_init_sub__TOP__fifo__0(Vfifo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfifo___024root__trace_init_sub__TOP__0(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_init_sub__TOP__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfifo___024root__trace_init_sub__TOP__fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vfifo___024root__trace_init_sub__TOP__fifo__0(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_init_sub__TOP__fifo__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("R", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("R_nxt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"r_data_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"wp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"wp_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"rp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"rp_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vfifo___024root__trace_init_top(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_init_top\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfifo___024root__trace_register(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_register\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_const_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vfifo___024root__trace_full_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_full_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfifo___024root__trace_full_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_full_0_sub_0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__fifo.__PVT__R_nxt[0]),8);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__fifo.__PVT__R_nxt[1]),8);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__fifo.__PVT__R_nxt[2]),8);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__fifo.__PVT__R_nxt[3]),8);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__fifo.__PVT__R_nxt[4]),8);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__fifo.__PVT__R_nxt[5]),8);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__fifo.__PVT__R_nxt[6]),8);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__fifo.__PVT__R_nxt[7]),8);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__fifo.__PVT__r_data_nxt),8);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__fifo.__PVT__wp_nxt),4);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__fifo.__PVT__rp_nxt),4);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__fifo.__PVT__w_fire));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__fifo.__PVT__r_fire));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__fifo.w_ready));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__fifo.r_ready));
    bufp->fullCData(oldp+16,(vlSymsp->TOP__fifo.r_data),8);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__fifo.__PVT__wp),4);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__fifo.__PVT__rp),4);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__fifo.__PVT__i),32);
    bufp->fullBit(oldp+20,(vlSelfRef.clk));
    bufp->fullBit(oldp+21,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+22,(vlSelfRef.w_ready));
    bufp->fullBit(oldp+23,(vlSelfRef.w_valid));
    bufp->fullCData(oldp+24,(vlSelfRef.w_data),8);
    bufp->fullBit(oldp+25,(vlSelfRef.r_ready));
    bufp->fullBit(oldp+26,(vlSelfRef.r_valid));
    bufp->fullCData(oldp+27,(vlSelfRef.r_data),8);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__fifo.R[0]),8);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__fifo.R[1]),8);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__fifo.R[2]),8);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__fifo.R[3]),8);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__fifo.R[4]),8);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__fifo.R[5]),8);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__fifo.R[6]),8);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__fifo.R[7]),8);
}
