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
    work_m_00000000002049366275_2270040502_init();
    work_m_00000000001443604142_4216367567_init();
    work_m_00000000001443604142_4072951516_init();
    work_m_00000000002001710019_3968032659_init();
    work_m_00000000000405530078_0265241739_init();
    work_m_00000000000863156648_1933201353_init();
    work_m_00000000004294385832_0989968751_init();
    work_m_00000000001325905250_3919242788_init();
    work_m_00000000001528427510_2690778345_init();
    work_m_00000000002751536452_3858766097_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002751536452_3858766097");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
