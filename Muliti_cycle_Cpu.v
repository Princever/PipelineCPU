`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:21 05/08/2014 
// Design Name: 
// Module Name:    multi_cycle_Cpu 
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
module Muliti_cycle_Cpu( 
	input wire clk,
	input wire reset,
	input wire MIO_ready,
   input wire [31:0]data_in,
	input wire [2:0] reg_addr,
	
   output wire [31:0]pc_out,	//test
	output wire [31:0]Inst,	   //test
	output wire mem_w,	
	output wire [31:0]Addr_out,	
	output wire [31:0]data_out,						
	output wire CPU_MIO,
	output wire [4:0]state,
	output wire [31:0] reg_out
	);

	wire [31:0] PC_Current;
	wire [15:0] imm;
	wire [3:0] ALU_operation;
	wire [1:0] RegDst,MemtoReg,ALUSrcB,PCSource, ALUSrcA;
	wire MemRead,MemWrite,IorD,IRWrite,RegWrite,PCWrite,PCWriteCond,Beq,data2Mem;
	wire zero,overflow;



 	ctrl M1(
 		.clk(clk),
 		.reset(reset),
 		.Inst(Inst),
 		.MIO_ready(MIO_ready),
 		.MemRead(MemRead),
 		.MemWrite(MemWrite),
 		.CPU_MIO(CPU_MIO),
 		.IorD(IorD),
 		.IRWrite(IRWrite),
 		.RegDst(RegDst),
 		.RegWrite(RegWrite),
 		.MemtoReg(MemtoReg),
		.data2Mem(data2Mem),
 		.ALUSrcA(ALUSrcA),
 		.ALUSrcB(ALUSrcB),
 		.PCSource(PCSource),
 		.PCWrite(PCWrite),
 		.PCWriteCond(PCWriteCond),
 		.Beq(Beq),
 		.ALU_operation(ALU_operation),
 		.state_out(state),
 		.zero(zero),
 		.overflow(overflow)
 		);

	data_path M2(
		.clk(clk),
		.reset(reset),
		.MIO_ready(MIO_ready),
		.reg_addr(reg_addr),

		.IorD(IorD),
		.IRWrite(IRWrite),
		.RegDst(RegDst),
		.RegWrite(RegWrite),
		.MemtoReg(MemtoReg),
		.data2Mem(data2Mem),
		.ALUSrcA(ALUSrcA),
		.ALUSrcB(ALUSrcB),
		.PCSource(PCSource),
		.PCWrite(PCWrite),
		.PCWriteCond(PCWriteCond),
		.Beq(Beq),
		
		.ALU_operation(ALU_operation),
		.PC_Current(PC_Current),
		.data2CPU(data_in),
		.Inst_R(Inst),
		.data_out(data_out),
		.M_addr(Addr_out),
		.zero(zero),
		.overflow(overflow),
		.reg_out(reg_out)
		);


	assign mem_w=MemWrite&&(~MemRead);
	assign pc_out=PC_Current;

endmodule
