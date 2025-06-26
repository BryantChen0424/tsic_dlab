// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo_fifo.h"

VL_ATTR_COLD void Vfifo_fifo___eval_initial__TOP__fifo(Vfifo_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_fifo___eval_initial__TOP__fifo\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i = 8U;
}

VL_ATTR_COLD void Vfifo_fifo___ctor_var_reset(Vfifo_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_fifo___ctor_var_reset\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->w_ready = VL_RAND_RESET_I(1);
    vlSelf->w_valid = VL_RAND_RESET_I(1);
    vlSelf->w_data = VL_RAND_RESET_I(8);
    vlSelf->r_ready = VL_RAND_RESET_I(1);
    vlSelf->r_valid = VL_RAND_RESET_I(1);
    vlSelf->r_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->R[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__R_nxt[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__r_data_nxt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__wp = VL_RAND_RESET_I(4);
    vlSelf->__PVT__wp_nxt = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rp = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rp_nxt = VL_RAND_RESET_I(4);
    vlSelf->__PVT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
}
