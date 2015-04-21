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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Study/Computer Architecture/Lab/Lab1/lab1/ctrl.v";
static unsigned int ng1[] = {75809U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {96U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {32U, 0U};
static unsigned int ng10[] = {34U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {36U, 0U};
static unsigned int ng13[] = {37U, 0U};
static unsigned int ng14[] = {38U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {39U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {42U, 0U};
static unsigned int ng19[] = {7U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {8U, 0U};
static unsigned int ng22[] = {33U, 0U};
static unsigned int ng23[] = {9U, 0U};
static unsigned int ng24[] = {35U, 0U};
static unsigned int ng25[] = {10U, 0U};
static unsigned int ng26[] = {43U, 0U};
static unsigned int ng27[] = {11U, 0U};
static unsigned int ng28[] = {65552U, 0U};
static unsigned int ng29[] = {80U, 0U};
static unsigned int ng30[] = {41U, 0U};
static unsigned int ng31[] = {65888U, 0U};
static unsigned int ng32[] = {32912U, 0U};
static unsigned int ng33[] = {67436U, 0U};
static unsigned int ng34[] = {12U, 0U};
static unsigned int ng35[] = {13U, 0U};
static unsigned int ng36[] = {14U, 0U};
static unsigned int ng37[] = {15U, 0U};
static unsigned int ng38[] = {1128U, 0U};
static unsigned int ng39[] = {26U, 0U};
static unsigned int ng40[] = {88U, 0U};
static unsigned int ng41[] = {24657U, 0U};
static unsigned int ng42[] = {18U, 0U};
static unsigned int ng43[] = {20561U, 0U};
static unsigned int ng44[] = {21U, 0U};
static unsigned int ng45[] = {520U, 0U};
static unsigned int ng46[] = {24656U, 0U};
static unsigned int ng47[] = {64U, 0U};
static unsigned int ng48[] = {17U, 0U};
static unsigned int ng49[] = {19U, 0U};
static unsigned int ng50[] = {20560U, 0U};



static void Cont_63_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 10920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 10000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_64_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(64, ng0);

LAB2:    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t3 = (t0 + 9360);
    xsi_vlogvar_assign_value(t3, t1, 1, 0, 2);
    t4 = (t0 + 9200);
    xsi_vlogvar_assign_value(t4, t1, 3, 0, 1);
    t5 = (t0 + 9040);
    t7 = (t0 + 9040);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB3;

LAB4:    t14 = (t0 + 8880);
    xsi_vlogvar_assign_value(t14, t1, 5, 0, 2);
    t15 = (t0 + 8720);
    xsi_vlogvar_assign_value(t15, t1, 7, 0, 2);
    t16 = (t0 + 8560);
    xsi_vlogvar_assign_value(t16, t1, 9, 0, 2);
    t17 = (t0 + 8240);
    xsi_vlogvar_assign_value(t17, t1, 11, 0, 1);
    t18 = (t0 + 8080);
    xsi_vlogvar_assign_value(t18, t1, 12, 0, 1);
    t19 = (t0 + 7920);
    xsi_vlogvar_assign_value(t19, t1, 13, 0, 1);
    t20 = (t0 + 7760);
    xsi_vlogvar_assign_value(t20, t1, 14, 0, 1);
    t21 = (t0 + 7600);
    xsi_vlogvar_assign_value(t21, t1, 15, 0, 1);
    t22 = (t0 + 7440);
    xsi_vlogvar_assign_value(t22, t1, 16, 0, 1);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 9040);
    t3 = (t0 + 9040);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t6, t5, 2, t7, 32, 1);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 8400);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 9840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
LAB3:    xsi_vlogvar_assign_value(t5, t1, 4, *((unsigned int *)t6), 1);
    goto LAB4;

LAB5:    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t6), 1);
    goto LAB6;

}

static void Always_71_2(char *t0)
{
    char t6[8];
    char t33[8];
    char t52[8];
    char t53[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 11752);
    *((int *)t2) = 1;
    t3 = (t0 + 11448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 6240U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(77, ng0);

LAB15:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 10000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB16:    t5 = ((char*)((ng5)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t40 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng44)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng25)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng19)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng21)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng27)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng48)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng42)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng49)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng34)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng37)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng35)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng36)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng20)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t40 == 1)
        goto LAB57;

LAB58:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t40 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t40 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:    xsi_set_current_line(395, ng0);

LAB342:    xsi_set_current_line(396, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB343;

LAB344:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);
    xsi_set_current_line(397, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(398, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB63:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(73, ng0);

LAB12:    xsi_set_current_line(74, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    t30 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t30, t28, 1, 0, 2, 0LL);
    t31 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t31, t28, 3, 0, 1, 0LL);
    t32 = (t0 + 9040);
    t34 = (t0 + 9040);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t33, t36, 2, t37, 32, 1);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB13;

LAB14:    t41 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t41, t28, 5, 0, 2, 0LL);
    t42 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t42, t28, 7, 0, 2, 0LL);
    t43 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t43, t28, 9, 0, 2, 0LL);
    t44 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t44, t28, 11, 0, 1, 0LL);
    t45 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t45, t28, 12, 0, 1, 0LL);
    t46 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t46, t28, 13, 0, 1, 0LL);
    t47 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t47, t28, 14, 0, 1, 0LL);
    t48 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t48, t28, 15, 0, 1, 0LL);
    t49 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t49, t28, 16, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB11;

LAB13:    xsi_vlogvar_wait_assign_value(t32, t28, 4, *((unsigned int *)t33), 1, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(79, ng0);

LAB64:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 6560U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(85, ng0);

LAB71:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t28, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB72;

LAB73:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);

LAB67:    goto LAB63;

LAB19:    xsi_set_current_line(91, ng0);

LAB74:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 6400U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 26);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 63U);

LAB75:    t8 = ((char*)((ng5)));
    t50 = xsi_vlog_unsigned_case_compare(t6, 6, t8, 6);
    if (t50 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng24)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng26)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng22)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng30)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng4)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng17)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng20)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng15)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng21)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng34)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng35)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng36)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng25)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng27)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng23)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng37)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t40 == 1)
        goto LAB108;

LAB109:
LAB111:
LAB110:    xsi_set_current_line(224, ng0);

LAB200:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB201;

LAB202:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB112:    goto LAB63;

LAB21:    xsi_set_current_line(232, ng0);

LAB203:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng39)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB204;

LAB205:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB23:    xsi_set_current_line(237, ng0);

LAB206:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng40)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB207;

LAB208:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB25:    xsi_set_current_line(242, ng0);

LAB209:    xsi_set_current_line(243, ng0);
    t3 = (t0 + 6400U);
    t5 = *((char **)t3);
    memset(t52, 0, 8);
    t3 = (t52 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 26);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 63U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 63U);
    t8 = ((char*)((ng24)));
    memset(t53, 0, 8);
    t21 = (t52 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t52);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB213;

LAB210:    if (t26 != 0)
        goto LAB212;

LAB211:    *((unsigned int *)t53) = 1;

LAB213:    t29 = (t53 + 4);
    t88 = *((unsigned int *)t29);
    t89 = (~(t88));
    t90 = *((unsigned int *)t53);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 26);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 26);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t7 = ((char*)((ng22)));
    memset(t53, 0, 8);
    t8 = (t52 + 4);
    t21 = (t7 + 4);
    t15 = *((unsigned int *)t52);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB223;

LAB220:    if (t26 != 0)
        goto LAB222;

LAB221:    *((unsigned int *)t53) = 1;

LAB223:    t28 = (t53 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t53);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB224;

LAB225:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 26);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 26);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t7 = ((char*)((ng30)));
    memset(t53, 0, 8);
    t8 = (t52 + 4);
    t21 = (t7 + 4);
    t15 = *((unsigned int *)t52);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB233;

LAB230:    if (t26 != 0)
        goto LAB232;

LAB231:    *((unsigned int *)t53) = 1;

LAB233:    t28 = (t53 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t53);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB234;

LAB235:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 26);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 26);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t7 = ((char*)((ng26)));
    memset(t53, 0, 8);
    t8 = (t52 + 4);
    t21 = (t7 + 4);
    t15 = *((unsigned int *)t52);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB243;

LAB240:    if (t26 != 0)
        goto LAB242;

LAB241:    *((unsigned int *)t53) = 1;

LAB243:    t28 = (t53 + 4);
    t88 = *((unsigned int *)t28);
    t89 = (~(t88));
    t90 = *((unsigned int *)t53);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB244;

LAB245:
LAB246:
LAB236:
LAB226:
LAB216:    goto LAB63;

LAB27:    xsi_set_current_line(262, ng0);

LAB250:    xsi_set_current_line(263, ng0);
    t3 = (t0 + 6400U);
    t5 = *((char **)t3);
    memset(t52, 0, 8);
    t3 = (t52 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 26);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 63U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 63U);
    t8 = ((char*)((ng30)));
    memset(t53, 0, 8);
    t21 = (t52 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t52);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB254;

LAB251:    if (t26 != 0)
        goto LAB253;

LAB252:    *((unsigned int *)t53) = 1;

LAB254:    t29 = (t53 + 4);
    t88 = *((unsigned int *)t29);
    t89 = (~(t88));
    t90 = *((unsigned int *)t53);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB255;

LAB256:
LAB257:    goto LAB63;

LAB29:    xsi_set_current_line(270, ng0);

LAB261:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB262;

LAB263:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB31:    xsi_set_current_line(276, ng0);

LAB264:    xsi_set_current_line(277, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB265;

LAB266:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB33:    xsi_set_current_line(282, ng0);

LAB267:    xsi_set_current_line(283, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB268;

LAB269:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB35:    xsi_set_current_line(288, ng0);

LAB270:    xsi_set_current_line(289, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB271;

LAB272:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB37:    xsi_set_current_line(294, ng0);

LAB273:    xsi_set_current_line(295, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB274;

LAB275:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB39:    xsi_set_current_line(300, ng0);

LAB276:    xsi_set_current_line(301, ng0);
    t3 = (t0 + 6560U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB277;

LAB278:    xsi_set_current_line(305, ng0);

LAB283:    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB284;

LAB285:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);

LAB279:    goto LAB63;

LAB41:    xsi_set_current_line(312, ng0);

LAB286:    xsi_set_current_line(313, ng0);
    t3 = (t0 + 6560U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB287;

LAB288:    xsi_set_current_line(319, ng0);

LAB295:    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB296;

LAB297:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);

LAB289:    goto LAB63;

LAB43:    xsi_set_current_line(325, ng0);

LAB298:    xsi_set_current_line(326, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB299;

LAB300:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9040);
    t5 = (t0 + 9040);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t52, t8, 2, t21, 32, 1);
    t22 = (t52 + 4);
    t9 = *((unsigned int *)t22);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB301;

LAB302:    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB45:    xsi_set_current_line(331, ng0);

LAB303:    xsi_set_current_line(332, ng0);
    t3 = (t0 + 6560U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB304;

LAB305:    xsi_set_current_line(338, ng0);

LAB312:    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB313;

LAB314:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);

LAB306:    goto LAB63;

LAB47:    xsi_set_current_line(344, ng0);

LAB315:    xsi_set_current_line(345, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB316;

LAB317:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9040);
    t5 = (t0 + 9040);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t52, t8, 2, t21, 32, 1);
    t22 = (t52 + 4);
    t9 = *((unsigned int *)t22);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB318;

LAB319:    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng44)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB49:    xsi_set_current_line(352, ng0);

LAB320:    xsi_set_current_line(353, ng0);
    t3 = (t0 + 6560U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB321;

LAB322:    xsi_set_current_line(359, ng0);

LAB327:    xsi_set_current_line(360, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng50)));
    t3 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 2, 0LL);
    t7 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t7, t2, 3, 0, 1, 0LL);
    t8 = (t0 + 9040);
    t21 = (t0 + 9040);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t28, 2, t29, 32, 1);
    t30 = (t52 + 4);
    t9 = *((unsigned int *)t30);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB328;

LAB329:    t31 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t31, t2, 5, 0, 2, 0LL);
    t32 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t32, t2, 7, 0, 2, 0LL);
    t34 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t34, t2, 9, 0, 2, 0LL);
    t35 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t35, t2, 11, 0, 1, 0LL);
    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t2, 12, 0, 1, 0LL);
    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t2, 13, 0, 1, 0LL);
    t38 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t38, t2, 14, 0, 1, 0LL);
    t41 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t41, t2, 15, 0, 1, 0LL);
    t42 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t42, t2, 16, 0, 1, 0LL);

LAB323:    goto LAB63;

LAB51:    xsi_set_current_line(365, ng0);

LAB330:    xsi_set_current_line(366, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB331;

LAB332:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(368, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB53:    xsi_set_current_line(372, ng0);

LAB333:    xsi_set_current_line(373, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB334;

LAB335:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB55:    xsi_set_current_line(378, ng0);

LAB336:    xsi_set_current_line(379, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB337;

LAB338:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB57:    xsi_set_current_line(385, ng0);

LAB339:    xsi_set_current_line(386, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB340;

LAB341:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB63;

LAB59:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 2648);
    t5 = *((char **)t2);
    t2 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB63;

LAB65:    xsi_set_current_line(80, ng0);

LAB68:    xsi_set_current_line(81, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    t28 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t28, t21, 1, 0, 2, 0LL);
    t29 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t29, t21, 3, 0, 1, 0LL);
    t30 = (t0 + 9040);
    t31 = (t0 + 9040);
    t32 = (t31 + 72U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t34, 2, t35, 32, 1);
    t36 = (t6 + 4);
    t14 = *((unsigned int *)t36);
    t50 = (!(t14));
    if (t50 == 1)
        goto LAB69;

LAB70:    t37 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t37, t21, 5, 0, 2, 0LL);
    t38 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t38, t21, 7, 0, 2, 0LL);
    t41 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t41, t21, 9, 0, 2, 0LL);
    t42 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t42, t21, 11, 0, 1, 0LL);
    t43 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t43, t21, 12, 0, 1, 0LL);
    t44 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t44, t21, 13, 0, 1, 0LL);
    t45 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t45, t21, 14, 0, 1, 0LL);
    t46 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t46, t21, 15, 0, 1, 0LL);
    t47 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t47, t21, 16, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB67;

LAB69:    xsi_vlogvar_wait_assign_value(t30, t21, 4, *((unsigned int *)t6), 1, 0LL);
    goto LAB70;

LAB72:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t6), 1, 0LL);
    goto LAB73;

LAB76:    xsi_set_current_line(93, ng0);

LAB113:    xsi_set_current_line(95, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    t28 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t28, t21, 1, 0, 2, 0LL);
    t29 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t29, t21, 3, 0, 1, 0LL);
    t30 = (t0 + 9040);
    t31 = (t0 + 9040);
    t32 = (t31 + 72U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t33, t34, 2, t35, 32, 1);
    t36 = (t33 + 4);
    t15 = *((unsigned int *)t36);
    t51 = (!(t15));
    if (t51 == 1)
        goto LAB114;

LAB115:    t37 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t37, t21, 5, 0, 2, 0LL);
    t38 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t38, t21, 7, 0, 2, 0LL);
    t41 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t41, t21, 9, 0, 2, 0LL);
    t42 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t42, t21, 11, 0, 1, 0LL);
    t43 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t43, t21, 12, 0, 1, 0LL);
    t44 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t44, t21, 13, 0, 1, 0LL);
    t45 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t45, t21, 14, 0, 1, 0LL);
    t46 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t46, t21, 15, 0, 1, 0LL);
    t47 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t47, t21, 16, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6400U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);

LAB116:    t7 = ((char*)((ng9)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t7, 6);
    if (t40 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng13)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng14)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng16)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng18)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng4)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng5)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng22)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng24)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng26)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng21)));
    t40 = xsi_vlog_unsigned_case_compare(t33, 6, t2, 6);
    if (t40 == 1)
        goto LAB141;

LAB142:
LAB144:
LAB143:    xsi_set_current_line(117, ng0);

LAB149:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 9520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 9360);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 9200);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 9040);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t53, 0, 8);
    t34 = (t53 + 4);
    t35 = (t32 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t53) = t11;
    t12 = *((unsigned int *)t35);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t34) = t14;
    t36 = (t0 + 8880);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t41 = (t0 + 8720);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t0 + 8560);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t0 + 8240);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t54 = (t0 + 8080);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t0 + 7920);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t0 + 7760);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t0 + 7600);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = (t0 + 7440);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    xsi_vlogtype_concat(t52, 17, 17, 13U, t68, 1, t65, 1, t62, 1, t59, 1, t56, 1, t49, 1, t46, 2, t43, 2, t38, 2, t53, 1, t29, 1, t21, 2, t5, 1);
    t69 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t69, t52, 0, 0, 1, 0LL);
    t70 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t70, t52, 1, 0, 2, 0LL);
    t71 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t71, t52, 3, 0, 1, 0LL);
    t72 = (t0 + 9040);
    t74 = (t0 + 9040);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t76, 2, t77, 32, 1);
    t78 = (t73 + 4);
    t15 = *((unsigned int *)t78);
    t40 = (!(t15));
    if (t40 == 1)
        goto LAB150;

LAB151:    t79 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t79, t52, 5, 0, 2, 0LL);
    t80 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t80, t52, 7, 0, 2, 0LL);
    t81 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t81, t52, 9, 0, 2, 0LL);
    t82 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t82, t52, 11, 0, 1, 0LL);
    t83 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t83, t52, 12, 0, 1, 0LL);
    t84 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t84, t52, 13, 0, 1, 0LL);
    t85 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t85, t52, 14, 0, 1, 0LL);
    t86 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t86, t52, 15, 0, 1, 0LL);
    t87 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t87, t52, 16, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 9840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 10000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);

LAB145:    goto LAB112;

LAB78:    xsi_set_current_line(126, ng0);

LAB152:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB153;

LAB154:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB80:    xsi_set_current_line(132, ng0);

LAB155:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB156;

LAB157:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB82:    xsi_set_current_line(139, ng0);

LAB158:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB159;

LAB160:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB84:    xsi_set_current_line(145, ng0);

LAB161:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB162;

LAB163:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB86:    xsi_set_current_line(152, ng0);

LAB164:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB165;

LAB166:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB88:    xsi_set_current_line(157, ng0);

LAB167:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB168;

LAB169:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB90:    xsi_set_current_line(164, ng0);

LAB170:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB171;

LAB172:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB92:    xsi_set_current_line(171, ng0);

LAB173:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB174;

LAB175:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB94:    xsi_set_current_line(176, ng0);

LAB176:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB177;

LAB178:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB96:    xsi_set_current_line(182, ng0);

LAB179:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB180;

LAB181:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB98:    xsi_set_current_line(188, ng0);

LAB182:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB183;

LAB184:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB100:    xsi_set_current_line(194, ng0);

LAB185:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB186;

LAB187:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB102:    xsi_set_current_line(200, ng0);

LAB188:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB189;

LAB190:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB104:    xsi_set_current_line(206, ng0);

LAB191:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB192;

LAB193:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB106:    xsi_set_current_line(212, ng0);

LAB194:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB195;

LAB196:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB108:    xsi_set_current_line(219, ng0);

LAB197:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng38)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB198;

LAB199:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB112;

LAB114:    xsi_vlogvar_wait_assign_value(t30, t21, 4, *((unsigned int *)t33), 1, 0LL);
    goto LAB115;

LAB117:    xsi_set_current_line(99, ng0);
    t8 = ((char*)((ng4)));
    t21 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB145;

LAB119:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB121:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB123:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB125:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB127:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB129:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB131:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB133:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB135:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB137:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB139:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB145;

LAB141:    xsi_set_current_line(112, ng0);

LAB146:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    t7 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t7, t3, 1, 0, 2, 0LL);
    t8 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t21 = (t0 + 9040);
    t22 = (t0 + 9040);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t29, 2, t30, 32, 1);
    t31 = (t52 + 4);
    t9 = *((unsigned int *)t31);
    t50 = (!(t9));
    if (t50 == 1)
        goto LAB147;

LAB148:    t32 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t32, t3, 5, 0, 2, 0LL);
    t34 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t34, t3, 7, 0, 2, 0LL);
    t35 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t35, t3, 9, 0, 2, 0LL);
    t36 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t36, t3, 11, 0, 1, 0LL);
    t37 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t37, t3, 12, 0, 1, 0LL);
    t38 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t38, t3, 13, 0, 1, 0LL);
    t41 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t41, t3, 14, 0, 1, 0LL);
    t42 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t42, t3, 15, 0, 1, 0LL);
    t43 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t43, t3, 16, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB145;

LAB147:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB148;

LAB150:    xsi_vlogvar_wait_assign_value(t72, t52, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB151;

LAB153:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB154;

LAB156:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB157;

LAB159:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB160;

LAB162:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB163;

LAB165:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB166;

LAB168:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB169;

LAB171:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB172;

LAB174:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB175;

LAB177:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB178;

LAB180:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB181;

LAB183:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB184;

LAB186:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB187;

LAB189:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB190;

LAB192:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB193;

LAB195:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB196;

LAB198:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB199;

LAB201:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB202;

LAB204:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB205;

LAB207:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB208;

LAB212:    t28 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB213;

LAB214:    xsi_set_current_line(243, ng0);

LAB217:    xsi_set_current_line(244, ng0);
    t30 = ((char*)((ng41)));
    t31 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    t32 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t32, t30, 1, 0, 2, 0LL);
    t34 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t34, t30, 3, 0, 1, 0LL);
    t35 = (t0 + 9040);
    t36 = (t0 + 9040);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t41 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t38, 2, t41, 32, 1);
    t42 = (t73 + 4);
    t93 = *((unsigned int *)t42);
    t50 = (!(t93));
    if (t50 == 1)
        goto LAB218;

LAB219:    t43 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t43, t30, 5, 0, 2, 0LL);
    t44 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t44, t30, 7, 0, 2, 0LL);
    t45 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t45, t30, 9, 0, 2, 0LL);
    t46 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t46, t30, 11, 0, 1, 0LL);
    t47 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t47, t30, 12, 0, 1, 0LL);
    t48 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t48, t30, 13, 0, 1, 0LL);
    t49 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t49, t30, 14, 0, 1, 0LL);
    t54 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t54, t30, 15, 0, 1, 0LL);
    t55 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t55, t30, 16, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB216;

LAB218:    xsi_vlogvar_wait_assign_value(t35, t30, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB219;

LAB222:    t22 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB223;

LAB224:    xsi_set_current_line(247, ng0);

LAB227:    xsi_set_current_line(248, ng0);
    t29 = ((char*)((ng41)));
    t30 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    t31 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t31, t29, 1, 0, 2, 0LL);
    t32 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t32, t29, 3, 0, 1, 0LL);
    t34 = (t0 + 9040);
    t35 = (t0 + 9040);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t37, 2, t38, 32, 1);
    t41 = (t73 + 4);
    t93 = *((unsigned int *)t41);
    t40 = (!(t93));
    if (t40 == 1)
        goto LAB228;

LAB229:    t42 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t42, t29, 5, 0, 2, 0LL);
    t43 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t43, t29, 7, 0, 2, 0LL);
    t44 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t44, t29, 9, 0, 2, 0LL);
    t45 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t45, t29, 11, 0, 1, 0LL);
    t46 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t46, t29, 12, 0, 1, 0LL);
    t47 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t47, t29, 13, 0, 1, 0LL);
    t48 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t48, t29, 14, 0, 1, 0LL);
    t49 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t49, t29, 15, 0, 1, 0LL);
    t54 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t54, t29, 16, 0, 1, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB226;

LAB228:    xsi_vlogvar_wait_assign_value(t34, t29, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB229;

LAB232:    t22 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB233;

LAB234:    xsi_set_current_line(251, ng0);

LAB237:    xsi_set_current_line(252, ng0);
    t29 = ((char*)((ng41)));
    t30 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    t31 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t31, t29, 1, 0, 2, 0LL);
    t32 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t32, t29, 3, 0, 1, 0LL);
    t34 = (t0 + 9040);
    t35 = (t0 + 9040);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t37, 2, t38, 32, 1);
    t41 = (t73 + 4);
    t93 = *((unsigned int *)t41);
    t40 = (!(t93));
    if (t40 == 1)
        goto LAB238;

LAB239:    t42 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t42, t29, 5, 0, 2, 0LL);
    t43 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t43, t29, 7, 0, 2, 0LL);
    t44 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t44, t29, 9, 0, 2, 0LL);
    t45 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t45, t29, 11, 0, 1, 0LL);
    t46 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t46, t29, 12, 0, 1, 0LL);
    t47 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t47, t29, 13, 0, 1, 0LL);
    t48 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t48, t29, 14, 0, 1, 0LL);
    t49 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t49, t29, 15, 0, 1, 0LL);
    t54 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t54, t29, 16, 0, 1, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng42)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB236;

LAB238:    xsi_vlogvar_wait_assign_value(t34, t29, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB239;

LAB242:    t22 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB243;

LAB244:    xsi_set_current_line(256, ng0);

LAB247:    xsi_set_current_line(257, ng0);
    t29 = ((char*)((ng43)));
    t30 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    t31 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t31, t29, 1, 0, 2, 0LL);
    t32 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t32, t29, 3, 0, 1, 0LL);
    t34 = (t0 + 9040);
    t35 = (t0 + 9040);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t37, 2, t38, 32, 1);
    t41 = (t73 + 4);
    t93 = *((unsigned int *)t41);
    t40 = (!(t93));
    if (t40 == 1)
        goto LAB248;

LAB249:    t42 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t42, t29, 5, 0, 2, 0LL);
    t43 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t43, t29, 7, 0, 2, 0LL);
    t44 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t44, t29, 9, 0, 2, 0LL);
    t45 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t45, t29, 11, 0, 1, 0LL);
    t46 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t46, t29, 12, 0, 1, 0LL);
    t47 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t47, t29, 13, 0, 1, 0LL);
    t48 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t48, t29, 14, 0, 1, 0LL);
    t49 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t49, t29, 15, 0, 1, 0LL);
    t54 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t54, t29, 16, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB246;

LAB248:    xsi_vlogvar_wait_assign_value(t34, t29, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB249;

LAB253:    t28 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB254;

LAB255:    xsi_set_current_line(263, ng0);

LAB258:    xsi_set_current_line(264, ng0);
    t30 = ((char*)((ng43)));
    t31 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    t32 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t32, t30, 1, 0, 2, 0LL);
    t34 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t34, t30, 3, 0, 1, 0LL);
    t35 = (t0 + 9040);
    t36 = (t0 + 9040);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t41 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t73, t38, 2, t41, 32, 1);
    t42 = (t73 + 4);
    t93 = *((unsigned int *)t42);
    t50 = (!(t93));
    if (t50 == 1)
        goto LAB259;

LAB260:    t43 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t43, t30, 5, 0, 2, 0LL);
    t44 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t44, t30, 7, 0, 2, 0LL);
    t45 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t45, t30, 9, 0, 2, 0LL);
    t46 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t46, t30, 11, 0, 1, 0LL);
    t47 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t47, t30, 12, 0, 1, 0LL);
    t48 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t48, t30, 13, 0, 1, 0LL);
    t49 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t49, t30, 14, 0, 1, 0LL);
    t54 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t54, t30, 15, 0, 1, 0LL);
    t55 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t55, t30, 16, 0, 1, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB257;

LAB259:    xsi_vlogvar_wait_assign_value(t35, t30, 4, *((unsigned int *)t73), 1, 0LL);
    goto LAB260;

LAB262:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB263;

LAB265:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB266;

LAB268:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB269;

LAB271:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB272;

LAB274:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB275;

LAB277:    xsi_set_current_line(301, ng0);

LAB280:    xsi_set_current_line(302, ng0);
    t7 = ((char*)((ng45)));
    t8 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    t21 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t21, t7, 1, 0, 2, 0LL);
    t22 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t22, t7, 3, 0, 1, 0LL);
    t28 = (t0 + 9040);
    t29 = (t0 + 9040);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t31, 2, t32, 32, 1);
    t34 = (t52 + 4);
    t14 = *((unsigned int *)t34);
    t50 = (!(t14));
    if (t50 == 1)
        goto LAB281;

LAB282:    t35 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t35, t7, 5, 0, 2, 0LL);
    t36 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t36, t7, 7, 0, 2, 0LL);
    t37 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t37, t7, 9, 0, 2, 0LL);
    t38 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t38, t7, 11, 0, 1, 0LL);
    t41 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t41, t7, 12, 0, 1, 0LL);
    t42 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t42, t7, 13, 0, 1, 0LL);
    t43 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t43, t7, 14, 0, 1, 0LL);
    t44 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t44, t7, 15, 0, 1, 0LL);
    t45 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t45, t7, 16, 0, 1, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB279;

LAB281:    xsi_vlogvar_wait_assign_value(t28, t7, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB282;

LAB284:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB285;

LAB287:    xsi_set_current_line(313, ng0);

LAB290:    xsi_set_current_line(314, ng0);
    t7 = ((char*)((ng47)));
    t8 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    t21 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t21, t7, 1, 0, 2, 0LL);
    t22 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t22, t7, 3, 0, 1, 0LL);
    t28 = (t0 + 9040);
    t29 = (t0 + 9040);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t31, 2, t32, 32, 1);
    t34 = (t52 + 4);
    t14 = *((unsigned int *)t34);
    t50 = (!(t14));
    if (t50 == 1)
        goto LAB291;

LAB292:    t35 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t35, t7, 5, 0, 2, 0LL);
    t36 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t36, t7, 7, 0, 2, 0LL);
    t37 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t37, t7, 9, 0, 2, 0LL);
    t38 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t38, t7, 11, 0, 1, 0LL);
    t41 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t41, t7, 12, 0, 1, 0LL);
    t42 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t42, t7, 13, 0, 1, 0LL);
    t43 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t43, t7, 14, 0, 1, 0LL);
    t44 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t44, t7, 15, 0, 1, 0LL);
    t45 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t45, t7, 16, 0, 1, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9040);
    t5 = (t0 + 9040);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t52, t8, 2, t21, 32, 1);
    t22 = (t52 + 4);
    t9 = *((unsigned int *)t22);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB293;

LAB294:    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng48)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB289;

LAB291:    xsi_vlogvar_wait_assign_value(t28, t7, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB292;

LAB293:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t52), 1, 0LL);
    goto LAB294;

LAB296:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB297;

LAB299:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB300;

LAB301:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t52), 1, 0LL);
    goto LAB302;

LAB304:    xsi_set_current_line(332, ng0);

LAB307:    xsi_set_current_line(333, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    t21 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t21, t7, 1, 0, 2, 0LL);
    t22 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t22, t7, 3, 0, 1, 0LL);
    t28 = (t0 + 9040);
    t29 = (t0 + 9040);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t31, 2, t32, 32, 1);
    t34 = (t52 + 4);
    t14 = *((unsigned int *)t34);
    t50 = (!(t14));
    if (t50 == 1)
        goto LAB308;

LAB309:    t35 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t35, t7, 5, 0, 2, 0LL);
    t36 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t36, t7, 7, 0, 2, 0LL);
    t37 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t37, t7, 9, 0, 2, 0LL);
    t38 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t38, t7, 11, 0, 1, 0LL);
    t41 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t41, t7, 12, 0, 1, 0LL);
    t42 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t42, t7, 13, 0, 1, 0LL);
    t43 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t43, t7, 14, 0, 1, 0LL);
    t44 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t44, t7, 15, 0, 1, 0LL);
    t45 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t45, t7, 16, 0, 1, 0LL);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9040);
    t5 = (t0 + 9040);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t52, t8, 2, t21, 32, 1);
    t22 = (t52 + 4);
    t9 = *((unsigned int *)t22);
    t40 = (!(t9));
    if (t40 == 1)
        goto LAB310;

LAB311:    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB306;

LAB308:    xsi_vlogvar_wait_assign_value(t28, t7, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB309;

LAB310:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t52), 1, 0LL);
    goto LAB311;

LAB313:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB314;

LAB316:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB317;

LAB318:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t52), 1, 0LL);
    goto LAB319;

LAB321:    xsi_set_current_line(353, ng0);

LAB324:    xsi_set_current_line(354, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 9520);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    t21 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t21, t7, 1, 0, 2, 0LL);
    t22 = (t0 + 9200);
    xsi_vlogvar_wait_assign_value(t22, t7, 3, 0, 1, 0LL);
    t28 = (t0 + 9040);
    t29 = (t0 + 9040);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t52, t31, 2, t32, 32, 1);
    t34 = (t52 + 4);
    t14 = *((unsigned int *)t34);
    t50 = (!(t14));
    if (t50 == 1)
        goto LAB325;

LAB326:    t35 = (t0 + 8880);
    xsi_vlogvar_wait_assign_value(t35, t7, 5, 0, 2, 0LL);
    t36 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t36, t7, 7, 0, 2, 0LL);
    t37 = (t0 + 8560);
    xsi_vlogvar_wait_assign_value(t37, t7, 9, 0, 2, 0LL);
    t38 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t38, t7, 11, 0, 1, 0LL);
    t41 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t41, t7, 12, 0, 1, 0LL);
    t42 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t42, t7, 13, 0, 1, 0LL);
    t43 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t43, t7, 14, 0, 1, 0LL);
    t44 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t44, t7, 15, 0, 1, 0LL);
    t45 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t45, t7, 16, 0, 1, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB323;

LAB325:    xsi_vlogvar_wait_assign_value(t28, t7, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB326;

LAB328:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB329;

LAB331:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB332;

LAB334:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB335;

LAB337:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB338;

LAB340:    xsi_vlogvar_wait_assign_value(t21, t3, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB341;

LAB343:    xsi_vlogvar_wait_assign_value(t8, t2, 4, *((unsigned int *)t52), 1, 0LL);
    goto LAB344;

}


extern void work_m_00000000002503914016_2885957937_init()
{
	static char *pe[] = {(void *)Cont_63_0,(void *)Initial_64_1,(void *)Always_71_2};
	xsi_register_didat("work_m_00000000002503914016_2885957937", "isim/test_isim_beh.exe.sim/work/m_00000000002503914016_2885957937.didat");
	xsi_register_executes(pe);
}
