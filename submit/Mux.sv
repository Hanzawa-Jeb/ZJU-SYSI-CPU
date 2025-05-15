module Mux2To1_64(
    input [63:0] I0,
    input [63:0] I1,
    input S0,
    output [63:0] O
);
    assign O = S ? I1 : I0;
endmodule

module Mux4To1_64(
    input [63:0] I0,
    input [63:0] I1,
    input [63:0] I2,
    input [63:0] I3,
    input S0,
    input S1,
    output reg [63:0] O
);

    wire [63:0] I01;
    wire [63:0] I23;

    Mux2To1_64 mux0(.I0(I0), .I1(I1), .S0(S0), .O(I01));
    Mux2To1_64 mux1(.I0(I2), .I1(I3), .S0(S0), .O(I23));
    Mux2To1_64 mux2(.I0(I01), .I1(I23), .S0(S1), .O(O));

endmodule