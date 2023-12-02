module Barrel-shifter(
	input L_R,
	input A_L,
	input [31:0] in,
	input [31:0] soffset,
	output [31:0] out
);
	//之后使用桶形移位实现，目前先做个效果
	MuxKeyWithDefault #(3, 2, 32) mux1(out,{A_L,L_R},(in>>soffset),{
        2'b11,   (in>>soffset),
        2'b10,   (in<<soffset),
        2'b00,   (in>>>soffset)
    });



endmodule
