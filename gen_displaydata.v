`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:19 04/02/2015 
// Design Name: 
// Module Name:    gen_displaydata 
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
module gen_displaydata(
data_in,
strdata

    );
input wire [127:0] data_in;
output wire [255:0] strdata;
//reg[7:0] rom[15:0];


(* bram_map="yes" *)
	reg 	[7: 0] rom[15:   0];


	initial begin
		$readmemh("./ascii.coe",rom);
	end

//initial begin
//	rom[0] <= "0";
//	rom[1] <= "1";
//	rom[2] <= "2";
//	rom[3] <= "3";
//	rom[4] <= "4";
//	rom[5] <= "5";
//	rom[6] <= "6";
//	rom[7] <= "7";
//	rom[8] <= "8";
//	rom[9] <= "9";
//	rom[10] <= "A";
//	rom[11] <= "B";
//	rom[12] <= "C";
//	rom[13] <= "D";
//	rom[14] <= "E";
//	rom[15] <= "F";	
//end

assign strdata = {rom[data_in[127:124]], //Inst
					rom[data_in[123:120]],
					rom[data_in[119:116]],
					rom[data_in[115:112]],
					rom[data_in[111:108]],
					rom[data_in[107:104]],
					rom[data_in[103:100]],
					rom[data_in[99:96]],
					
					" ",//rom[data_in[95:92]],
					
					rom[data_in[91:88]], //Read Addr
					rom[data_in[87:84]],
					
					" ",//rom[data_in[83:80]],
					
					rom[data_in[79:76]],//Write Addr
					rom[data_in[75:72]],
					
					" ",//rom[data_in[71:68]],
					" ",//rom[data_in[67:64]],
					
					
					rom[data_in[63:60]], //state
					" ",//rom[data_in[59:56]],
					
					rom[data_in[55:52]], //type
					" ",//rom[data_in[51:48]],
					
					rom[data_in[47:44]], //code
					" ",//rom[data_in[43:40]],
					
					rom[data_in[39:36]], //stage
					" ",//rom[data_in[35:32]],
					
					rom[data_in[31:28]], // PC
					rom[data_in[27:24]],
					
					" ",//rom[data_in[23:20]],
					
					" ",//rom[data_in[19:16]], //rigister content
					rom[data_in[15:12]],
					rom[data_in[11:8]],
					rom[data_in[7:4]],
					rom[data_in[3:0]]
					};


endmodule
