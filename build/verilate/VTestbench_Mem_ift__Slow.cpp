// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Mem_ift.h"
#include "VTestbench__Syms.h"

void VTestbench_Mem_ift___ctor_var_reset(VTestbench_Mem_ift* vlSelf);

VTestbench_Mem_ift::VTestbench_Mem_ift(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench_Mem_ift___ctor_var_reset(this);
}

void VTestbench_Mem_ift::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTestbench_Mem_ift::~VTestbench_Mem_ift() {
}
