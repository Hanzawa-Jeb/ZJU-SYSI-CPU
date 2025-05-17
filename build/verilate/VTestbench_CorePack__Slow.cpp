// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_CorePack.h"
#include "VTestbench__Syms.h"

void VTestbench_CorePack___ctor_var_reset(VTestbench_CorePack* vlSelf);

VTestbench_CorePack::VTestbench_CorePack(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench_CorePack___ctor_var_reset(this);
}

void VTestbench_CorePack::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTestbench_CorePack::~VTestbench_CorePack() {
}
