module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  //ADDR_WIDTH个寄存器，每个寄存器保存DATA_WIDTH个bits
  input clk,
  input [ADDR_WIDTH-1:0] raddr_a,//读rs1
  input [ADDR_WIDTH-1:0] raddr_b,//读rs2
  input [DATA_WIDTH-1:0] wdata,//写rd
  input [ADDR_WIDTH-1:0] waddr,//写rd
  input wen,//写使能
  output [DATA_WIDTH-1:0] rdata_a,//读rs1
  output [DATA_WIDTH-1:0] rdata_b//读rs2
);
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

  assign rf[0] = 'b0;//锁存0
  assign rdata_a = rf[raddr_a];
  assign rdata_b = rf[raddr_b];
endmodule
