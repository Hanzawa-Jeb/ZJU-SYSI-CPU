`include "core_struct.vh"

//READ FROM THE REGISTERS
module MaskGen(
    input CorePack::mem_op_enum mem_op,
    //opcode for the memory operation
    input CorePack::addr_t dmem_waddr,
    //write address of the content
    output CorePack::data_t dmem_wmask
    //the mask generated
);

  import CorePack::*;
  // Mask generation
  //generate the mask for loading into the memory
  always_comb begin
    case(mem_op)
      MEM_NO: begin
        //no operation
        dmem_wmask = 64'h0;
      end
      MEM_D: begin
        //double word, 64-bit
        dmem_wmask = 64'hffffffffffffffff;
      end
      MEM_W: begin
        //word, 32-bit
        dmem_wmask = {32'h0, 32'hffffffff} << {dmem_waddr[2:0], 3'b0};
      end
      MEM_H: begin
        //half-word, 16-bit
        dmem_wmask = {48'h0, 16'hffff} << {dmem_waddr[2:0], 3'b0};
      end
      MEM_B: begin
        //one-byte, 8-bit
        dmem_wmask = {56'h0, 8'hff} << {dmem_waddr[2:0], 3'b0};
      end
      MEM_UB: begin
        //one-byte unsigned
        dmem_wmask = {56'h0, 8'hff} << {dmem_waddr[2:0], 3'b0};
      end
      MEM_UH: begin
        //half-word unsigned
        dmem_wmask = {48'h0, 16'hffff} << {dmem_waddr[2:0], 3'b0};
      end
      MEM_UW: begin
        //word unsigned
        dmem_wmask = {32'h0, 32'hffffffff} << {dmem_waddr[2:0], 3'b0};
      end
      default: begin
        dmem_wmask = 64'h0;
      end
    endcase
  end

endmodule

