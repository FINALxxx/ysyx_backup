module adder(
    input mode,//0为加法，1为减法
    input [31:0] a,
    input [31:0] b,
    output [31:0] result,
    output ADDER_overflow,//有符号计算时使用
    output ADDER_carry,//无符号计算时使用
    output is_zero
);
    wire [31:0] add_cin;
    assign add_cin = (b^{32{mode}})+{31'b0,mode};
    assign {ADDER_carry,result} = a+add_cin;
    assign ADDER_overflow = (a[31]==add_cin[31])&&(a[31]!=result[31]);//同号运算才有溢出
    assign is_zero = ~(|result);
endmodule
