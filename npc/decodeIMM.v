/* verilator lint_off UNUSEDSIGNAL */
`include "TYPES.v"
//负责解码立即数
module decodeIMM(
    input [31:0] cmd,
    input [2:0] op_IMM,
    output reg [31:0] imm
);
    wire [31:0] immI,immU,immJ,immS,immB;


    assign immI = {{20{cmd[31]}},cmd[31:20]};
    assign immU = {cmd[31:12],{12{1'b0}}};
    assign immJ = {{12{cmd[31]}},cmd[19:12],cmd[20],cmd[30:21],1'b0};
    assign immB = {{20{cmd[31]}},cmd[7],cmd[30:25],cmd[11:8],1'b0};
    assign immS = {{20{cmd[31]}},cmd[31:25],cmd[11:7]};



    MuxKeyWithDefault #(5, 3, 32) mux1(imm,op_IMM,immI,{
        `immI   ,   immI,
        `immU   ,   immU,
        `immJ   ,   immJ,
        `immS   ,   immS,
        `immB   ,   immB
    });

endmodule
