`include "core_struct.vh"
module Core (
    input clk,
    input rst,

    Mem_ift.Master imem_ift,
    //read request&read response
    //instruction memory interface
    Mem_ift.Master dmem_ift,
    //four channel, read & write
    //data memory interface
    output cosim_valid,
    output CorePack::CoreInfo cosim_core_info
);
    import CorePack::*;
    
    // fill your code

    imem_ift.r_request

    logic [31:0] pc
    //the current pc 
    logic [31:0] pc_next;
    //the next pc
    logic [31:0] pc_plus_f;
    //pc plus four

    data_t ALUinput1;
    data_t ALUinput2;
    data_t alu_res;
    //set the wires for the ALU
    
    inst_t inst;
    wire we_reg;
    wire we_mem;
    wire re_mem;
    wire npc_sel;
    imm_op_enum immgen_op;
    alu_op_enum alu_op;
    cmp_op_enum cmp_op;
    alu_asel_op_enum alu_asel;
    alu_bsel_op_enum alu_bsel;
    wb_sel_op_enum wb_sel;
    mem_op_enum mem_op;
    //set the wires from the controller

    wire br_taken;
    //the control signal for whether taking the branch

    controller Controller(
        .inst(inst),
        .we_reg(we_reg),
        .we_mem(we_mem),
        .re_mem(re_mem),
        .npc_sel(npc_sel),
        .immgen_op(immgen_op),
        .alu_op(alu_op),
        .cmp_op(cmp_op),
        .alu_asel(alu_asel),
        .alu_bsel(alu_bsel),
        .wb_sel(wb_sel),
        .mem_op(mem_op)
        //connect all the wires from the controller
    )   

    ALU alu(
        .a(ALUinput1),
        .b(ALUinput2),
        .alu_op(alu_op),
        .res(alu_res)
        //connect the ALU
    )

    always_ff @(posedge clk) begin
        if (rst) begin
            pc <= 32'b0;
        end else begin
            pc <= pc_next;
            //give the value of pc_next to pc
        end
        //the sequential block for the PC
    end

    always_comb begin
        assign pc_plus_f = pc + 4;
        //always prepare the pc + 4
    end

    Mux2To1 mux1(
        .I0(pc+4),
        .I1(alu_res),
        .S0(br_taken),
        .O(pc_next)
        //control the update of the PC
    )

    Mux2To1 muxA(
        .I0(pc),
        .I1(dataR1),
        .S(alu_asel),
        .O(ALUinput1)
    )

    Mux2To1 muxB(
        .I0(dataR2),
        .I1(genImm),
        .S(alu_bsel),
        .O(ALUinput2)
    )
    //these two multiplexers are for the ALU input



    assign imem_ift.

    assign cosim_valid = 1'b1;
    assign cosim_core_info.pc        = pc;
    //pc need to be connected
    assign cosim_core_info.inst      = {32'b0,inst};   
    //inst need to be connected
    assign cosim_core_info.rs1_id    = {59'b0, rs1};
    assign cosim_core_info.rs1_data  = read_data_1;
    assign cosim_core_info.rs2_id    = {59'b0, rs2};
    assign cosim_core_info.rs2_data  = read_data_2;
    assign cosim_core_info.alu       = alu_res;
    assign cosim_core_info.mem_addr  = dmem_ift.r_request_bits.raddr;
    assign cosim_core_info.mem_we    = {63'b0, dmem_ift.w_request_valid};
    assign cosim_core_info.mem_wdata = dmem_ift.w_request_bits.wdata;
    assign cosim_core_info.mem_rdata = dmem_ift.r_reply_bits.rdata;
    assign cosim_core_info.rd_we     = {63'b0, we_reg};
    //rd_we need to be connected
    assign cosim_core_info.rd_id     = {59'b0, rd}; 
    //rd_id need to be connected
    assign cosim_core_info.rd_data   = wb_val;
    //rd_data need to be connected
    assign cosim_core_info.br_taken  = {63'b0, br_taken};
    assign cosim_core_info.npc       = next_pc;

endmodule






module MultiFSM(
    input clk,
    input rst,
    Mem_ift.Master imem_ift,
    Mem_ift.Master dmem_ift,
    input we_mem,
    input re_mem,
    input CorePack::addr_t pc,
    input CorePack::addr_t alu_res,
    input CorePack::data_t data_package,
    input CorePack::mask_t mask_package,
    output stall
);
    import CorePack::*;

    // fill your code for bonus

endmodule
