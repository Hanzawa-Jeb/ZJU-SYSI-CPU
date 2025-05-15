module Registers (
    input clk;
    //the parameters for the registers
    input logic [11:7] rd;
    input logic [19:15] rsR1;
    input logic [24:20] rsR2;
    input logic [63:0] dataW;
    input we_reg;
    output logic [63:0] dataR1;
    output logic [63:0] dataR2;

);

//implement the functions of the Register group

endmodule