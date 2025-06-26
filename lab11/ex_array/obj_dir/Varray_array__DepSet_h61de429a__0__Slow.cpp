// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varray.h for the primary calling header

#include "Varray__pch.h"
#include "Varray_array.h"

VL_ATTR_COLD void Varray_array___eval_initial__TOP__array(Varray_array* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Varray_array___eval_initial__TOP__array\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i = 1U;
    vlSelfRef.i = 2U;
    vlSelfRef.i = 3U;
    vlSelfRef.i = 4U;
    vlSelfRef.i = 5U;
    vlSelfRef.i = 6U;
    vlSelfRef.i = 7U;
    vlSelfRef.i = 8U;
}

VL_ATTR_COLD void Varray_array___stl_sequent__TOP__array__0(Varray_array* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Varray_array___stl_sequent__TOP__array__0\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Varray_array___ctor_var_reset(Varray_array* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Varray_array___ctor_var_reset\n"); );
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->w_ready = VL_RAND_RESET_I(1);
    vlSelf->w_valid = VL_RAND_RESET_I(1);
    vlSelf->w_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->R[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->R_nxt[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->p = VL_RAND_RESET_I(4);
    vlSelf->p_nxt = VL_RAND_RESET_I(4);
    vlSelf->w_fire = VL_RAND_RESET_I(1);
    vlSelf->i = VL_RAND_RESET_I(32);
}
