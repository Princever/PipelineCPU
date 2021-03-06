/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000764195782_1618578332_init();
    work_m_00000000000352977736_1199837496_init();
    work_m_00000000001587146704_0205589395_init();
    work_m_00000000001021635878_1411027795_init();
    work_m_00000000002086280979_2964965119_init();
    work_m_00000000000203058243_0758064266_init();
    work_m_00000000002503914016_2885957937_init();
    work_m_00000000001268091035_2725559894_init();
    work_m_00000000000216124737_1137345619_init();
    work_m_00000000002329314731_0848101189_init();
    work_m_00000000002329314731_2222800878_init();
    work_m_00000000000812439895_4146840011_init();
    work_m_00000000003273161125_1365035647_init();
    work_m_00000000000912845734_4205961752_init();
    work_m_00000000002174634608_0870672845_init();
    work_m_00000000002724728169_2035772043_init();
    work_m_00000000003488115313_2455246198_init();
    work_m_00000000002068161263_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002068161263_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
