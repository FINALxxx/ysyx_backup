module RegisterFile #(DATA_WIDTH=32,REG_NUM=32,REG_NUM_BIT=5)  (
  //ADDR_WIDTH个寄存器，每个寄存器保存DATA_WIDTH个bits
  input clk,
  input [REG_NUM_BIT-1:0] raddr_a,//读rs1
  input [REG_NUM_BIT-1:0] raddr_b,//读rs2
  input [DATA_WIDTH-1:0] wdata,//写rd
  input [REG_NUM_BIT-1:0] waddr,//写rd
  input wen,//写使能
  output [DATA_WIDTH-1:0] rdata_a,//读rs1
  output [DATA_WIDTH-1:0] rdata_b//读rs2
);
  reg [DATA_WIDTH-1:0] rf [REG_NUM-1:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
	rf[0] <= 0; //debug:最好还是一直保持0号寄存器为0
	
  end
  
  assign rdata_a = (raddr_a=='b0) ? 'b0 : rf[raddr_a];
  assign rdata_b = (raddr_b=='b0) ? 'b0 : rf[raddr_b];
  
  always @(posedge clk) begin
		if (raddr_a==5'b1111) $display("READING TO a5,VAL=%b",rdata_a);
		if (waddr==5'b1111) $display("WRITING TO a5,VAL=%b",wdata);

		/*$display("==FROM RF==\n");
		$display("wdata=%b",wdata);
		$display("waddr=%b",waddr);
		$display("wen=%b",wen);
		$display("clk=%b",clk);
		$display("wen=%b",wen);
		$display("wdata=%b",wdata);
		$display("waddr=%b",waddr);*/
		/*$display("sp=%b\n",rf[5'b0010]);
		$display("a4=%b\n",rf[5'b1110]);
		$display("a5=%b\n",rf[5'b1111]);
		$display("\n");*/
  end
endmodule
