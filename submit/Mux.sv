module Mux2To1_64(
    input [63:0] I0,
    input [63:0] I1,
    input S0,
    output [63:0] O
);
    assign O = S ? I1 : I0;
endmodule

module muxA(
    input [63:0] PC;
    input [63:0] REG;
    input alu_asel_op_enum S;
    output [63:0] O;
);

    always_comb begin
        case(S) 
            ASEL0: O = 64'b0;
            ASEL_REG: O = REG;
            ASEL_PC: O = PC;
            ASEL3: O = 64'b0;
            default: O = 64'b0;
        endcase
    end

endmodule

module muxB(
    input [63:0] IMM;
    input [63:0] REG;
    input alu_bsel_op_enum S;
    output [63:0] O;
)

    always_comb begin
        case(S) 
            BSEL0: O = 64'b0;
            BSEL_REG: O = REG;
            BSEL_IMM: O = IMM;
            BSEL3: O = 64'b0;
            default: O = 64'b0;
        endcase
    end

endmodule

module Mux3To1_64(
    input [63:0] PC,
    input [63:0] ALU,
    input [63:0] MEM,
    input wb_sel_op_enum S,
    output [63:0] O
);

    wire [63:0] I01;
    wire [63:0] I23;

    always_comb begin
        case(S)
            WB_SEL0: O = 64'b0;
            WB_SEL_ALU: O = ALU;
            WB_SEL_MEM: O = MEM;
            WB_SEL_PC: O = PC;
            default: O = 64'b0;
        endcase
    end

endmodule