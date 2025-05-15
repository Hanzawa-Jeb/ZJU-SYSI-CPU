`include "core_struct.vh"
module controller (
    input CorePack::inst_t inst,
    //already connected
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
    
    // fill your code

endmodule

