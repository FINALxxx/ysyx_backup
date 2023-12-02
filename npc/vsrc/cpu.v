/* verilator lint_off PINCONNECTEMPTY */
module cpu(
    input clk,
    input rst,
    input [31:0] cmd
);

    //rs1、rs2、rd是寄存器序号，src1、src2、src_rd、imm是数据
    wire [4:0] rs1,rs2,rd;
    wire [31:0] pc,src1,src2,imm,src_rd;
    wire [2:0] op_IMM;
    assign rs1 = cmd[19:15];
    assign rs2 = cmd[24:20];
    assign rd = 5'b00001;

    wire op_ALU_Asrc;
    wire [1:0] op_ALU_Bsrc;
    wire [3:0]op_ALU_sel;
    wire op_PC_Asrc;
    wire op_PC_Bsrc;

    wire en_Wreg;
    wire LESS,IS_ZERO;

    /* status setter */
    ControlUnit cu1(
        .opcode(cmd[6:0]),
        .funct3(cmd[14:12]),
        .funct7(cmd[30]),
        .LESS(LESS),
        .IS_ZERO(IS_ZERO),
        .op_IMM(op_IMM),
        .en_Wreg(en_Wreg),
        .store(),
        .branch(),
        .load(),
        .op_ALU_Asrc(op_ALU_Asrc),
        .op_ALU_Bsrc(op_ALU_Bsrc),
        .op_ALU_sel(op_ALU_sel),
        .op_PC_Asrc(op_PC_Asrc),
        .op_PC_Bsrc(op_PC_Bsrc)
    );
    /* end */


    /* data select */

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
    //PC_src_mux
    wire [31:0] a0,b0;
    MuxKey #(2, 1, 32) mux1(a0,op_ALU_Asrc,{
            1'b0,   32'd4,
            1'b1,   imm
    });
    MuxKey #(2, 1, 32) mux2(b0,op_ALU_Bsrc,{
            1'b0,   pc,
            1'b1,   src1
    });

    //ALU_src_mux
    wire [31:0] a1,b1;
    MuxKey #(2, 1, 32) mux3(a1,op_ALU_Asrc,{
            1'b0,   src1,
            1'b1,   pc
    });
    MuxKeyWithDefault #(3, 2, 32) mux4(b1,op_ALU_Bsrc,src2,{
            2'b00,   src2,
            2'b01,   imm,
            2'b10,   32'd4
    });

    wire L_R,S_U,A_L,Add_Sub;
    assign Add_Sub = (op_ALU_sel!=`ADD);
    assign L_R = (op_ALU_sel!=`SLL);
    assign S_U = (op_ALU_sel!=`SLT);
    assign A_L = (op_ALU_sel!=`SRA);
    /* end */

    PC pc1(
        .clk(clk),
        .rst(rst),
        .a(a0),
        .b(b0),
        .npc(pc)
    );

    ALU alu1(
        .sel(op_ALU_sel[2:0]),
        .L_R(L_R),
        .S_U(S_U),
        .A_L(A_L),
        .Add_Sub(Add_Sub),
        .a(a1),
        .b(b1),
        .result(src_rd),
        .LESS(LESS),
        .IS_ZERO(IS_ZERO)
    );

    //测试用，实现后一定要删除
    always @(pc) begin
        $display("pc=%x",pc);
        $display("rs1=%b",rs1);
        $display("rs2=%b",rs2);
        $display("rd=%b",rd);
        $display("op-imm=%b\n\n",op_IMM);

        $display("ALUsel=%b",op_ALU_sel);
        $display("a1=%b",a1);
        $display("b1=%b",b1);
        $display("src_rd=%b",src_rd);

        $display("PCAsrc=%b",op_PC_Asrc);
        $display("PCBsrc=%b",op_PC_Bsrc);
        $display("a0=%b",a0);
        $display("b0=%b",b0);
        $display("\n");
    end


endmodule
