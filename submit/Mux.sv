module Mux2To1(
    input I0,
    input I1,
    input S0,
    output O
);
    assign O = S ? I1 : I0;
endmodule

module Mux4To1(
    input I0,
    input I1,
    input I2,
    input I3,
    input S0,
    input S1,
    output O
);

    wire I01;
    wire I23;

    Mux2To1 mux0(I0,I1,S0,I01);
    Mux2To1 mux1(I2,I3,S0,I23);
    Mux2To1 mux2(I01,I23,S1,O);

endmodule

//NEED TO BE MODIFED!!! NOT SINGLE-BIT