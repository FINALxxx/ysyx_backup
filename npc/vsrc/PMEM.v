/* verilator lint_off BLKSEQ */
import "DPI-C" function void pmem_read(
	input int raddr,
	output int rdata
);

import "DPI-C" function void pmem_write(
	input int waddr,
	input int wdata,
	input byte wmask
);


module PMEM(
	input clk,
	//读写请求
	input valid,
	input [31:0] raddr,
	//input [1:0] op_load_sext,
	output reg [31:0] rdata,

	//写请求
	input wen,
	input [31:0] waddr,
	input [31:0] wdata,
	input [7:0] wmask
);

	
	//reg [31:0] rdata_tmp;
	always @(posedge clk) begin
  		if (valid) begin // 有读写请求时
    		pmem_read(raddr, rdata);
    		$display("[RESV:%x]",rdata);
			if (wen) begin // 有写请求时
      			pmem_write(waddr, wdata, wmask);
    		end
		end else begin
    		rdata = 0;
  		end
	end
	
	


endmodule
