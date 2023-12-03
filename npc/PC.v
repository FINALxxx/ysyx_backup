/* verilator lint_off PINCONNECTEMPTY */
module PC(
    input clk,
    input rst,
    input [31:0] a,
    input [31:0] b,
	input wen,
    output [31:0] npc
);
	//wire reset;
    wire [31:0] tmp_pc,result;


    adder add1(
        .mode(0),
        .a(a),
        .b(b),
        .S_U(1),
        .result(result),
        .LESS(),
        .IS_ZERO()
    );

    //assign reset = ~(|npc) | rst;
    Reg #(32,32'h80000000) pc2snpc (
        .clk(clk),
        .rst(rst),
        .din(result),
        .dout(tmp_pc),
        .wen(wen)
    );

    assign npc = tmp_pc;
	always @(posedge clk) begin
		/*$display("==FROM PC==\n");
		$display("rst=%b",rst);
		$display("wen=%b",wen);
		$display("result=%x",result);
		$display("tmp_pc=%b",tmp_pc);
		$display("npc=%b",npc);
		$display("\n");*/
	end
endmodule
