// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_COREPACK_H_
#define VERILATED_VTESTBENCH_COREPACK_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VTestbench_CorePack.h"


class VTestbench__Syms;
struct VTestbench_CoreInfo__struct__0 {
    QData/*63:0*/ __PVT__pc;
    QData/*63:0*/ __PVT__inst;
    QData/*63:0*/ __PVT__rs1_id;
    QData/*63:0*/ __PVT__rs1_data;
    QData/*63:0*/ __PVT__rs2_id;
    QData/*63:0*/ __PVT__rs2_data;
    QData/*63:0*/ __PVT__alu;
    QData/*63:0*/ __PVT__mem_addr;
    QData/*63:0*/ __PVT__mem_we;
    QData/*63:0*/ __PVT__mem_wdata;
    QData/*63:0*/ __PVT__mem_rdata;
    QData/*63:0*/ __PVT__rd_we;
    QData/*63:0*/ __PVT__rd_id;
    QData/*63:0*/ __PVT__rd_data;
    QData/*63:0*/ __PVT__br_taken;
    QData/*63:0*/ __PVT__npc;

    bool operator==(const VTestbench_CoreInfo__struct__0& rhs) const {
        return __PVT__pc == rhs.__PVT__pc
            && __PVT__inst == rhs.__PVT__inst
            && __PVT__rs1_id == rhs.__PVT__rs1_id
            && __PVT__rs1_data == rhs.__PVT__rs1_data
            && __PVT__rs2_id == rhs.__PVT__rs2_id
            && __PVT__rs2_data == rhs.__PVT__rs2_data
            && __PVT__alu == rhs.__PVT__alu
            && __PVT__mem_addr == rhs.__PVT__mem_addr
            && __PVT__mem_we == rhs.__PVT__mem_we
            && __PVT__mem_wdata == rhs.__PVT__mem_wdata
            && __PVT__mem_rdata == rhs.__PVT__mem_rdata
            && __PVT__rd_we == rhs.__PVT__rd_we
            && __PVT__rd_id == rhs.__PVT__rd_id
            && __PVT__rd_data == rhs.__PVT__rd_data
            && __PVT__br_taken == rhs.__PVT__br_taken
            && __PVT__npc == rhs.__PVT__npc;
    }
    bool operator!=(const VTestbench_CoreInfo__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_CoreInfo__struct__0& rhs) const {
        return std::tie(__PVT__pc, __PVT__inst, __PVT__rs1_id, __PVT__rs1_data, __PVT__rs2_id, __PVT__rs2_data, __PVT__alu, __PVT__mem_addr, __PVT__mem_we, __PVT__mem_wdata, __PVT__mem_rdata, __PVT__rd_we, __PVT__rd_id, __PVT__rd_data, __PVT__br_taken, __PVT__npc)
            <  std::tie(rhs.__PVT__pc, rhs.__PVT__inst, rhs.__PVT__rs1_id, rhs.__PVT__rs1_data, rhs.__PVT__rs2_id, rhs.__PVT__rs2_data, rhs.__PVT__alu, rhs.__PVT__mem_addr, rhs.__PVT__mem_we, rhs.__PVT__mem_wdata, rhs.__PVT__mem_rdata, rhs.__PVT__rd_we, rhs.__PVT__rd_id, rhs.__PVT__rd_data, rhs.__PVT__br_taken, rhs.__PVT__npc);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_CoreInfo__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VTestbench_CorePack final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench_CorePack(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench_CorePack();
    VL_UNCOPYABLE(VTestbench_CorePack);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTestbench_CoreInfo__struct__0& obj);

#endif  // guard
