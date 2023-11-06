module RegisterFile (
  //ADDR_WIDTH个寄存器，每个寄存器保存DATA_WIDTH个bits
  input clk,
  input [4:0] raddr_a,//读rs1
  input [4:0] raddr_b,//读rs2
  input [31:0] wdata,//写rd
  input [4:0] waddr,//写rd
  input wen,//写使能
  output [31:0] rdata_a,//读rs1
  output [31:0] rdata_b//读rs2
);
  reg [31:0] rf [31:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

  assign rdata_a = (raddr_a=='b0) ? 'b0 : rf[raddr_a];
  assign rdata_b = (raddr_b=='b0) ? 'b0 : rf[raddr_b];
endmodule
