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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//TOWER5/home29/b3062393/Projects/EEE8004/ALU/ALU.vhdl";
extern char *IEEE_P_0774719531;

char *ieee_p_0774719531_sub_436351764_2162500114(char *, char *, char *, char *, int );
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3243);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 3245);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 3247);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 3249);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(25, ng0);

LAB2:    t1 = (t0 + 1816);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(21, ng0);
    t15 = (t0 + 776U);
    t16 = *((char **)t15);
    t15 = (t0 + 3176U);
    t17 = (t0 + 868U);
    t18 = *((char **)t17);
    t17 = (t0 + 3192U);
    t19 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t16, t15, t18, t17);
    t20 = (t14 + 12U);
    t21 = *((unsigned int *)t20);
    t22 = (1U * t21);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB13;

LAB14:    t24 = (t0 + 1860);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 4U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB4:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3176U);
    t3 = (t0 + 868U);
    t5 = *((char **)t3);
    t3 = (t0 + 3192U);
    t6 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t14, t2, t1, t5, t3);
    t8 = (t14 + 12U);
    t21 = *((unsigned int *)t8);
    t22 = (1U * t21);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB15;

LAB16:    t9 = (t0 + 1860);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3176U);
    t3 = ieee_p_0774719531_sub_436351764_2162500114(IEEE_P_0774719531, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t21 = *((unsigned int *)t5);
    t22 = (1U * t21);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB17;

LAB18:    t6 = (t0 + 1860);
    t8 = (t6 + 32U);
    t9 = *((char **)t8);
    t11 = (t9 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3192U);
    t3 = ieee_p_0774719531_sub_436351764_2162500114(IEEE_P_0774719531, t14, t2, t1, 1);
    t5 = (t14 + 12U);
    t21 = *((unsigned int *)t5);
    t22 = (1U * t21);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB19;

LAB20:    t6 = (t0 + 1860);
    t8 = (t6 + 32U);
    t9 = *((char **)t8);
    t11 = (t9 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB12:;
LAB13:    xsi_size_not_matching(4U, t22, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(4U, t22, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(4U, t22, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t22, 0);
    goto LAB20;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/ALU_tbv_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
