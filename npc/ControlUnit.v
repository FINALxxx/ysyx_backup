`include "TYPES.v"

import "DPI-C" function void halt();

module ControlUnit(
    input [6:0] opcode,
    input [2:0] funct3,
    input funct7,
    output [2:0] op_IMM,
    output en_Wreg,
    output en_Wmem,
    output branch,
    output load,
    output op_ALU_Asrc,//0表示选择src1，1表示选择PC
    output [1:0] op_ALU_Bsrc,//00表示选择src2，01表示选择imm，10表示选择常数4（默认选择rs2）
    output  [3:0] op_ALU_sel
    //output op_MEM
);

    wire I,R,J,S,B;
    wire [3:0] RI_sel,B_sel;
    wire I_LOAD,I_JALR,U_AUIPC,U_LUI;


    //opcode分类，并行计算，加快速度
    //立即数
    assign I = (opcode==`TYPE_I);
    //运算
    assign R = (opcode==`TYPE_R);
    //跳转
    assign J = (opcode==`TYPE_J);
    assign I_JALR = (opcode==`TYPE_I_JALR);
    //访存
    assign S = (opcode==`TYPE_S);
    assign I_LOAD = (opcode==`TYPE_I_LOAD);
    //分支判断
    assign B = (opcode==`TYPE_B);
    //U型
    assign U_AUIPC = (opcode==`TYPE_U_AUIPC);
    assign U_LUI = (opcode==`TYPE_U_LUI);

    assign op_IMM = (I|I_JALR|I_LOAD)?`immI:
                      (U_AUIPC|U_LUI)?`immU:
                                    B?`immB:
                                    S?`immS:
                                    J?`immJ:`immI;


    assign en_Wreg = I | I_JALR | J | I_LOAD | R | U_AUIPC | U_LUI;

    assign branch = B | J | I_JALR;

    assign load = I_LOAD;

    assign en_Wmem = S;

    assign op_ALU_Asrc = U_AUIPC | J | I_JALR;
    assign op_ALU_Bsrc[0] = U_LUI | U_AUIPC | I | I_LOAD;
    assign op_ALU_Bsrc[1] = J | I_JALR;

    MuxKeyWithDefault #(8, 3, 4) mux1(RI_sel,funct3,`ADD,{
        3'b000,   (R&funct7?`SUB:`ADD),
        3'b001,   `SLL,
        3'b010,   `SLT,
        3'b011,   `SLTU,
        3'b100,   `XOR,
        3'b101,   (funct7?`SRA:`SRL),
        3'b110,   `OR,
        3'b111,   `AND
    });

    assign B_sel=(funct3[2]&funct3[1])?`SLTU :
                 (funct3[2]^funct3[1])?`SLT  :`SUB;

    assign op_ALU_sel = B?B_sel:RI_sel;

	((opcode=='b0)&(funct3=='b0)&(funct7=='b0))?halt():;

endmodule
