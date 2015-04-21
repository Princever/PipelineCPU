// Spartan-3E Starter Board
// Liquid Crystal Display Test lcdtest.v

module lcdtest(input CCLK, input [3:0] BTN, input [3:0] SW, output LCDRS, LCDRW, LCDE, 
					output [3:0] LCDDAT, output [7:0] LED);
					
wire [3:0] lcdd;
wire rslcd, rwlcd, elcd;
wire debpb0;

wire [127:0] dis_data_in;
wire [255:0]strdata;

wire [31:0] ram_data_in, ram_data_out, Inst, test_out;

wire [31:0] cpu_addr;
wire [7:0] ram_addr;
wire [31:0] pc;
wire [4:0] state;

assign LCDDAT[3]=lcdd[3];
assign LCDDAT[2]=lcdd[2];
assign LCDDAT[1]=lcdd[1];
assign LCDDAT[0]=lcdd[0];

assign LCDRS=rslcd;
assign LCDRW=rwlcd;
assign LCDE=elcd;



wire step;
wire Clk_CPU;
wire data_ram_we;

wire [2:0] reg_addr;
assign reg_addr = SW[2:0];

wire [31:0] reg_out;


assign Clk_CPU = SW[0]?CCLK:step;
assign LED[7] = step;
assign LED[0] = state[0];
assign LED[1] = state[1];
assign LED[2] = state[2];
assign LED[3] = state[3];
assign LED[4] = state[4];
assign LED[5] = 0;
assign LED[6] = 0;



assign dis_data_in = {Inst, 4'h0, ram_addr, 4'h0, ram_addr, 8'h0, 
					state[3:0], 4'h0, 4'h0, 4'h0, 4'h0, 4'h0, 4'h0, 4'h0, pc[7:0], 8'h0, SW[3]?reg_out[31:16]:reg_out[15:0]};

gen_displaydata d0(dis_data_in, strdata);

display M0 (CCLK, step | debpb0, strdata, rslcd, rwlcd, elcd, lcdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
clock M2 (CCLK, 25000, clk);
pbdebounce MM1 (clk, BTN[2], debpb0);
pbdebounce MM2 (clk, BTN[0], step);


Muliti_cycle_Cpu U1(	.clk(step),
						.reset(debpb0),
						.MIO_ready(1), //MIO_ready
						.reg_addr(reg_addr),

						// Internal signals:
						.pc_out(pc), //Test
						.Inst(Inst), //Test
						.mem_w(data_ram_we),
						.Addr_out(cpu_addr),
						.data_out(ram_data_in),
						.data_in(ram_data_out),
						.CPU_MIO(CPU_MIO),

						.state(state), //Test
						.reg_out(reg_out)
						);


assign ram_addr = cpu_addr[9:2];

Mem_I_D U2(	.clk(~clk),
			.W_En(data_ram_we),
			.Addr(ram_addr),
			.D_In(ram_data_in),
			.D_Out(ram_data_out),
			.test_out(test_out)
			); // Addre_Bus [9 : 0] ,Data_Bus [31 : 0]

//
//always @(posedge debpb0)
//begin
////	if(debpb0 == 1'b1) begin
//		temp = temp +1;
//		case(temp) 
//		4'b0000:strdata[7:0] <= "0";
//		4'b0001:strdata[7:0] <= "1";
//		4'b0010:strdata[7:0] <= "2";
//		4'b0011:strdata[7:0] <= "3";
//		4'b0100:strdata[7:0] <= "4";
//		4'b0101:strdata[7:0] <= "5";
//		4'b0110:strdata[7:0] <= "6";
//		4'b0111:strdata[7:0] <= "7";
//		4'b1000:strdata[7:0] <= "8";
//		4'b1001:strdata[7:0] <= "9";
//		4'b1010:strdata[7:0] <= "A";
//		4'b1011:strdata[7:0] <= "B";
//		4'b1100:strdata[7:0] <= "C";
//		4'b1101:strdata[7:0] <= "D";
//		4'b1110:strdata[7:0] <= "E";
//		4'b1111:strdata[7:0] <= "F";
//		default:strdata[7:0] <= "0";
//		endcase
////	end
//end
//
endmodule