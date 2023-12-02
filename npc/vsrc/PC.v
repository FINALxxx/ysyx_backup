module PC(
    input clk,
    input rst,
    input a,
    input b,
    output [31:0] npc
);
	wire reset;
    wire [31:0] tmp_pc,result;


    adder add1(
        .mode(0),
        .a(a),
        .b(b),
        .S_U(1),
        .result(result),
        .LESS(),
        .is_zero()
    );

    assign reset = (|pc) | rst;
    Reg #(32,32'h80000000) pc2snpc (
        .clk(clk),
        .rst(reset),
        .din(result),
        .dout(tmp_pc),
        .wen(1'b1)
    );

    assign npc = tmp_pc;
/*	
	always @(*) begin
		$display("reset=%b",reset);
		$display("result=%d",result);
		$display("tmp_pc=%x",tmp_pc);
		$display("npc=%x",npc);
		$display("\n");
	end
*/
endmodule
