// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.Testbench__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.Testbench__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Testbench__DOT__cnt;
    __Vdly__Testbench__DOT__cnt = 0;
    // Body
    __Vdly__Testbench__DOT__cnt = vlSelfRef.Testbench__DOT__cnt;
    __Vdly__Testbench__DOT__cnt = ((IData)(1U) + vlSelfRef.Testbench__DOT__cnt);
    if (VL_UNLIKELY((((IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error1) 
                      | (IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error2))))) {
        VL_WRITEF_NX("[CJ] something error\n",0);
        VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/testbench.sv", 62, "");
    } else if (VL_UNLIKELY(((0x30d40U == vlSelfRef.Testbench__DOT__cnt)))) {
        VL_WRITEF_NX("[CJ] no simulation time\n",0);
        VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/testbench.sv", 66, "");
    }
    vlSelfRef.Testbench__DOT__cnt = __Vdly__Testbench__DOT__cnt;
}

void VTestbench___024unit____Vdpiimwrap_cosim_commit_TOP____024unit(IData/*31:0*/ hartid, QData/*63:0*/ dut_pc, IData/*31:0*/ dut_insn, IData/*31:0*/ &cosim_commit__Vfuncrtn);
void VTestbench___024unit____Vdpiimwrap_cosim_judge_TOP____024unit(IData/*31:0*/ hartid, std::string which, IData/*31:0*/ dut_waddr, QData/*63:0*/ dut_wdata, IData/*31:0*/ &cosim_judge__Vfuncrtn);

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_cosim_commit__1__Vfuncout;
    __Vfunc_cosim_commit__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cosim_judge__2__Vfuncout;
    __Vfunc_cosim_judge__2__Vfuncout = 0;
    QData/*63:0*/ __VdlyVal__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0;
    __VdlyVal__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0;
    __VdlyDim0__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0;
    __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v1;
    __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v1 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7;
    __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 = 0;
    SData/*9:0*/ __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7;
    __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 = 0;
    // Body
    __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v1 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 = 0U;
    __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.Testbench__DOT__rstn)))) {
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__i = 0x20U;
    }
    if (vlSelfRef.Testbench__DOT__rstn) {
        if (VL_UNLIKELY(((0U != ([&]() {
                                VTestbench___024unit____Vdpiimwrap_cosim_commit_TOP____024unit(0U, vlSelfRef.Testbench__DOT__cosim_core_info
                                                                                .__PVT__pc, (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                                                                .__PVT__inst), __Vfunc_cosim_commit__1__Vfuncout);
                            }(), __Vfunc_cosim_commit__1__Vfuncout))))) {
            VL_WRITEF_NX("[CJ]           0 Commit Failed\n",0);
            vlSelfRef.Testbench__DOT__difftest__DOT__error1 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                          .__PVT__rd_we))) {
            if (VL_UNLIKELY(((0U != ([&]() {
                                    VTestbench___024unit____Vdpiimwrap_cosim_judge_TOP____024unit(0U, 
                                                                                std::string{"int"}, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                                                                .__PVT__rd_id)), vlSelfRef.Testbench__DOT__cosim_core_info
                                                                                .__PVT__rd_data, __Vfunc_cosim_judge__2__Vfuncout);
                                }(), __Vfunc_cosim_judge__2__Vfuncout))))) {
                VL_WRITEF_NX("[CJ]           0 int register write Judge Failed\n",0);
                vlSelfRef.Testbench__DOT__difftest__DOT__error2 = 1U;
            }
        }
    }
    if (vlSelfRef.Testbench__DOT__rstn) {
        if (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__we_reg) {
            __VdlyVal__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 
                = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataW;
            __VdlyDim0__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 
                = (0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                            >> 7U));
            __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0 = 1U;
        }
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc 
            = vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc_next;
    } else {
        __VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v1 = 1U;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc = 0ULL;
    }
    if ((0x23U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__i = 8U;
        if ((1U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 
                = (0xffU & (IData)(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                   .__PVT__wdata));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0 = 1U;
        }
        if ((2U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 8U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1 = 1U;
        }
        if ((4U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x10U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2 = 1U;
        }
        if ((8U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x18U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3 = 1U;
        }
        if ((0x10U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x20U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4 = 1U;
        }
        if ((0x20U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x28U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5 = 1U;
        }
        if ((0x40U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x30U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6 = 1U;
        }
        if ((0x80U & vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
             .__PVT__wmask)) {
            __VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 
                = (0xffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                    .__PVT__wdata >> 0x38U)));
            __VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 
                = (0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                     .__PVT__waddr 
                                     >> 3U)));
            __VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7 = 1U;
        }
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0) {
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[__VdlyDim0__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0] 
            = __VdlyVal__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v0;
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup__v1) {
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[1U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[2U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[3U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[4U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[5U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[6U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[7U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[8U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[9U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xaU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xbU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xcU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xdU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xeU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0xfU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x10U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x11U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x12U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x13U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x14U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x15U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x16U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x17U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x18U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x19U] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1aU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1bU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1cU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1dU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1eU] = 0ULL;
        vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0x1fU] = 0ULL;
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0]) 
               | (IData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v0)));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v2)) 
                  << 0x10U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v3)) 
                  << 0x18U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v4)) 
                  << 0x20U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v5)) 
                  << 0x28U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v6)) 
                  << 0x30U));
    }
    if (__VdlySet__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7) {
        vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem[__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7] 
            = ((0xffffffffffffffULL & vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                [__VdlyDim0__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7]) 
               | ((QData)((IData)(__VdlyVal__Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem__v7)) 
                  << 0x38U));
    }
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
