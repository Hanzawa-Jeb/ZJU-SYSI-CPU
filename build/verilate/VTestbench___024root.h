// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VTestbench_CorePack.h"
#include "VTestbench_Mem_ift.h"
class VTestbench___024unit;


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    VTestbench___024unit* __PVT____024unit;
    VTestbench_CorePack* __PVT__CorePack;
    VTestbench_Mem_ift* __PVT__Testbench__DOT__dut__DOT__imem_ift;
    VTestbench_Mem_ift* __PVT__Testbench__DOT__dut__DOT__dmem_ift;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Testbench__DOT__clk;
    CData/*0:0*/ Testbench__DOT__rstn;
    CData/*0:0*/ Testbench__DOT__dut__DOT__core__DOT__we_reg;
    CData/*2:0*/ Testbench__DOT__dut__DOT__core__DOT__immgen_op;
    CData/*3:0*/ Testbench__DOT__dut__DOT__core__DOT__alu_op;
    CData/*2:0*/ Testbench__DOT__dut__DOT__core__DOT__cmp_op;
    CData/*1:0*/ Testbench__DOT__dut__DOT__core__DOT__alu_asel;
    CData/*1:0*/ Testbench__DOT__dut__DOT__core__DOT__alu_bsel;
    CData/*1:0*/ Testbench__DOT__dut__DOT__core__DOT__wb_sel;
    CData/*2:0*/ Testbench__DOT__dut__DOT__core__DOT__mem_op;
    CData/*0:0*/ Testbench__DOT__dut__DOT__core__DOT__br_taken;
    CData/*0:0*/ Testbench__DOT__difftest__DOT__error1;
    CData/*0:0*/ Testbench__DOT__difftest__DOT__error2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Testbench__DOT__cnt;
    IData/*31:0*/ Testbench__DOT__dut__DOT__core__DOT__inst;
    IData/*31:0*/ Testbench__DOT__dut__DOT__core__DOT__registers__DOT__i;
    IData/*31:0*/ Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__pc;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__pc_next;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__write_data;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__ALUinput1;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__ALUinput2;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__alu_res;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__imm;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__dataW;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__dataR1;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__dataR2;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__truncatedData;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__mux3__DOT__I01;
    QData/*63:0*/ Testbench__DOT__dut__DOT__core__DOT__mux3__DOT__I23;
    VlUnpacked<QData/*63:0*/, 32> Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup;
    VlUnpacked<QData/*63:0*/, 1024> Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VTestbench_CoreInfo__struct__0 Testbench__DOT__cosim_core_info;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench___024root(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench___024root();
    VL_UNCOPYABLE(VTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
