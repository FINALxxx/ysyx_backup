module PC(
    input clk,
    input rst,
    output [31:0] npc
);
	wire reset;
    wire [31:0] tmp_pc,result;
    assign result = tmp_pc + 32'd4;//可以之后实现一个小型adder
    assign reset = rst;
    Reg #(32,32'h80000000) pc2snpc (
        .clk(clk),
        .rst(reset),
        .din(result),
        .dout(tmp_pc),
        .wen(1'b1)
    );

    assign npc = tmp_pc;
	
	always @(*) begin
		$display("result=%b",reset);
		$display("result=%d",result);
		$display("tmp_pc=%x",tmp_pc);
		$display("npc=%x",npc);
		$display("\n");
	end

endmodule
