// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Mem_ift.h"

VL_ATTR_COLD void VTestbench_Mem_ift___ctor_var_reset(VTestbench_Mem_ift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift___ctor_var_reset\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->r_request_bits.__PVT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->r_reply_bits.__PVT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->r_reply_bits.__PVT__rresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__r_reply_ready = VL_RAND_RESET_I(1);
    vlSelf->w_request_bits.__PVT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->w_request_bits.__PVT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->w_request_bits.__PVT__wmask = VL_RAND_RESET_I(8);
    vlSelf->w_request_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_reply_ready = VL_RAND_RESET_I(1);
}
