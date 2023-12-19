//[[SUB/ADD,U/S,A/L],ALUctr[2:0]]
`define ADD 4'b0_000
`define SUB 4'b1_000

`define AND 4'b0_111
`define OR  4'b0_110
`define XOR 4'b0_100
`define ORGB 4'b0_011 //origin，直接输出B

`define SLT 4'b0_010
`define SLTU 4'b1_010

`define SLL 4'b0_001
`define SRL 4'b0_101
`define SRA 4'b1_101



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

//此处的掩码是字掩码，最小单位是Byte，不是位掩码
`define BYTE 8'b0000_0001
`define HALF_WORD 8'b0000_1111
`define WORD 8'b1111_1111

