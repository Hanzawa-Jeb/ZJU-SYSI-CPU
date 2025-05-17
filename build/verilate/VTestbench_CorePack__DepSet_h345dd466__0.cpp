// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_CorePack.h"

std::string VL_TO_STRING(const VTestbench_CoreInfo__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestbench_CorePack::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{pc:" + VL_TO_STRING(obj.__PVT__pc);
        out += ", inst:" + VL_TO_STRING(obj.__PVT__inst);
        out += ", rs1_id:" + VL_TO_STRING(obj.__PVT__rs1_id);
        out += ", rs1_data:" + VL_TO_STRING(obj.__PVT__rs1_data);
        out += ", rs2_id:" + VL_TO_STRING(obj.__PVT__rs2_id);
        out += ", rs2_data:" + VL_TO_STRING(obj.__PVT__rs2_data);
        out += ", alu:" + VL_TO_STRING(obj.__PVT__alu);
        out += ", mem_addr:" + VL_TO_STRING(obj.__PVT__mem_addr);
        out += ", mem_we:" + VL_TO_STRING(obj.__PVT__mem_we);
        out += ", mem_wdata:" + VL_TO_STRING(obj.__PVT__mem_wdata);
        out += ", mem_rdata:" + VL_TO_STRING(obj.__PVT__mem_rdata);
        out += ", rd_we:" + VL_TO_STRING(obj.__PVT__rd_we);
        out += ", rd_id:" + VL_TO_STRING(obj.__PVT__rd_id);
        out += ", rd_data:" + VL_TO_STRING(obj.__PVT__rd_data);
        out += ", br_taken:" + VL_TO_STRING(obj.__PVT__br_taken);
        out += ", npc:" + VL_TO_STRING(obj.__PVT__npc);
        out += "}";
    return out;
}
