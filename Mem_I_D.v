`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    10:51:10 08/26/2014
// Design Name:
// Module Name:    Mem_I_D
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module Mem_I_D(
	clk,
	W_En,
	Addr,
	D_In,
	D_Out,
	test_out
    );
	input 				clk;
	input 				W_En;
	input 		[4: 0] Addr;
	input		[31: 0] D_In;
	output reg	[31: 0] D_Out;
	output wire  [31:0] test_out;
	

	(* bram_map="yes" *)
	reg 	[31: 0] RAM[31:   0];


	initial begin
		$readmemb("./test.coe",RAM);
	end
	
	assign test_out = RAM[22];
//	initial begin
//		RAM[0]<=32'h8c01_0050;
//		RAM[1]<=32'h8c02_0054;
//		RAM[2]<=32'h0022_1820;
//		RAM[3]<=32'h0022_2022;
//		RAM[4]<=32'h0064_2824;
//		RAM[5]<=32'h0085_3027;
//		RAM[6]<=32'hac06_0058;
//		RAM[7]<=32'h0800_0000;
//		RAM[8]<=32'h0000_0000;
//		RAM[9]<=32'h0000_0000;
//		RAM[10]<=32'h0000_0000;
//		RAM[11]<=32'h0000_0000;
//		RAM[12]<=32'h0000_0000;
//		RAM[13]<=32'h0000_0000;
//		RAM[14]<=32'h0000_0000;
//		RAM[15]<=32'h0000_0000;
//		RAM[16]<=32'h0000_0000;
//		RAM[17]<=32'h0000_0000;
//		RAM[18]<=32'h0000_0000;
//		RAM[19]<=32'h0000_0000;
//		RAM[20]<=32'hbeef_0000;
//		RAM[21]<=32'h0000_beef;
//		RAM[22]<=32'h0000_0000;
//		RAM[23]<=32'h0000_0000;
//		RAM[24]<=32'h0000_0000;
//		RAM[25]<=32'h0000_0000;
//		RAM[26]<=32'h0000_0000;
//		RAM[27]<=32'h0000_0000;
//		RAM[28]<=32'h0000_0000;
//		RAM[29]<=32'h0000_0000;
//		RAM[30]<=32'h0000_0000;
//		RAM[31]<=32'h0000_0000;
//	end
	
	always @(posedge clk ) begin
		if ( W_En ) begin
			RAM[Addr] <= D_In;
		end
		else D_Out <= RAM[Addr];
	end

endmodule
