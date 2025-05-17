// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/cosim.v:19:29
    extern int cosim_commit(unsigned int hartid, unsigned long long dut_pc, unsigned int dut_insn);
    // DPI import at /mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/cosim.v:32:30
    extern void cosim_init();
    // DPI import at /mnt/d/sysI/sys1-sp25/src/project/../../repo/sys-project/sim/cosim.v:25:29
    extern int cosim_judge(unsigned int hartid, const char* which, unsigned int dut_waddr, unsigned long long dut_wdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
