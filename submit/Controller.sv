`include "core_struct.vh"
module controller (
    input CorePack::inst_t inst,
    //logic [31:0]
    output we_reg,
    //already connected, used in the register write
    output we_mem,
    //write enable of the 
    output re_mem,
    //no matter what the output is , it is always set to 1
    output npc_sel,
    //used to select pc
    output CorePack::imm_op_enum immgen_op,
    //operation code for the immgen
    output CorePack::alu_op_enum alu_op,
    //op code for the alu
    output CorePack::cmp_op_enum cmp_op,
    //compare op, not connected yet
    output CorePack::alu_asel_op_enum alu_asel,
    //select the muxA
    output CorePack::alu_bsel_op_enum alu_bsel,
    //select the muxB
    output CorePack::wb_sel_op_enum wb_sel,
    //select the final data to write back
    output CorePack::mem_op_enum mem_op
    //used for the modules like DataPkg, MaskGen and DataTrunc
    // output ControllerPack::ControllerSignals ctrl_signals
);

    import CorePack::*;
    // import ControllerPack::*;
    
    //variable declarance

    wire opcode = inst[6:0];
    wire funct7 = inst[31:25];
    wire funct3 = inst[14:12];

    wire inst_load = (opcode == LOAD_OPCODE);
    wire inst_imm = (opcode == IMM_OPCODE);
    wire inst_auipc = (opcode == AUIPC_OPCODE);
    wire inst_immw = (opcode == IMMW_OPCODE);
    wire inst_store = (opcode == STORE_OPCODE);
    wire inst_reg = (opcode == REG_OPCODE);
    wire inst_lui = (opcode == LUI_OPCODE);
    wire inst_regw = (opcode == REGW_OPCODE);
    wire inst_branch = (opcode == BRANCH_OPCODE);
    wire inst_jalr = (opcode == JALR_OPCODE);
    wire inst_jal = (opcode == JAL_OPCODE);
    //assign the instruction wires

    wire 

    assign we_reg = inst_load | inst_imm | inst_auipc | inst_immw | inst_reg | inst_lui | inst_regw | inst_jal | inst_jalr;
    //wite enable signal of registers
    assign we_mem = inst_store;
    //only the store operation needs to write the memory
    assign re_mem = 1'b1;
    //always accept the input, useless in some sense 
    assign npc_sel = 1'b1;
    //useless signal

    always_comb begin
        
    end


endmodule

