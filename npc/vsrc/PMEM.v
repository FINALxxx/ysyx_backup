import "DPI-C" function void pmem_read(
	input int raddr,
	output int rdata
);

import "DPI-C" function void pmem_write(
	input int waddr,
	input int wdata,
	input byte wmask
);


module pmem(
	//读写请求
	input vaild,
	input [31:0] raddr,
	output [31:0] rdata,
	
	//写请求
	input wen,
	input [31:0] waddr,
	input [31:0] wdata,
	input [2:0] wmask
);

	
	wire [63:0] rdata;
	always @(*) begin
  		if (valid) begin // 有读写请求时
    		pmem_read(raddr, rdata);
    		if (wen) begin // 有写请求时
      			pmem_write(waddr, wdata, wmask);
    		end
		end else begin
    		rdata = 0;
  		end
	end
endmodule
