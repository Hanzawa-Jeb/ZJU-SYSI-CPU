// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

extern const VlWide<16>/*511:0*/ VTestbench__ConstPool__CONST_hf02b6ac3_0;
void VTestbench___024unit____Vdpiimwrap_cosim_init_TOP____024unit();

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(16, VTestbench__ConstPool__CONST_hf02b6ac3_0));
    vlSymsp->_traceDumpOpen();
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x63617365U;
    __Vtemp_1[2U] = 0x74657374U;
    VL_READMEM_N(true, 64, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem)
                 , 0, ~0ULL);
    VTestbench___024unit____Vdpiimwrap_cosim_init_TOP____024unit();
    vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits.__PVT__rresp = 0U;
    vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits.__PVT__rresp = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___stl_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__pc 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc;
    vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits.__PVT__raddr 
        = (0xfffffffffffffff8ULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc);
    vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits.__PVT__rdata 
        = vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
        [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                            .__PVT__raddr >> 3U)))];
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
        = ((1U & (IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc 
                          >> 2U))) ? (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                                              .__PVT__rdata 
                                              >> 0x20U))
            : (IData)(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                      .__PVT__rdata));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__inst 
        = (QData)((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rs1_id 
        = (QData)((IData)((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                    >> 0xfU))));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rs2_id 
        = (QData)((IData)((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                    >> 0x14U))));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__mem_we 
        = (QData)((IData)((0x23U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rd_id 
        = (QData)((IData)((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                    >> 7U))));
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__we_reg 
        = ((3U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
           | ((0x13U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
              | ((0x17U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                 | ((0x1bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                    | ((0x33U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                       | ((0x37U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                          | ((0x3bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                             | ((0x6fU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) 
                                | (0x67U == (0x7fU 
                                             & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))))))))));
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
    if ((0x40U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
        if ((0x20U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
            if ((0x10U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else if ((8U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 3U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 7U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 2U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 4U;
                        } else {
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                        }
                        if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                        }
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
            } else if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 3U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 7U;
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                }
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op 
                            = ((0x4000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                ? ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                    ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                        ? 6U : 5U) : 
                                   ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                     ? 4U : 3U)) : 
                               ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                 ? 0U : ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                          ? 2U : 1U)));
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 2U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 3U;
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
            }
        } else {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
        }
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
    } else if ((0x20U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
        if ((0x10U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
            if ((8U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 4U;
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
            } else {
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op 
                            = ((0x4000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                ? ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                    ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                     ? ((0x40000000U 
                                         & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                         ? 9U : 8U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                    ? 7U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                     ? 1U
                                                     : 0U))));
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 1U;
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
            }
        } else {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
            if ((8U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                }
                if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op 
                        = ((0x4000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                            ? 0U : ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                     ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                         ? 1U : 2U)
                                     : ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                         ? 3U : 4U)));
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 2U;
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
            } else {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            }
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
        }
    } else {
        if ((0x10U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
            if ((8U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            } else if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 2U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 4U;
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
                }
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
            } else {
                if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 1U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op 
                            = ((0x4000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                ? ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                    ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                     ? ((0x40000000U 
                                         & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                         ? 9U : 8U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                    ? 7U
                                                    : 0U)));
                    } else {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                    }
                    if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    }
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
                }
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
            }
        } else {
            if ((8U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
            } else if ((4U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
            } else if ((2U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                if ((1U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)) {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 2U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op 
                        = ((0x4000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                            ? ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                    ? 0U : 7U) : ((0x1000U 
                                                   & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                   ? 6U
                                                   : 5U))
                            : ((0x2000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                ? ((0x1000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                    ? 1U : 2U) : ((0x1000U 
                                                   & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)
                                                   ? 3U
                                                   : 4U)));
                } else {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
                }
                if ((1U & (~ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
                    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                }
            } else {
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op = 0U;
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op = 0U;
            }
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op = 0U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel = 1U;
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op = 1U;
        }
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel = 2U;
    }
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1 
        = ((0U == (0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                            >> 0xfU))) ? 0ULL : vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup
           [(0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                      >> 0xfU))]);
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2 
        = ((0U == (0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                            >> 0x14U))) ? 0ULL : vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup
           [(0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                      >> 0x14U))]);
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rd_we 
        = (QData)((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__we_reg));
    if ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))) {
        if ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))) {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm = 0ULL;
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))) {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffffffffff0001fULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | ((QData)((IData)(((0x7f80U & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                   >> 5U)) 
                                       | ((0x40U & 
                                           (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                            >> 0xeU)) 
                                          | (0x3fU 
                                             & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                >> 0x19U)))))) 
                      << 5U));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffffffffffffe0ULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | (IData)((IData)((0x1eU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                               >> 0x14U)))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffffULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | ((- (QData)((IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                          >> 0x1fU)))) 
                      << 0x14U));
        } else {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xffffffff80000000ULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | (IData)((IData)((0x7ffff000U & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0x7fffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | (((QData)((IData)((- (IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                   >> 0x1fU))))) 
                       << 0x20U) | ((QData)((IData)(
                                                    (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                     >> 0x1fU))) 
                                    << 0x1fU)));
        }
    } else if ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))) {
        if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))) {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffffffffffff001ULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | ((QData)((IData)(((0x400U & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                  << 3U)) 
                                       | ((0x3f0U & 
                                           (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                            >> 0x15U)) 
                                          | (0xfU & 
                                             (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                              >> 8U)))))) 
                      << 1U));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = (0xfffffffffffffffeULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm);
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = ((0xfffULL & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm) 
                   | ((- (QData)((IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                          >> 0x1fU)))) 
                      << 0xcU));
        } else {
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
                = (((- (QData)((IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                      >> 7U))))));
        }
    } else {
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm 
            = ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op))
                ? (((- (QData)((IData)((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)((0x7ffU 
                                                & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                                   >> 0x14U)))))
                : 0ULL);
    }
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rs1_data 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
        = ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel))
            ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel))
                ? 0ULL : vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc)
            : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel))
                ? vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1
                : 0ULL));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rs2_data 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__br_taken 
        = ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op))
            ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op))
                ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op)) 
                   || (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1 
                       >= vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2))
                : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op))
                    ? (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1 
                       < vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)
                    : VL_GTES_IQQ(64, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)))
            : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op))
                ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op))
                    ? VL_LTS_IQQ(64, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)
                    : (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1 
                       != vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2))
                : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op)) 
                   && (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1 
                       == vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2))));
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2 
        = ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel))
            ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel))
                ? 0ULL : vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm)
            : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel))
                ? vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2
                : 0ULL));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__br_taken 
        = (QData)((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__br_taken));
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res 
        = ((8U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? 0ULL : (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               VL_SHIFTRS_III(32,32,5, (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1), 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))))))
                    : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? (QData)((IData)(((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                           >> (0x1fU 
                                               & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))))
                        : (QData)((IData)(((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                           << (0x1fU 
                                               & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))))))
                : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? (((QData)((IData)((- (IData)(
                                                       (((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                                         - (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)) 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                                         - (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))))
                        : (((QData)((IData)((- (IData)(
                                                       (((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                                         + (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)) 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1) 
                                                         + (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2))))))
                    : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? VL_SHIFTRS_QQI(64,64,5, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1, 
                                         (0x1fU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))
                        : (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           >> (0x1fU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2))))))
            : ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           << (0x1fU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))
                        : ((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                            < vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)
                            ? 1ULL : 0ULL)) : ((1U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                                                ? (
                                                   VL_LTS_IQQ(64, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1, vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)
                                                    ? 1ULL
                                                    : 0ULL)
                                                : (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                                                   ^ vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))
                : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           | vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)
                        : (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2))
                    : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op))
                        ? (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           - vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)
                        : (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1 
                           + vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2)))));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__alu 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res;
    vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__waddr 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc_next 
        = ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__br_taken)
            ? vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res
            : (4ULL + vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc));
    vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits.__PVT__raddr 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res;
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__npc 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc_next;
    if ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
        if ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
            if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
                vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                    = (0xffU & ((IData)(0xfU) << (7U 
                                                  & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                    = ((QData)((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)) 
                       << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                    << 3U)));
            } else {
                vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                    = (0xffU & ((IData)(3U) << (7U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
                vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                    = ((QData)((IData)((0xffffU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)))) 
                       << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                    << 3U)));
            }
        } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
            vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                = ((QData)((IData)((0xffU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)))) 
                   << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                << 3U)));
        } else {
            vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                = ((QData)((IData)((0xffU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)))) 
                   << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                << 3U)));
        }
    } else if ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
        if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
            vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                = (0xffU & ((IData)(3U) << (7U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                = ((QData)((IData)((0xffffU & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)))) 
                   << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                << 3U)));
        } else {
            vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
                = (0xffU & ((IData)(0xfU) << (7U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))));
            vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
                = ((QData)((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2)) 
                   << (0x38U & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                << 3U)));
        }
    } else if ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))) {
        vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
            = (0xffU & 0xffU);
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data 
            = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2;
    } else {
        vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wmask 
            = (0xffU & 0U);
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data = 0ULL;
    }
    vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits.__PVT__wdata 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data;
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__mem_addr 
        = vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
        .__PVT__raddr;
    vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits.__PVT__rdata 
        = vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
        [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                            .__PVT__raddr >> 3U)))];
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__truncatedData 
        = ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
            ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                    ? (QData)((IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                       .__PVT__rdata 
                                       >> (0x38U & 
                                           ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                            << 3U)))))
                    : (QData)((IData)((0xffffU & (IData)(
                                                         (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                          .__PVT__rdata 
                                                          >> 
                                                          (0x38U 
                                                           & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                              << 3U))))))))
                : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                    ? (QData)((IData)((0xffU & (IData)(
                                                       (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                        .__PVT__rdata 
                                                        >> 
                                                        (0x38U 
                                                         & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                            << 3U)))))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                          .__PVT__rdata 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              (0x38U 
                                                               & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                                  << 3U)))))))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                             .__PVT__rdata 
                                                             >> 
                                                             (0x38U 
                                                              & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                                 << 3U))))))))))
            : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                          .__PVT__rdata 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(0xfU) 
                                                              + 
                                                              (0x38U 
                                                               & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                                  << 3U)))))))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                                .__PVT__rdata 
                                                                >> 
                                                                (0x38U 
                                                                 & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                                    << 3U))))))))
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                               .__PVT__rdata 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(0x1fU) 
                                                                   + 
                                                                   (0x38U 
                                                                    & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                                       << 3U))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                                                     .__PVT__rdata 
                                                     >> 
                                                     (0x38U 
                                                      & ((IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res) 
                                                         << 3U)))))))
                : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                    ? vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                   .__PVT__rdata : 0ULL)));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__mem_wdata 
        = vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
        .__PVT__wdata;
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__mem_rdata 
        = vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
        .__PVT__rdata;
    vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataW 
        = ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel))
            ? ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel))
                ? (4ULL + vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc)
                : vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__truncatedData)
            : ((1U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel))
                ? vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res
                : 0ULL));
    vlSelfRef.Testbench__DOT__cosim_core_info.__PVT__rd_data 
        = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataW;
}
