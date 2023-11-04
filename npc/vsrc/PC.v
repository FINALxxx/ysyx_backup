module PC(
    input clk,
    input rst,
    output [31:0] npc
);

    wire tmp_pc,reset,result;
    assign result = tmp_pc + 4;//可以之后实现一个小型adder
    assign reset = rst|(|result);//一开始pc为0时，也要重置一次
    Reg #(32,32'h80000000) pc2snpc (
        .clk(clk),
        .rst(reset),
        .din(result),
        .dout(tmp_pc),
        .wen(1'b1)
    );

    assign npc = tmp_pc;

endmodule
