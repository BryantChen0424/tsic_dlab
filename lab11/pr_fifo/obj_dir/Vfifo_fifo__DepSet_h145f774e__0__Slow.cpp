// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo_fifo.h"

VL_ATTR_COLD void Vfifo_fifo___stl_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_fifo___stl_sequent__TOP__fifo__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_ready = (8U > ((IData)(vlSelfRef.__PVT__wp) 
                               - (IData)(vlSelfRef.__PVT__rp)));
    vlSelfRef.r_ready = (0U < ((IData)(vlSelfRef.__PVT__wp) 
                               - (IData)(vlSelfRef.__PVT__rp)));
    vlSelfRef.__PVT__w_fire = ((IData)(vlSelfRef.w_ready) 
                               & (IData)(vlSymsp->TOP.w_valid));
    vlSelfRef.__PVT__r_fire = ((IData)(vlSelfRef.r_ready) 
                               & (IData)(vlSymsp->TOP.r_valid));
    vlSelfRef.__PVT__R_nxt[0U] = ((((0U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((0U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[0U]);
    vlSelfRef.__PVT__R_nxt[1U] = ((((1U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((1U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[1U]);
    vlSelfRef.__PVT__R_nxt[2U] = ((((2U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((2U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[2U]);
    vlSelfRef.__PVT__R_nxt[3U] = ((((3U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((3U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[3U]);
    vlSelfRef.__PVT__R_nxt[4U] = ((((4U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((4U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[4U]);
    vlSelfRef.__PVT__R_nxt[5U] = ((((5U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((5U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[5U]);
    vlSelfRef.__PVT__R_nxt[6U] = ((((6U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((6U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[6U]);
    vlSelfRef.__PVT__R_nxt[7U] = ((((7U == (7U & (IData)(vlSelfRef.__PVT__wp))) 
                                    & (IData)(vlSelfRef.__PVT__w_fire)) 
                                   & (~ ((7U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__rp))) 
                                         & (IData)(vlSelfRef.__PVT__r_fire))))
                                   ? (IData)(vlSymsp->TOP.w_data)
                                   : vlSelfRef.R[7U]);
    vlSelfRef.__PVT__wp_nxt = (0xfU & ((IData)(vlSelfRef.__PVT__w_fire)
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wp))
                                        : (IData)(vlSelfRef.__PVT__wp)));
    if (vlSelfRef.__PVT__r_fire) {
        vlSelfRef.__PVT__rp_nxt = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rp)));
        vlSelfRef.__PVT__r_data_nxt = (0xffU & vlSelfRef.R
                                       [(7U & (IData)(vlSelfRef.__PVT__rp))]);
    } else {
        vlSelfRef.__PVT__rp_nxt = (0xfU & (IData)(vlSelfRef.__PVT__rp));
        vlSelfRef.__PVT__r_data_nxt = 0U;
    }
}
