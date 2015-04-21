`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:43:07 04/02/2015
// Design Name:   lcdtest
// Module Name:   E:/Study/Computer Architecture/Lab/Lab1/lab1/test.v
// Project Name:  lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lcdtest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg CCLK;
	reg [3:0] BTN;
	reg [3:0] SW;

	// Outputs
	wire LCDRS;
	wire LCDRW;
	wire LCDE;
	wire [3:0] LCDDAT;

	// Instantiate the Unit Under Test (UUT)
	lcdtest uut (
		.CCLK(CCLK), 
		.BTN(BTN), 
		.SW(SW), 
		.LCDRS(LCDRS), 
		.LCDRW(LCDRW), 
		.LCDE(LCDE), 
		.LCDDAT(LCDDAT)
	);
	
	parameter PERIOD = 20;
	parameter real DUTY_CYCLE = 0.5;
	initial forever begin
		CCLK = 1'b0;
		#(PERIOD-(PERIOD*DUTY_CYCLE)) CCLK = 1'b1;
		#(PERIOD*DUTY_CYCLE);
	end
	
	integer i;

	initial begin
		// Initialize Inputs
		CCLK = 0;
		BTN = 0;
		SW = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
		SW = 4'b0000;
		for (i=0; i<50; i=i+1) begin
			#120 BTN[0] = 1;
			#100 BTN[0] = 0;
		end

        
		// Add stimulus here

	end
      
endmodule

