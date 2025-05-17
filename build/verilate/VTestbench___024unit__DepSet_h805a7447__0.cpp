// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024unit.h"

extern "C" int cosim_commit(unsigned int hartid, unsigned long long dut_pc, unsigned int dut_insn);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_cosim_commit_TOP____024unit(IData/*31:0*/ hartid, QData/*63:0*/ dut_pc, IData/*31:0*/ dut_insn, IData/*31:0*/ &cosim_commit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_cosim_commit_TOP____024unit\n"); );
    // Body
    unsigned int hartid__Vcvt;
    for (size_t hartid__Vidx = 0; hartid__Vidx < 1; ++hartid__Vidx) hartid__Vcvt = hartid;
    unsigned long long dut_pc__Vcvt;
    for (size_t dut_pc__Vidx = 0; dut_pc__Vidx < 1; ++dut_pc__Vidx) dut_pc__Vcvt = dut_pc;
    unsigned int dut_insn__Vcvt;
    for (size_t dut_insn__Vidx = 0; dut_insn__Vidx < 1; ++dut_insn__Vidx) dut_insn__Vcvt = dut_insn;
    int cosim_commit__Vfuncrtn__Vcvt;
    cosim_commit__Vfuncrtn__Vcvt = cosim_commit(hartid__Vcvt, dut_pc__Vcvt, dut_insn__Vcvt);
    cosim_commit__Vfuncrtn = cosim_commit__Vfuncrtn__Vcvt;
}

extern "C" int cosim_judge(unsigned int hartid, const char* which, unsigned int dut_waddr, unsigned long long dut_wdata);

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_cosim_judge_TOP____024unit(IData/*31:0*/ hartid, std::string which, IData/*31:0*/ dut_waddr, QData/*63:0*/ dut_wdata, IData/*31:0*/ &cosim_judge__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_cosim_judge_TOP____024unit\n"); );
    // Body
    unsigned int hartid__Vcvt;
    for (size_t hartid__Vidx = 0; hartid__Vidx < 1; ++hartid__Vidx) hartid__Vcvt = hartid;
    const char* which__Vcvt;
    for (size_t which__Vidx = 0; which__Vidx < 1; ++which__Vidx) which__Vcvt = which.c_str();
    unsigned int dut_waddr__Vcvt;
    for (size_t dut_waddr__Vidx = 0; dut_waddr__Vidx < 1; ++dut_waddr__Vidx) dut_waddr__Vcvt = dut_waddr;
    unsigned long long dut_wdata__Vcvt;
    for (size_t dut_wdata__Vidx = 0; dut_wdata__Vidx < 1; ++dut_wdata__Vidx) dut_wdata__Vcvt = dut_wdata;
    int cosim_judge__Vfuncrtn__Vcvt;
    cosim_judge__Vfuncrtn__Vcvt = cosim_judge(hartid__Vcvt, which__Vcvt, dut_waddr__Vcvt, dut_wdata__Vcvt);
    cosim_judge__Vfuncrtn = cosim_judge__Vfuncrtn__Vcvt;
}

extern "C" void cosim_init();

VL_INLINE_OPT void VTestbench___024unit____Vdpiimwrap_cosim_init_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench___024unit____Vdpiimwrap_cosim_init_TOP____024unit\n"); );
    // Body
    cosim_init();
}
