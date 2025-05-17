// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                               .__PVT__rdata),64);
        bufp->chgQData(oldp+2,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                               .__PVT__rdata),64);
        bufp->chgQData(oldp+4,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                               [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                                                   .__PVT__raddr 
                                                   >> 3U)))]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                               [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                                                   .__PVT__raddr 
                                                   >> 3U)))]),64);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                               .__PVT__rresp),2);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                               .__PVT__rresp),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+10,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__pc),64);
        bufp->chgQData(oldp+12,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__inst),64);
        bufp->chgQData(oldp+14,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rs1_id),64);
        bufp->chgQData(oldp+16,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rs1_data),64);
        bufp->chgQData(oldp+18,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rs2_id),64);
        bufp->chgQData(oldp+20,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rs2_data),64);
        bufp->chgQData(oldp+22,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__alu),64);
        bufp->chgQData(oldp+24,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__mem_addr),64);
        bufp->chgQData(oldp+26,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__mem_we),64);
        bufp->chgQData(oldp+28,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__mem_wdata),64);
        bufp->chgQData(oldp+30,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__mem_rdata),64);
        bufp->chgQData(oldp+32,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rd_we),64);
        bufp->chgQData(oldp+34,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rd_id),64);
        bufp->chgQData(oldp+36,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__rd_data),64);
        bufp->chgQData(oldp+38,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__br_taken),64);
        bufp->chgQData(oldp+40,(vlSelfRef.Testbench__DOT__cosim_core_info
                                .__PVT__npc),64);
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error1) 
                               | (IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error2))));
        bufp->chgIData(oldp+43,((IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                        .__PVT__inst)),32);
        bufp->chgBit(oldp+44,((1U & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                            .__PVT__rd_we))));
        bufp->chgCData(oldp+45,((0x1fU & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                                 .__PVT__rd_id))),5);
        bufp->chgBit(oldp+46,(vlSelfRef.Testbench__DOT__difftest__DOT__error1));
        bufp->chgBit(oldp+47,(vlSelfRef.Testbench__DOT__difftest__DOT__error2));
        bufp->chgQData(oldp+48,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc),64);
        bufp->chgQData(oldp+50,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc_next),64);
        bufp->chgQData(oldp+52,((4ULL + vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc)),64);
        bufp->chgQData(oldp+54,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data),64);
        bufp->chgCData(oldp+56,((0xffU & ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                           ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                   ? 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                   : 
                                                  ((IData)(3U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                   : 
                                                  ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))))
                                           : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                   : 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                   ? 0xffU
                                                   : 0U))))),8);
        bufp->chgCData(oldp+57,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+60,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1),64);
        bufp->chgQData(oldp+62,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2),64);
        bufp->chgQData(oldp+64,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res),64);
        bufp->chgQData(oldp+66,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm),64);
        bufp->chgIData(oldp+68,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst),32);
        bufp->chgBit(oldp+69,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__we_reg));
        bufp->chgBit(oldp+70,((0x23U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgCData(oldp+71,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op),3);
        bufp->chgCData(oldp+72,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op),4);
        bufp->chgCData(oldp+73,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op),3);
        bufp->chgCData(oldp+74,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel),2);
        bufp->chgCData(oldp+75,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel),2);
        bufp->chgCData(oldp+76,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel),2);
        bufp->chgCData(oldp+77,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op),3);
        bufp->chgBit(oldp+78,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__br_taken));
        bufp->chgQData(oldp+79,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataW),64);
        bufp->chgQData(oldp+81,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1),64);
        bufp->chgQData(oldp+83,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2),64);
        bufp->chgQData(oldp+85,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__truncatedData),64);
        bufp->chgCData(oldp+87,((0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)),7);
        bufp->chgCData(oldp+88,((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+89,((7U & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+90,((3U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+91,((0x13U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+92,((0x17U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+93,((0x1bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+94,((0x33U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+95,((0x37U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+96,((0x3bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+97,((0x63U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+98,((0x67U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgBit(oldp+99,((0x6fU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
        bufp->chgIData(oldp+100,((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                  >> 7U)),25);
        bufp->chgIData(oldp+101,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__i),32);
        bufp->chgQData(oldp+102,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0]),64);
        bufp->chgQData(oldp+104,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[1]),64);
        bufp->chgQData(oldp+106,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[2]),64);
        bufp->chgQData(oldp+108,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[3]),64);
        bufp->chgQData(oldp+110,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[4]),64);
        bufp->chgQData(oldp+112,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[5]),64);
        bufp->chgQData(oldp+114,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[6]),64);
        bufp->chgQData(oldp+116,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[7]),64);
        bufp->chgQData(oldp+118,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[8]),64);
        bufp->chgQData(oldp+120,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[9]),64);
        bufp->chgQData(oldp+122,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[10]),64);
        bufp->chgQData(oldp+124,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[11]),64);
        bufp->chgQData(oldp+126,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[12]),64);
        bufp->chgQData(oldp+128,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[13]),64);
        bufp->chgQData(oldp+130,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[14]),64);
        bufp->chgQData(oldp+132,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[15]),64);
        bufp->chgQData(oldp+134,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[16]),64);
        bufp->chgQData(oldp+136,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[17]),64);
        bufp->chgQData(oldp+138,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[18]),64);
        bufp->chgQData(oldp+140,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[19]),64);
        bufp->chgQData(oldp+142,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[20]),64);
        bufp->chgQData(oldp+144,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[21]),64);
        bufp->chgQData(oldp+146,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[22]),64);
        bufp->chgQData(oldp+148,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[23]),64);
        bufp->chgQData(oldp+150,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[24]),64);
        bufp->chgQData(oldp+152,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[25]),64);
        bufp->chgQData(oldp+154,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[26]),64);
        bufp->chgQData(oldp+156,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[27]),64);
        bufp->chgQData(oldp+158,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[28]),64);
        bufp->chgQData(oldp+160,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[29]),64);
        bufp->chgQData(oldp+162,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[30]),64);
        bufp->chgQData(oldp+164,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[31]),64);
        bufp->chgSData(oldp+166,((0x3ffU & (IData)(
                                                   (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                                    .__PVT__waddr 
                                                    >> 3U)))),10);
        bufp->chgQData(oldp+167,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                 .__PVT__wdata),64);
        bufp->chgCData(oldp+169,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                 .__PVT__wmask),8);
        bufp->chgSData(oldp+170,((0x3ffU & (IData)(
                                                   (vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                                                    .__PVT__raddr 
                                                    >> 3U)))),10);
        bufp->chgSData(oldp+171,((0x3ffU & (IData)(
                                                   (vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                                                    .__PVT__raddr 
                                                    >> 3U)))),10);
        bufp->chgIData(oldp+172,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__i),32);
        bufp->chgQData(oldp+173,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                                 .__PVT__raddr),64);
        bufp->chgQData(oldp+175,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                                 .__PVT__raddr),64);
        bufp->chgQData(oldp+177,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                 .__PVT__waddr),64);
    }
    bufp->chgBit(oldp+179,(vlSelfRef.Testbench__DOT__clk));
    bufp->chgBit(oldp+180,(vlSelfRef.Testbench__DOT__rstn));
    bufp->chgIData(oldp+181,(vlSelfRef.Testbench__DOT__cnt),32);
    bufp->chgBit(oldp+182,((1U & (~ (IData)(vlSelfRef.Testbench__DOT__rstn)))));
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
