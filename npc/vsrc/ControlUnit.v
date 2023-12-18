`include "TYPES.v"

import "DPI-C" function void halt(input bit is_halt);

module ControlUnit(
	input clk,//同步halt()
    input [6:0] opcode,
    input [2:0] funct3,
    input funct7,
    input IS_ZERO,
    input LESS,
    
	output [2:0] op_IMM,
    
	output en_Wreg,
	output load,//0表示将ALU结果给reg，1表示将PMEM结果给reg
	output store,
	output [7:0] op_PMEM,
	output [1:0] op_load_sext,//00表示不扩展，01表示b拓展，10表示h拓展
    
	output op_ALU_Asrc,//0表示选择src1，1表示选择PC
    output [1:0] op_ALU_Bsrc,//00表示选择src2，01表示选择imm，10表示选择常数4（默认选择rs2）
    output [3:0] op_ALU_sel,
    output op_PC_Asrc,
    output op_PC_Bsrc
);

    wire I,R,J,S,B;
    wire [3:0] R_sel,I_sel;
    wire I_LOAD,I_JALR,U_AUIPC,U_LUI;
    wire [2:0] branch;



/* START 指令分类 */
    
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

/* END 指令分类 */





/* START 操作分类 */

    assign op_IMM = (I|I_JALR|I_LOAD)?`immI:
                      (U_AUIPC|U_LUI)?`immU:
                                    B?`immB:
                                    S?`immS:
                                    J?`immJ:`immI;


    assign en_Wreg = I | I_JALR | J | I_LOAD | R | U_AUIPC | U_LUI;

	wire [2:0] branch_tmp;
	MuxKeyWithDefault #(3, 5, 3) mux1(branch,opcode[6:2],3'b000,{//默认为not-branch
            5'b11001,	  3'b010,
            5'b11011,	  3'b001,
			5'b11000,	  branch_tmp
    });



    MuxKeyWithDefault #(7, 3, 3) mux2(branch_tmp,funct3,3'b101,{//默认为jal-branch
            3'b001,	  3'b101,
            3'b010,	  3'b110,
            3'b001,	  3'b111,
            3'b100,   3'b110,
            3'b101,   3'b111,
            3'b110,   3'b110,
            3'b110,   3'b111
    });

    assign load = I_LOAD;
    assign store = S;

/* END 操作分类 */





/* START ALU操作数分类 */

    //1:A操作数为PC;0:A操作数为寄存器src1的数
    assign op_ALU_Asrc = U_AUIPC | J | I_JALR;//PC


    //op_ALU_Bsrc[1:0]
    //00:B操作数为寄存器src2的数;01:B操作数为IMM;10:32'b4
    assign op_ALU_Bsrc[1] = J | I_JALR;//4
    assign op_ALU_Bsrc[0] = U_LUI | U_AUIPC | I | I_LOAD | S;//IMM

/* END ALU操作数分类 */

/* START ALU运算分类 */

    MuxKeyWithDefault #(8, 3, 4) mux3(R_sel,funct3,`AND,{
            3'b100,	  (funct7?`SUB:`ADD),
            3'b001,	  `SLL,
            3'b010,	  `SLT,
            3'b001,	  `SLTU,
            3'b100,   `XOR,
            3'b101,   (funct7?`SRA:`SRL),
            3'b110,   `OR,
            3'b111,	  `AND
    });

    MuxKeyWithDefault #(8, 3, 4) mux4(I_sel,funct3,`AND,{
            3'b000,   `ADD,
            3'b010,   `SLT,
            3'b011,	  `SLTU,
            3'b100,	  `XOR,
            3'b110,	  `OR,
            3'b111,	  `AND,
            3'b001,	  `SLL,
            3'b101,	  (funct7?`SRA:`SRL)
    });


    assign op_ALU_sel = I?I_sel:
                    R?R_sel:
                    (I_JALR|J)?`ADD:`ADD;

/* END ALU运算分类 */



/* START PC操作数分类 */
    assign op_PC_Asrc = (~branch[2] & branch[1]) | (~IS_ZERO & ~branch[1] & branch[0]) | (LESS & branch[1] & ~branch[0]) | (~branch[2] & branch[0]) | (IS_ZERO & branch[2] & ~branch[1] & ~branch[0]) | (~LESS & branch[1] & branch[0]);

    assign op_PC_Bsrc = ~branch[2] & branch[1] & ~branch[0];

/*  END PC操作数分类 */

/* START PMEM掩码与移位分类 */
	MuxKeyWithDefault #(5, 3, 8) mux5(op_PMEM,funct3,`BYTE,{
            3'b000,   `BYTE,
            3'b001,   `HALF_WORD,
            3'b010,	  `WORD,
            3'b100,	  `BYTE,
            3'b101,	  `HALF_WORD
    });
	assign op_load_sext[0] = ~funct3[0] & ~funct3[1] & ~funct3[2];
	assign op_load_sext[1] = ~funct3[2] & funct3[0];
/* END PMEM掩码与移位分类 */

	always @(*) begin 
		$display("CU_op_ALU_sel=%b",op_ALU_sel);
		$display("CU_I_sel=%b",I_sel);
		$display("CU_R_sel=%b",R_sel);
	end

    reg is_halt;
	always @(posedge clk) begin
		is_halt <= (opcode=='b1110011)&(funct3=='b0)&(funct7=='b0);
		halt(is_halt);
	end 

endmodule
