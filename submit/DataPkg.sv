`include "core_struct.vh"

module DataPkg(
    input CorePack::mem_op_enum mem_op,
    input CorePack::data_t reg_data,
    input CorePack::addr_t dmem_waddr,
    output CorePack::data_t dmem_wdata
);
//mem_op_enum is the states for memory
//reg_data is the data to store
//addr_t is the write address
//dmem_wdata is the data to write
//mem_op there are types of the width of the data

  import CorePack::*;

  // Data package
  // fill your code

  //only used to generate the data package

endmodule

