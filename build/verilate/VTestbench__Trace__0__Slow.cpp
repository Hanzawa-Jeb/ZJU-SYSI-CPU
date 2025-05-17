// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__CorePack__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CorePack", VerilatedTracePrefixType::SCOPE_MODULE);
    VTestbench___024root__trace_init_sub__TOP__CorePack__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"max_sim_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"cosim_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cosim_core_info", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+11,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,0,"rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+35,0,"rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"npc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+43,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("difftest", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"cosim_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"cosim_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"cosim_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"cosim_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"cosim_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+37,0,"cosim_wdate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+43,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"error1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"error2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"cosim_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cosim_core_info", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+11,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,0,"rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+35,0,"rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"npc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+183,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dmem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declArray(c+186,0,"FILE_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dmem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+185,0,"cosim_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cosim_core_info", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+11,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,0,"rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+35,0,"rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"npc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declQuad(c+49,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+51,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"pc_plus_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+57,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+189,0,"alw_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+61,0,"ALUinput1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+63,0,"ALUinput2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+67,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+69,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1,0,"inst_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+70,0,"we_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"we_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"re_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"npc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"immgen_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"alu_asel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"alu_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"mem_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+79,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+80,0,"dataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"dataR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"dataR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"truncatedData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+80,0,"wb_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("Controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"we_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"we_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"re_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"npc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"immgen_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"cmp_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"alu_asel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"alu_bsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"mem_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+89,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+90,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+91,0,"inst_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_immw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_regw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"inst_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+63,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+73,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+65,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_cmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+82,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+74,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+79,0,"cmp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("datapkg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"mem_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+84,0,"reg_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"dmem_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("datatrunc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+78,0,"mem_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+65,0,"dmem_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("immgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+72,0,"immgen_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+67,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("maskgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"mem_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+65,0,"dmem_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+57,0,"dmem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+53,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+79,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+51,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+53,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"ALU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+77,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+80,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+191,0,"I01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+193,0,"I23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("muxA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+49,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"REG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+75,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+61,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("muxB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+67,0,"IMM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"REG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+76,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+63,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("registers", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,7);
    tracep->declBus(c+58,0,"rsR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,15);
    tracep->declBus(c+59,0,"rsR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,20);
    tracep->declQuad(c+80,0,"dataW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+70,0,"we_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+82,0,"dataR1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"dataR2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+102,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("RegGroup", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+103+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+186,0,"FILE_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+195,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"CAPACITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dmem_ift", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+197,0,"BYTE_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+186,0,"FILE_PATH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+195,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"CAPACITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+168,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+170,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"raddr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+5,0,"rdata0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+172,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+7,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+197,0,"BYTE_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__imem_ift__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+195,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"r_request_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"r_request_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_request_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+174,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+201,0,"r_reply_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"r_reply_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_reply_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+1,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+202,0,"w_request_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"w_request_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_request_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+204,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+206,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+208,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBit(c+209,0,"w_reply_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"w_reply_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_reply_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+210,0,"bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__Testbench__DOT__dut__DOT__dmem_ift__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+195,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"r_request_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"r_request_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_request_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+176,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+211,0,"r_reply_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"r_reply_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_reply_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+3,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10,0,"rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+185,0,"w_request_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_request_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_request_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declQuad(c+178,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+170,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBit(c+212,0,"w_reply_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"w_reply_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_reply_bits", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+210,0,"bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__CorePack__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__CorePack__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+195,0,"xLen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"MASK_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"LOAD_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+214,0,"IMM_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+215,0,"AUIPC_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+216,0,"IMMW_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+217,0,"STORE_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+218,0,"REG_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+219,0,"LUI_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+220,0,"REGW_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+221,0,"BRANCH_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+222,0,"JALR_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+223,0,"JAL_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+224,0,"BEQ_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"BNE_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"BLT_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"BGE_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"BLTU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"BGEU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"LB_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"LH_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"LW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"LD_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"LBU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"LHU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"LWU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"SB_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"SH_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"SW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"SD_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"ADD_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"SUB_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"SLL_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"SLT_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"SLTU_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"XOR_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"SRL_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"SRA_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"OR_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"AND_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"ADDW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+224,0,"SUBW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+225,0,"SLLW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"SRLW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"SRAW_FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void VTestbench___024root__trace_init_top(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_top\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestbench___024root__trace_register(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_register\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+184,(0x30d40U),32);
    bufp->fullBit(oldp+185,(1U));
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x63617365U;
    __Vtemp_1[2U] = 0x74657374U;
    bufp->fullWData(oldp+186,(__Vtemp_1),96);
    bufp->fullQData(oldp+189,(0ULL),64);
    bufp->fullQData(oldp+191,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mux3__DOT__I01),64);
    bufp->fullQData(oldp+193,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mux3__DOT__I23),64);
    bufp->fullIData(oldp+195,(0x40U),32);
    bufp->fullIData(oldp+196,(0x2000U),32);
    bufp->fullIData(oldp+197,(8U),32);
    bufp->fullIData(oldp+198,(0x400U),32);
    bufp->fullIData(oldp+199,(0xaU),32);
    bufp->fullIData(oldp+200,(3U),32);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.__PVT__r_reply_ready));
    bufp->fullBit(oldp+202,(0U));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.w_request_valid));
    bufp->fullQData(oldp+204,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.w_request_bits
                              .__PVT__waddr),64);
    bufp->fullQData(oldp+206,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.w_request_bits
                              .__PVT__wdata),64);
    bufp->fullCData(oldp+208,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.w_request_bits
                              .__PVT__wmask),8);
    bufp->fullBit(oldp+209,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.__PVT__w_reply_ready));
    bufp->fullCData(oldp+210,(VTestbench_WreplyBits__struct__0{
                              .__PVT__bresp = (CData)(0U)}
                              .__PVT__bresp),2);
    bufp->fullBit(oldp+211,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.__PVT__r_reply_ready));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.__PVT__w_reply_ready));
    bufp->fullCData(oldp+213,(3U),7);
    bufp->fullCData(oldp+214,(0x13U),7);
    bufp->fullCData(oldp+215,(0x17U),7);
    bufp->fullCData(oldp+216,(0x1bU),7);
    bufp->fullCData(oldp+217,(0x23U),7);
    bufp->fullCData(oldp+218,(0x33U),7);
    bufp->fullCData(oldp+219,(0x37U),7);
    bufp->fullCData(oldp+220,(0x3bU),7);
    bufp->fullCData(oldp+221,(0x63U),7);
    bufp->fullCData(oldp+222,(0x67U),7);
    bufp->fullCData(oldp+223,(0x6fU),7);
    bufp->fullCData(oldp+224,(0U),3);
    bufp->fullCData(oldp+225,(1U),3);
    bufp->fullCData(oldp+226,(4U),3);
    bufp->fullCData(oldp+227,(5U),3);
    bufp->fullCData(oldp+228,(6U),3);
    bufp->fullCData(oldp+229,(7U),3);
    bufp->fullCData(oldp+230,(2U),3);
    bufp->fullCData(oldp+231,(3U),3);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                            .__PVT__rdata),64);
    bufp->fullQData(oldp+3,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                            .__PVT__rdata),64);
    bufp->fullQData(oldp+5,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                            [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                                                .__PVT__raddr 
                                                >> 3U)))]),64);
    bufp->fullQData(oldp+7,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__mem
                            [(0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                                                .__PVT__raddr 
                                                >> 3U)))]),64);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_reply_bits
                            .__PVT__rresp),2);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_reply_bits
                             .__PVT__rresp),2);
    bufp->fullQData(oldp+11,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__pc),64);
    bufp->fullQData(oldp+13,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__inst),64);
    bufp->fullQData(oldp+15,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rs1_id),64);
    bufp->fullQData(oldp+17,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rs1_data),64);
    bufp->fullQData(oldp+19,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rs2_id),64);
    bufp->fullQData(oldp+21,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rs2_data),64);
    bufp->fullQData(oldp+23,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__alu),64);
    bufp->fullQData(oldp+25,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__mem_addr),64);
    bufp->fullQData(oldp+27,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__mem_we),64);
    bufp->fullQData(oldp+29,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__mem_wdata),64);
    bufp->fullQData(oldp+31,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__mem_rdata),64);
    bufp->fullQData(oldp+33,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rd_we),64);
    bufp->fullQData(oldp+35,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rd_id),64);
    bufp->fullQData(oldp+37,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__rd_data),64);
    bufp->fullQData(oldp+39,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__br_taken),64);
    bufp->fullQData(oldp+41,(vlSelfRef.Testbench__DOT__cosim_core_info
                             .__PVT__npc),64);
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error1) 
                            | (IData)(vlSelfRef.Testbench__DOT__difftest__DOT__error2))));
    bufp->fullIData(oldp+44,((IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                     .__PVT__inst)),32);
    bufp->fullBit(oldp+45,((1U & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                         .__PVT__rd_we))));
    bufp->fullCData(oldp+46,((0x1fU & (IData)(vlSelfRef.Testbench__DOT__cosim_core_info
                                              .__PVT__rd_id))),5);
    bufp->fullBit(oldp+47,(vlSelfRef.Testbench__DOT__difftest__DOT__error1));
    bufp->fullBit(oldp+48,(vlSelfRef.Testbench__DOT__difftest__DOT__error2));
    bufp->fullQData(oldp+49,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc),64);
    bufp->fullQData(oldp+51,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc_next),64);
    bufp->fullQData(oldp+53,((4ULL + vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__pc)),64);
    bufp->fullQData(oldp+55,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__write_data),64);
    bufp->fullCData(oldp+57,((0xffU & ((4U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                        ? ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                ? ((IData)(0xfU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                : ((IData)(3U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))))
                                            : ((1U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                ? ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                : ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))))
                                        : ((2U & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                ? ((IData)(3U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res)))
                                                : ((IData)(0xfU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res))))
                                            : ((1U 
                                                & (IData)(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op))
                                                ? 0xffU
                                                : 0U))))),8);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                       >> 7U))),5);
    bufp->fullQData(oldp+61,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput1),64);
    bufp->fullQData(oldp+63,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__ALUinput2),64);
    bufp->fullQData(oldp+65,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_res),64);
    bufp->fullQData(oldp+67,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__imm),64);
    bufp->fullIData(oldp+69,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst),32);
    bufp->fullBit(oldp+70,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__we_reg));
    bufp->fullBit(oldp+71,((0x23U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullCData(oldp+72,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__immgen_op),3);
    bufp->fullCData(oldp+73,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_op),4);
    bufp->fullCData(oldp+74,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__cmp_op),3);
    bufp->fullCData(oldp+75,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_asel),2);
    bufp->fullCData(oldp+76,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__alu_bsel),2);
    bufp->fullCData(oldp+77,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__wb_sel),2);
    bufp->fullCData(oldp+78,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__mem_op),3);
    bufp->fullBit(oldp+79,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__br_taken));
    bufp->fullQData(oldp+80,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataW),64);
    bufp->fullQData(oldp+82,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR1),64);
    bufp->fullQData(oldp+84,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__dataR2),64);
    bufp->fullQData(oldp+86,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__truncatedData),64);
    bufp->fullCData(oldp+88,((0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst)),7);
    bufp->fullCData(oldp+89,((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+90,((7U & (vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+91,((3U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+92,((0x13U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+93,((0x17U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+94,((0x1bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+95,((0x33U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+96,((0x37U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+97,((0x3bU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+98,((0x63U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+99,((0x67U == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullBit(oldp+100,((0x6fU == (0x7fU & vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst))));
    bufp->fullIData(oldp+101,((vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__inst 
                               >> 7U)),25);
    bufp->fullIData(oldp+102,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__i),32);
    bufp->fullQData(oldp+103,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[0]),64);
    bufp->fullQData(oldp+105,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[1]),64);
    bufp->fullQData(oldp+107,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[2]),64);
    bufp->fullQData(oldp+109,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[3]),64);
    bufp->fullQData(oldp+111,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[4]),64);
    bufp->fullQData(oldp+113,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[5]),64);
    bufp->fullQData(oldp+115,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[6]),64);
    bufp->fullQData(oldp+117,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[7]),64);
    bufp->fullQData(oldp+119,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[8]),64);
    bufp->fullQData(oldp+121,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[9]),64);
    bufp->fullQData(oldp+123,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[10]),64);
    bufp->fullQData(oldp+125,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[11]),64);
    bufp->fullQData(oldp+127,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[12]),64);
    bufp->fullQData(oldp+129,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[13]),64);
    bufp->fullQData(oldp+131,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[14]),64);
    bufp->fullQData(oldp+133,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[15]),64);
    bufp->fullQData(oldp+135,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[16]),64);
    bufp->fullQData(oldp+137,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[17]),64);
    bufp->fullQData(oldp+139,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[18]),64);
    bufp->fullQData(oldp+141,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[19]),64);
    bufp->fullQData(oldp+143,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[20]),64);
    bufp->fullQData(oldp+145,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[21]),64);
    bufp->fullQData(oldp+147,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[22]),64);
    bufp->fullQData(oldp+149,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[23]),64);
    bufp->fullQData(oldp+151,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[24]),64);
    bufp->fullQData(oldp+153,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[25]),64);
    bufp->fullQData(oldp+155,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[26]),64);
    bufp->fullQData(oldp+157,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[27]),64);
    bufp->fullQData(oldp+159,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[28]),64);
    bufp->fullQData(oldp+161,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[29]),64);
    bufp->fullQData(oldp+163,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[30]),64);
    bufp->fullQData(oldp+165,(vlSelfRef.Testbench__DOT__dut__DOT__core__DOT__registers__DOT__RegGroup[31]),64);
    bufp->fullSData(oldp+167,((0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                                                 .__PVT__waddr 
                                                 >> 3U)))),10);
    bufp->fullQData(oldp+168,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                              .__PVT__wdata),64);
    bufp->fullCData(oldp+170,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                              .__PVT__wmask),8);
    bufp->fullSData(oldp+171,((0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                                                 .__PVT__raddr 
                                                 >> 3U)))),10);
    bufp->fullSData(oldp+172,((0x3ffU & (IData)((vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                                                 .__PVT__raddr 
                                                 >> 3U)))),10);
    bufp->fullIData(oldp+173,(vlSelfRef.Testbench__DOT__dut__DOT__dram__DOT__dram__DOT__i),32);
    bufp->fullQData(oldp+174,(vlSymsp->TOP__Testbench__DOT__dut__DOT__imem_ift.r_request_bits
                              .__PVT__raddr),64);
    bufp->fullQData(oldp+176,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.r_request_bits
                              .__PVT__raddr),64);
    bufp->fullQData(oldp+178,(vlSymsp->TOP__Testbench__DOT__dut__DOT__dmem_ift.w_request_bits
                              .__PVT__waddr),64);
    bufp->fullBit(oldp+180,(vlSelfRef.Testbench__DOT__clk));
    bufp->fullBit(oldp+181,(vlSelfRef.Testbench__DOT__rstn));
    bufp->fullIData(oldp+182,(vlSelfRef.Testbench__DOT__cnt),32);
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelfRef.Testbench__DOT__rstn)))));
}
