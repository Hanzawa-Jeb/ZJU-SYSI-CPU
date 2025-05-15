module ImmGen (
    input [31:7] inst;
    //note that the indeces in the module should be from 31 to 7
    //please always keep the sorting of the index in mind.
    input CorePack::imm_op_enum immgen_op;
    //the type of the instruction determine the way the immediate is generated
    output CorePack::data_t imm;
);

import CorePack::*;

//implement the function of the immediate generation function

endmodule