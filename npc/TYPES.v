`define ADD 4'b00_00
`define SUB 4'b00_01

`define AND 4'b01_00
`define OR  4'b01_01
`define XOR 4'b01_10
`define NOT 4'b01_11

`define SLT 4'b10_00
`define SLTU 4'b10_01

`define SLL 4'b11_00
`define SRL 4'b11_01
`define SRA 4'b11_10



`define immI 3'b000
`define immU 3'b001
`define immS 3'b010
`define immB 3'b011
`define immJ 3'b100


//有一些没有包含，要特别加入
//opcode
`define TYPE_I_LOAD     7'b0000011
`define TYPE_I_JALR     7'b1100111
`define TYPE_I          7'b0010011
`define TYPE_U_AUIPC    7'b0010111
`define TYPE_U_LUI      7'b0110111
`define TYPE_R          7'b0110011
`define TYPE_J          7'b1101111
`define TYPE_S          7'b0100011
`define TYPE_B          7'b1100011




