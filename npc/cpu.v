/* verilator lint_off PINCONNECTEMPTY */
module cpu(
    input clk,
    input rst,
    input [31:0] cmd
);

//rs1、rs2、rd是寄存器序号，src1、src2、src_rd、imm是数据
wire [4:0] rs1,rs2,rd;
assign rs1 = cmd[19:15];
assign rs2 = cmd[24:20];
assign rd = 5'b00001;
wire [31:0] pc,src1,src2,imm,src_rd;

PC pc1(
    .clk(clk),
    .rst(rst),
    .npc(pc)
);

/* status setter */

//分类指令
wire [2:0] op_IMM;
wire op_ALU_Asrc;
wire [1:0] op_ALU_Bsrc;
wire [3:0]op_ALU_sel;

//使能指令
wire en_Wreg;
ControlUnit cu1(
    .opcode(cmd[6:0]),
    .funct3(cmd[14:12]),
    .funct7(cmd[30]),
    .op_IMM(op_IMM),
    .en_Wreg(en_Wreg),
    .en_Wmem(),
    .branch(),
    .load(),
    .op_ALU_Asrc(op_ALU_Asrc),
    .op_ALU_Bsrc(op_ALU_Bsrc),
    .op_ALU_sel(op_ALU_sel)
);
/* end */


/* data operation */

//并行获取数据，不用管是否需要
decodeIMM dimm1(
    .cmd(cmd),
    .op_IMM(op_IMM),
    .imm(imm)
);

RegisterFile #(32,32,5) rf1(
    .clk(clk),
    .raddr_a(rs1),
    .raddr_b(rs2),
    .wdata(src_rd),
    .waddr(rd),
    .wen(en_Wreg),
    .rdata_a(src1),
    .rdata_b(src2)
);
/* end */


/* data mux */
//根据状态，选择操作数
wire [31:0] a,b;
MuxKey #(2, 1, 32) mux1(a,op_ALU_Asrc,{
        1'b0,   src1,
        1'b1,   pc
    });
MuxKeyWithDefault #(3, 2, 32) mux2(b,op_ALU_Bsrc,src2,{
        2'b00,   src2,
        2'b01,   imm,
        2'b10,   32'd4
    });
/* end */

ALU alu1(
    .sel(op_ALU_sel),
    .a(a),
    .b(b),
    .result(src_rd),
    .is_zero()
);

//测试用，实现后请删除
always @(*) begin
    $display("pc=%x",pc);
    $display("rs1=%b",rs1);
    $display("rs2=%b",rs2);
	$display("rd=%b",rd);
    $display("sel=%b",op_ALU_sel);
    $display("op-imm=%b",op_IMM);
    $display("a=%b",a);
    $display("b=%b",b);
    $display("src_rd=%b",src_rd);
	$display("\n");
end


endmodule
