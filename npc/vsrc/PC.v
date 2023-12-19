/* verilator lint_off PINCONNECTEMPTY */
module PC(
    input clk,
    input rst,
    input [31:0] a,
    input [31:0] b,
	input wen,
	output [31:0] dnpc,//提前算好dnpc，当到触发沿时才更新到pc上
	output [31:0] pc
);
	//wire reset;
    //wire [31:0] tmp_dnpc;


    adder add1(
        .mode(0),
        .a(a),
        .b(b),
        .S_U(1),
        .result(dnpc),
        .LESS(),
        .IS_ZERO()
    );

    //assign reset = ~(|npc) | rst;
    Reg #(32,32'h7FFFFFFC) dnpc2pc (
        .clk(clk),
        .rst(rst),
        .din(dnpc),
        .dout(pc),
        .wen(wen)
    );

    /*
	//assign dnpc = tmp_dnpc;
	always @(posedge clk) begin
		$display("==FROM PC==\n");
		/*$display("rst=%b",rst);
		$display("wen=%b",wen)
		$display("pc=%x",pc);
		//$display("tmp_dnpc=%x",tmp_dnpc);
		$display("dnpc=%x",dnpc);
		$display("\n");
	end*/
endmodule
