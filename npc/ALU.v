/* verilator lint_off UNUSEDSIGNAL */
`include "TYPES.v"
module ALU(
    input [3:0] sel,
    //input A_L,//0算术/1符号移位
    //input L_R,//0左移/1右移
    //input U_S,//0无符号/1有符号
    //input Sub_Add,//0加法/1减法
    input [31:0] a,
    input [31:0] b,
    output [31:0] result,
    //output LESS,//a<b，由进位信号carry、overflow得到
    output is_zero//只有adder会产生
);

    /* mode select */
    wire Sub_Add;
    assign Sub_Add = (sel==`ADD)?1'b0:1'b1;

    /* end */

    /* calculate */

    //ADD
    wire ADDER_overflow,ADDER_carry;
    wire [31:0] ADDER_result;
    adder add1(Sub_Add,a,b,ADDER_result,ADDER_overflow,ADDER_carry,is_zero);

    /* end */

    /* result select */
    MuxKeyWithDefault #(1, 4, 32) mux1(result,sel,32'b0,{
        `ADD,   ADDER_result
    });
    /* end */


    /* LESS select */
    // wire LESS_u,LESS_s;
    // assign LESS_s = ADDER_overflow ^ ADDER_result;
    // assign LESS_u = Sub_Add ^ ADDER_carry;
    // assign LESS = U_S?LESS_s:LESS_u;
    /* end */


endmodule



