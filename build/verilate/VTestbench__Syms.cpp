// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTestbench__pch.h"
#include "VTestbench.h"
#include "VTestbench___024root.h"
#include "VTestbench___024unit.h"
#include "VTestbench_Mem_ift.h"
#include "VTestbench_CorePack.h"

// FUNCTIONS
VTestbench__Syms::~VTestbench__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTestbench__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTestbench__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTestbench__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTestbench__Syms::VTestbench__Syms(VerilatedContext* contextp, const char* namep, VTestbench* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Testbench__DOT__dut__DOT__dmem_ift{this, Verilated::catName(namep, "Testbench.dut.dmem_ift")}
    , TOP__Testbench__DOT__dut__DOT__imem_ift{this, Verilated::catName(namep, "Testbench.dut.imem_ift")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(140);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Testbench__DOT__dut__DOT__dmem_ift = &TOP__Testbench__DOT__dut__DOT__dmem_ift;
    TOP.__PVT__Testbench__DOT__dut__DOT__imem_ift = &TOP__Testbench__DOT__dut__DOT__imem_ift;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Testbench__DOT__dut__DOT__dmem_ift.__Vconfigure(true);
    TOP__Testbench__DOT__dut__DOT__imem_ift.__Vconfigure(false);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
