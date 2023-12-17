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
	input [1:0] op_load_sext,
	output reg [31:0] rdata,

	//写请求
	input wen,
	input [31:0] waddr,
	input [31:0] wdata,
	input [7:0] wmask
);

	
	reg [31:0] rdata_tmp;
	always @(*) begin
  		if (valid) begin // 有读写请求时
    		pmem_read(raddr, rdata_tmp);
    		if (wen) begin // 有写请求时
      			pmem_write(waddr, wdata, wmask);
    		end
		end else begin
    		rdata_tmp = 0;
  		end
	end
	
	MuxKeyWithDefault #(3, 2, 32) mux1(rdata,op_load_sext,rdata_tmp,{//默认为jal-branch
            2'b00,	  rdata_tmp,
            2'b01,	  { {24{rdata_tmp[7]}}, rdata_tmp[7:0]},
            2'b10,	  { {16{rdata_tmp[15]}}, rdata_tmp[15:0]}
    });



endmodule
