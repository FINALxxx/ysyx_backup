/* verilator lint_off UNUSEDSIGNAL */
`include "TYPES.v"
module ALU(
    input [2:0] sel,
    input A_L,//0算术/1逻辑移位
    input L_R,//0左移/1右移
    input S_U,//0有符号/1无符号
    input Add_Sub,//0加法/1减法
    input [31:0] a,
    input [31:0] b,
    output [31:0] result,
    output LESS,//a<b，由进位信号carry、overflow得到
	output IS_ZERO//只有adder会产生
);


    /* calculate */

    //ADD
    wire [31:0] ADDER_result;
    adder add1(
		.mode(Add_Sub),
		.a(a),
		.b(b),
		.S_U(S_U),
		.result(ADDER_result),
		.LESS(LESS),
		.IS_ZERO(IS_ZERO)
	);

	//SHIFT
	wire [31:0] SHIFT_result;
	Barrel_Shifter shift1(
		.L_R(L_R),
		.A_L(A_L),
		.in(a),
		.soffset(b),
		.out(SHIFT_result)
	);

	//logic operation
	wire [31:0] AND_result,OR_result,XOR_result;
	assign AND_result = a&b;
	assign OR_result = a|b;
	assign XOR_result = a^b;
    /* end */

	
    /* result select */
    MuxKeyWithDefault #(8, 3, 32) mux1(result,sel,32'b0,{
        3'b000,   0,//bug on purpose
		//3'b000,	  ADDER_result,
		3'b001,   SHIFT_result,
		3'b010,   {31'b0,LESS},
		3'b011,   b,
		3'b100,   XOR_result,
		3'b101,   SHIFT_result,
		3'b110,   OR_result,
		3'b111,   AND_result
    });
    /* end */


    

endmodule



