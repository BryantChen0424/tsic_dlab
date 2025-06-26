// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo_fifo.h"

VL_INLINE_OPT void Vfifo_fifo___ico_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_fifo___ico_sequent__TOP__fifo__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vfifo_fifo___nba_sequent__TOP__fifo__0(Vfifo_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfifo_fifo___nba_sequent__TOP__fifo__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__R__v0;
    __VdlyVal__R__v0 = 0;
    CData/*0:0*/ __VdlySet__R__v0;
    __VdlySet__R__v0 = 0;
    CData/*7:0*/ __VdlyVal__R__v1;
    __VdlyVal__R__v1 = 0;
    CData/*7:0*/ __VdlyVal__R__v2;
    __VdlyVal__R__v2 = 0;
    CData/*7:0*/ __VdlyVal__R__v3;
    __VdlyVal__R__v3 = 0;
    CData/*7:0*/ __VdlyVal__R__v4;
    __VdlyVal__R__v4 = 0;
    CData/*7:0*/ __VdlyVal__R__v5;
    __VdlyVal__R__v5 = 0;
    CData/*7:0*/ __VdlyVal__R__v6;
    __VdlyVal__R__v6 = 0;
    CData/*7:0*/ __VdlyVal__R__v7;
    __VdlyVal__R__v7 = 0;
    CData/*0:0*/ __VdlySet__R__v8;
    __VdlySet__R__v8 = 0;
    // Body
    __VdlySet__R__v0 = 0U;
    __VdlySet__R__v8 = 0U;
    vlSelfRef.__PVT__i = 8U;
    if (vlSymsp->TOP.rst_n) {
        __VdlyVal__R__v0 = vlSelfRef.__PVT__R_nxt[0U];
        __VdlySet__R__v0 = 1U;
        __VdlyVal__R__v1 = vlSelfRef.__PVT__R_nxt[1U];
        __VdlyVal__R__v2 = vlSelfRef.__PVT__R_nxt[2U];
        __VdlyVal__R__v3 = vlSelfRef.__PVT__R_nxt[3U];
        __VdlyVal__R__v4 = vlSelfRef.__PVT__R_nxt[4U];
        __VdlyVal__R__v5 = vlSelfRef.__PVT__R_nxt[5U];
        __VdlyVal__R__v6 = vlSelfRef.__PVT__R_nxt[6U];
        __VdlyVal__R__v7 = vlSelfRef.__PVT__R_nxt[7U];
        vlSelfRef.r_data = vlSelfRef.__PVT__r_data_nxt;
        vlSelfRef.__PVT__rp = vlSelfRef.__PVT__rp_nxt;
        vlSelfRef.__PVT__wp = vlSelfRef.__PVT__wp_nxt;
    } else {
        __VdlySet__R__v8 = 1U;
        vlSelfRef.r_data = 0U;
        vlSelfRef.__PVT__rp = 0U;
        vlSelfRef.__PVT__wp = 0U;
    }
    if (__VdlySet__R__v0) {
        vlSelfRef.R[0U] = __VdlyVal__R__v0;
        vlSelfRef.R[1U] = __VdlyVal__R__v1;
        vlSelfRef.R[2U] = __VdlyVal__R__v2;
        vlSelfRef.R[3U] = __VdlyVal__R__v3;
        vlSelfRef.R[4U] = __VdlyVal__R__v4;
        vlSelfRef.R[5U] = __VdlyVal__R__v5;
        vlSelfRef.R[6U] = __VdlyVal__R__v6;
        vlSelfRef.R[7U] = __VdlyVal__R__v7;
    }
    if (__VdlySet__R__v8) {
        vlSelfRef.R[0U] = 0U;
        vlSelfRef.R[1U] = 0U;
        vlSelfRef.R[2U] = 0U;
        vlSelfRef.R[3U] = 0U;
        vlSelfRef.R[4U] = 0U;
        vlSelfRef.R[5U] = 0U;
        vlSelfRef.R[6U] = 0U;
        vlSelfRef.R[7U] = 0U;
    }
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
