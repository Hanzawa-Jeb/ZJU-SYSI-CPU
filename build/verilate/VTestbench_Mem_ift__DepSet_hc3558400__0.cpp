// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Mem_ift.h"

std::string VL_TO_STRING(const VTestbench_Mem_ift* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

std::string VL_TO_STRING(const VTestbench_RrequestBits__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{raddr:" + VL_TO_STRING(obj.__PVT__raddr);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VTestbench_RreplyBits__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{rdata:" + VL_TO_STRING(obj.__PVT__rdata);
        out += ", rresp:" + VL_TO_STRING(obj.__PVT__rresp);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VTestbench_WrequestBits__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{waddr:" + VL_TO_STRING(obj.__PVT__waddr);
        out += ", wdata:" + VL_TO_STRING(obj.__PVT__wdata);
        out += ", wmask:" + VL_TO_STRING(obj.__PVT__wmask);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VTestbench_WreplyBits__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestbench_Mem_ift::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{bresp:" + VL_TO_STRING(obj.__PVT__bresp);
        out += "}";
    return out;
}
