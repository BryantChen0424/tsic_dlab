// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray_array.h"

VL_INLINE_OPT void Varray_array___ico_sequent__TOP__array__0(Varray_array* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Varray_array___ico_sequent__TOP__array__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_fire = ((IData)(vlSelfRef.w_ready) 
                        & (IData)(vlSelfRef.w_valid));
    vlSelfRef.R_nxt[0U] = (((0U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[0U]);
    vlSelfRef.R_nxt[1U] = (((1U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[1U]);
    vlSelfRef.R_nxt[2U] = (((2U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[2U]);
    vlSelfRef.R_nxt[3U] = (((3U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[3U]);
    vlSelfRef.R_nxt[4U] = (((4U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[4U]);
    vlSelfRef.R_nxt[5U] = (((5U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[5U]);
    vlSelfRef.R_nxt[6U] = (((6U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[6U]);
    vlSelfRef.R_nxt[7U] = (((7U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[7U]);
    vlSelfRef.p_nxt = (0xfU & ((IData)(vlSelfRef.w_fire)
                                ? ((IData)(1U) + (IData)(vlSelfRef.p))
                                : (IData)(vlSelfRef.p)));
}

VL_INLINE_OPT void Varray_array___nba_sequent__TOP__array__0(Varray_array* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Varray_array___nba_sequent__TOP__array__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if (vlSelfRef.rst_n) {
        vlSelfRef.i = 1U;
        vlSelfRef.i = 2U;
        vlSelfRef.i = 3U;
        vlSelfRef.i = 4U;
        vlSelfRef.i = 5U;
        vlSelfRef.i = 6U;
        vlSelfRef.i = 7U;
        vlSelfRef.i = 8U;
        __VdlyVal__R__v0 = vlSelfRef.R_nxt[0U];
        __VdlySet__R__v0 = 1U;
        __VdlyVal__R__v1 = vlSelfRef.R_nxt[1U];
        __VdlyVal__R__v2 = vlSelfRef.R_nxt[2U];
        __VdlyVal__R__v3 = vlSelfRef.R_nxt[3U];
        __VdlyVal__R__v4 = vlSelfRef.R_nxt[4U];
        __VdlyVal__R__v5 = vlSelfRef.R_nxt[5U];
        __VdlyVal__R__v6 = vlSelfRef.R_nxt[6U];
        __VdlyVal__R__v7 = vlSelfRef.R_nxt[7U];
        vlSelfRef.p = vlSelfRef.p_nxt;
    } else {
        vlSelfRef.i = 1U;
        vlSelfRef.i = 2U;
        vlSelfRef.i = 3U;
        vlSelfRef.i = 4U;
        vlSelfRef.i = 5U;
        vlSelfRef.i = 6U;
        vlSelfRef.i = 7U;
        vlSelfRef.i = 8U;
        __VdlySet__R__v8 = 1U;
        vlSelfRef.p = 0U;
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
    vlSelfRef.w_ready = (1U & (~ ((IData)(vlSelfRef.p) 
                                  >> 3U)));
    vlSelfRef.w_fire = ((IData)(vlSelfRef.w_ready) 
                        & (IData)(vlSelfRef.w_valid));
    vlSelfRef.R_nxt[0U] = (((0U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[0U]);
    vlSelfRef.R_nxt[1U] = (((1U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[1U]);
    vlSelfRef.R_nxt[2U] = (((2U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[2U]);
    vlSelfRef.R_nxt[3U] = (((3U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[3U]);
    vlSelfRef.R_nxt[4U] = (((4U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[4U]);
    vlSelfRef.R_nxt[5U] = (((5U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[5U]);
    vlSelfRef.R_nxt[6U] = (((6U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[6U]);
    vlSelfRef.R_nxt[7U] = (((7U == (IData)(vlSelfRef.p)) 
                            & (IData)(vlSelfRef.w_fire))
                            ? (IData)(vlSelfRef.w_data)
                            : vlSelfRef.R[7U]);
    vlSelfRef.p_nxt = (0xfU & ((IData)(vlSelfRef.w_fire)
                                ? ((IData)(1U) + (IData)(vlSelfRef.p))
                                : (IData)(vlSelfRef.p)));
}
