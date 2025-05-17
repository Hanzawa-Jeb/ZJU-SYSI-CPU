// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_MEM_IFT_H_
#define VERILATED_VTESTBENCH_MEM_IFT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VTestbench_Mem_ift.h"


class VTestbench__Syms;
struct VTestbench_RrequestBits__struct__0 {
    QData/*63:0*/ __PVT__raddr;

    bool operator==(const VTestbench_RrequestBits__struct__0& rhs) const {
        return __PVT__raddr == rhs.__PVT__raddr;
    }
    bool operator!=(const VTestbench_RrequestBits__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_RrequestBits__struct__0& rhs) const {
        return std::tie(__PVT__raddr)
            <  std::tie(rhs.__PVT__raddr);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_RrequestBits__struct__0> : public std::true_type {};
struct VTestbench_RreplyBits__struct__0 {
    QData/*63:0*/ __PVT__rdata;
    CData/*1:0*/ __PVT__rresp;

    bool operator==(const VTestbench_RreplyBits__struct__0& rhs) const {
        return __PVT__rdata == rhs.__PVT__rdata
            && __PVT__rresp == rhs.__PVT__rresp;
    }
    bool operator!=(const VTestbench_RreplyBits__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_RreplyBits__struct__0& rhs) const {
        return std::tie(__PVT__rdata, __PVT__rresp)
            <  std::tie(rhs.__PVT__rdata, rhs.__PVT__rresp);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_RreplyBits__struct__0> : public std::true_type {};
struct VTestbench_WrequestBits__struct__0 {
    QData/*63:0*/ __PVT__waddr;
    QData/*63:0*/ __PVT__wdata;
    CData/*7:0*/ __PVT__wmask;

    bool operator==(const VTestbench_WrequestBits__struct__0& rhs) const {
        return __PVT__waddr == rhs.__PVT__waddr
            && __PVT__wdata == rhs.__PVT__wdata
            && __PVT__wmask == rhs.__PVT__wmask;
    }
    bool operator!=(const VTestbench_WrequestBits__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_WrequestBits__struct__0& rhs) const {
        return std::tie(__PVT__waddr, __PVT__wdata, __PVT__wmask)
            <  std::tie(rhs.__PVT__waddr, rhs.__PVT__wdata, rhs.__PVT__wmask);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_WrequestBits__struct__0> : public std::true_type {};
struct VTestbench_WreplyBits__struct__0 {
    CData/*1:0*/ __PVT__bresp;

    bool operator==(const VTestbench_WreplyBits__struct__0& rhs) const {
        return __PVT__bresp == rhs.__PVT__bresp;
    }
    bool operator!=(const VTestbench_WreplyBits__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_WreplyBits__struct__0& rhs) const {
        return std::tie(__PVT__bresp)
            <  std::tie(rhs.__PVT__bresp);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_WreplyBits__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VTestbench_Mem_ift final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__r_reply_ready;
    CData/*0:0*/ w_request_valid;
    CData/*0:0*/ __PVT__w_reply_ready;
    VTestbench_RrequestBits__struct__0 r_request_bits;
    VTestbench_RreplyBits__struct__0 r_reply_bits;
    VTestbench_WrequestBits__struct__0 w_request_bits;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench_Mem_ift(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench_Mem_ift();
    VL_UNCOPYABLE(VTestbench_Mem_ift);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTestbench_Mem_ift* obj);
std::string VL_TO_STRING(const VTestbench_RrequestBits__struct__0& obj);
std::string VL_TO_STRING(const VTestbench_RreplyBits__struct__0& obj);
std::string VL_TO_STRING(const VTestbench_WrequestBits__struct__0& obj);
std::string VL_TO_STRING(const VTestbench_WreplyBits__struct__0& obj);

#endif  // guard
