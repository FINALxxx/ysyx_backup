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
  end

  assign rdata_a = (raddr_a=='b0) ? 'b0 : rf[raddr_a];
  assign rdata_b = (raddr_b=='b0) ? 'b0 : rf[raddr_b];

  always @(*) begin
		$display("raddr_a=%b",raddr_a);
		$display("raddr_b=%b",raddr_b);
		$display("wdata=%b",wdata);
		$display("waddr=%b",waddr);
		$display("wen=%b",wen);
		$display("rdata_a=%b",rdata_a);
		$display("rdata_b=%b",rdata_b);
		$display("\n");
  end
endmodule
