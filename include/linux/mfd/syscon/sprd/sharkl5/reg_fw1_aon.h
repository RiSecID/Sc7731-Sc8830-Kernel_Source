/*
 * Copyright (C) 2018 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2018-05-10 14:14:25
 *
 */


#ifndef REG_FW1_AON_H
#define REG_FW1_AON_H



#define REG_REG_FW1_AON_REG_RD_CTRL_0          (0x0000)
#define REG_REG_FW1_AON_REG_RD_CTRL_1          (0x0004)
#define REG_REG_FW1_AON_REG_RD_CTRL_2          (0x0008)
#define REG_REG_FW1_AON_REG_RD_CTRL_3          (0x000C)
#define REG_REG_FW1_AON_REG_RD_CTRL_4          (0x0010)
#define REG_REG_FW1_AON_REG_RD_CTRL_5          (0x0014)
#define REG_REG_FW1_AON_REG_RD_CTRL_6          (0x0018)
#define REG_REG_FW1_AON_REG_RD_CTRL_7          (0x001C)
#define REG_REG_FW1_AON_REG_RD_CTRL_8          (0x0020)
#define REG_REG_FW1_AON_REG_WR_CTRL_0          (0x0024)
#define REG_REG_FW1_AON_REG_WR_CTRL_1          (0x0028)
#define REG_REG_FW1_AON_REG_WR_CTRL_2          (0x002C)
#define REG_REG_FW1_AON_REG_WR_CTRL_3          (0x0030)
#define REG_REG_FW1_AON_REG_WR_CTRL_4          (0x0034)
#define REG_REG_FW1_AON_REG_WR_CTRL_5          (0x0038)
#define REG_REG_FW1_AON_REG_WR_CTRL_6          (0x003C)
#define REG_REG_FW1_AON_REG_WR_CTRL_7          (0x0040)
#define REG_REG_FW1_AON_REG_WR_CTRL_8          (0x0044)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY0   (0x0048)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY1   (0x004C)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY2   (0x0050)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY3   (0x0054)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY4   (0x0058)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY5   (0x005C)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY6   (0x0060)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY7   (0x0064)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY8   (0x0068)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY9   (0x006C)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY10  (0x0070)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY11  (0x0074)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY12  (0x0078)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY13  (0x007C)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY14  (0x0080)
#define REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY15  (0x0084)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY0        (0x0088)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY1        (0x008C)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY2        (0x0090)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY3        (0x0094)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY4        (0x0098)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY5        (0x009C)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY6        (0x00A0)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY7        (0x00A4)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY8        (0x00A8)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY9        (0x00AC)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY10       (0x00B0)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY11       (0x00B4)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY12       (0x00B8)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY13       (0x00BC)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY14       (0x00C0)
#define REG_REG_FW1_AON_BIT_CTRL_ARRAY15       (0x00C4)

/* REG_REG_FW1_AON_REG_RD_CTRL_0 */

#define BIT_REG_FW1_AON_XTL1_REL_CFG_RD_SEC                              BIT(31)
#define BIT_REG_FW1_AON_XTL0_REL_CFG_RD_SEC                              BIT(30)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT2_RD_SEC                             BIT(29)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT1_RD_SEC                             BIT(28)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT0_RD_SEC                             BIT(27)
#define BIT_REG_FW1_AON_XTL_WAIT_CNT_RD_SEC                              BIT(26)
#define BIT_REG_FW1_AON_AP_WAKEUP_POR_CFG_RD_SEC                         BIT(25)
#define BIT_REG_FW1_AON_PD_PUB_SYS_CFG_RD_SEC                            BIT(24)
#define BIT_REG_FW1_AON_PUBCP_FRC_STOP_REQ_FOR_WTL_RD_SEC                BIT(23)
#define BIT_REG_FW1_AON_PD_AUDCP_SYS_CFG_RD_SEC                          BIT(22)
#define BIT_REG_FW1_AON_PD_AUDCP_AUDDSP_CFG_RD_SEC                       BIT(21)
#define BIT_REG_FW1_AON_PD_PUBCP_SYS_CFG_RD_SEC                          BIT(20)
#define BIT_REG_FW1_AON_PD_WTLCP_SYS_CFG_RD_SEC                          BIT(19)
#define BIT_REG_FW1_AON_PD_WTLCP_TD_PROC_CFG_RD_SEC                      BIT(18)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_PROC_CFG_RD_SEC                     BIT(17)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_B_CFG_RD_SEC                      BIT(16)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_A_CFG_RD_SEC                      BIT(15)
#define BIT_REG_FW1_AON_PD_WTLCP_TGDSP_CFG_RD_SEC                        BIT(14)
#define BIT_REG_FW1_AON_PD_WTLCP_LDSP_CFG_RD_SEC                         BIT(13)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_DPFEC_CFG_RD_SEC                    BIT(12)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_CE_CFG_RD_SEC                       BIT(11)
#define BIT_REG_FW1_AON_PD_GPU_TOP_CFG0_RD_SEC                           BIT(10)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_CFG1_RD_SEC                      BIT(9)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_CFG0_RD_SEC                      BIT(8)
#define BIT_REG_FW1_AON_PD_MM_TOP_CFG_RD_SEC                             BIT(7)
#define BIT_REG_FW1_AON_PD_AP_SYS_CFG_RD_SEC                             BIT(6)
#define BIT_REG_FW1_AON_PD_AP_VSP_CFG_RD_SEC                             BIT(5)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG2_RD_SEC                         BIT(4)
#define BIT_REG_FW1_AON_PD_APCPU_C2_CFG_RD_SEC                           BIT(3)
#define BIT_REG_FW1_AON_PD_APCPU_C1_CFG_RD_SEC                           BIT(2)
#define BIT_REG_FW1_AON_PD_APCPU_C0_CFG_RD_SEC                           BIT(1)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG_RD_SEC                          BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_1 */

#define BIT_REG_FW1_AON_BISR_BUSY_STATUS_RD_SEC                          BIT(31)
#define BIT_REG_FW1_AON_BISR_DONE_STATUS_RD_SEC                          BIT(30)
#define BIT_REG_FW1_AON_CLK26M_SEL_CFG_RD_SEC                            BIT(29)
#define BIT_REG_FW1_AON_DDR_PHY_RET_CFG_RD_SEC                           BIT(28)
#define BIT_REG_FW1_AON_DDR_OP_MODE_CFG_RD_SEC                           BIT(27)
#define BIT_REG_FW1_AON_PWR_STATUS3_DBG_RD_SEC                           BIT(26)
#define BIT_REG_FW1_AON_DDR_CHN_SLEEP_CTRL1_RD_SEC                       BIT(25)
#define BIT_REG_FW1_AON_DDR_CHN_SLEEP_CTRL0_RD_SEC                       BIT(24)
#define BIT_REG_FW1_AON_CPPLL_RST_CTRL_CFG_RD_SEC                        BIT(23)
#define BIT_REG_FW1_AON_CPPLL_REL_CFG_RD_SEC                             BIT(22)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_POLL1_RD_SEC                  BIT(21)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_POLL0_RD_SEC                  BIT(20)
#define BIT_REG_FW1_AON_PUB_SYS_SLEEP_BYPASS_CFG_RD_SEC                  BIT(19)
#define BIT_REG_FW1_AON_SLEEP_STATUS_RD_SEC                              BIT(18)
#define BIT_REG_FW1_AON_DDR_SLEEP_CTRL_RD_SEC                            BIT(17)
#define BIT_REG_FW1_AON_SLEEP_CTRL_RD_SEC                                BIT(16)
#define BIT_REG_FW1_AON_PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE_RD_SEC           BIT(15)
#define BIT_REG_FW1_AON_PWR_STATUS2_DBG_RD_SEC                           BIT(14)
#define BIT_REG_FW1_AON_PWR_STATUS1_DBG_RD_SEC                           BIT(13)
#define BIT_REG_FW1_AON_PWR_STATUS0_DBG_RD_SEC                           BIT(12)
#define BIT_REG_FW1_AON_PWR_STATUS4_DBG_RD_SEC                           BIT(11)
#define BIT_REG_FW1_AON_CP_SLP_STATUS_DBG0_RD_SEC                        BIT(10)
#define BIT_REG_FW1_AON_CP_SOFT_RST_RD_SEC                               BIT(9)
#define BIT_REG_FW1_AON_RPLL_REL_CFG_RD_SEC                              BIT(8)
#define BIT_REG_FW1_AON_GPLL_REL_CFG_RD_SEC                              BIT(7)
#define BIT_REG_FW1_AON_TWPLL_REL_CFG_RD_SEC                             BIT(6)
#define BIT_REG_FW1_AON_LTEPLL_REL_CFG_RD_SEC                            BIT(5)
#define BIT_REG_FW1_AON_DPLL1_REL_CFG_RD_SEC                             BIT(4)
#define BIT_REG_FW1_AON_DPLL0_REL_CFG_RD_SEC                             BIT(3)
#define BIT_REG_FW1_AON_XTLBUF1_REL_CFG_RD_SEC                           BIT(2)
#define BIT_REG_FW1_AON_XTLBUF0_REL_CFG_RD_SEC                           BIT(1)
#define BIT_REG_FW1_AON_ISPPLL_REL_CFG_RD_SEC                            BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_2 */

#define BIT_REG_FW1_AON_APCPU_C2_CORE_INT_DISABLE_RD_SEC                 BIT(31)
#define BIT_REG_FW1_AON_APCPU_C1_CORE_INT_DISABLE_RD_SEC                 BIT(30)
#define BIT_REG_FW1_AON_APCPU_C0_CORE_INT_DISABLE_RD_SEC                 BIT(29)
#define BIT_REG_FW1_AON_PUBCP_CORE_INT_DISABLE_RD_SEC                    BIT(28)
#define BIT_REG_FW1_AON_WTLCP_LDSP_CORE_INT_DISABLE_RD_SEC               BIT(27)
#define BIT_REG_FW1_AON_WTLCP_TGDSP_CORE_INT_DISABLE_RD_SEC              BIT(26)
#define BIT_REG_FW1_AON_AUDCP_SYS_CORE_INT_DISABLE_RD_SEC                BIT(25)
#define BIT_REG_FW1_AON_WAKEUP_LOCK_EN_RD_SEC                            BIT(24)
#define BIT_REG_FW1_AON_MEM_AUTO_SD_CFG_RD_SEC                           BIT(23)
#define BIT_REG_FW1_AON_MEM_AUTO_SLP_CFG_RD_SEC                          BIT(22)
#define BIT_REG_FW1_AON_MPLL2_REL_CFG_RD_SEC                             BIT(21)
#define BIT_REG_FW1_AON_MPLL1_REL_CFG_RD_SEC                             BIT(20)
#define BIT_REG_FW1_AON_MPLL0_REL_CFG_RD_SEC                             BIT(19)
#define BIT_REG_FW1_AON_RCO_CNT_WAIT_CFG_RD_SEC                          BIT(18)
#define BIT_REG_FW1_AON_RCO_REL_CFG_RD_SEC                               BIT(17)
#define BIT_REG_FW1_AON_PWR_CNT_WAIT_CFG1_RD_SEC                         BIT(16)
#define BIT_REG_FW1_AON_PWR_CNT_WAIT_CFG0_RD_SEC                         BIT(15)
#define BIT_REG_FW1_AON_SP_SYS_HOLD_CGM_EN_RD_SEC                        BIT(14)
#define BIT_REG_FW1_AON_APCPU_CORE_WAKEUP_EN_RD_SEC                      BIT(13)
#define BIT_REG_FW1_AON_MEM_SD_CFG_RD_SEC                                BIT(12)
#define BIT_REG_FW1_AON_MEM_SLP_CFG_RD_SEC                               BIT(11)
#define BIT_REG_FW1_AON_SLEEP_XTLON_CTRL_RD_SEC                          BIT(10)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG3_RD_SEC                         BIT(9)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG2_RD_SEC                         BIT(8)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG1_RD_SEC                         BIT(7)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG0_RD_SEC                         BIT(6)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG3_RD_SEC                    BIT(5)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG2_RD_SEC                    BIT(4)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG1_RD_SEC                    BIT(3)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG0_RD_SEC                    BIT(2)
#define BIT_REG_FW1_AON_BISR_EN_CFG_RD_SEC                               BIT(1)
#define BIT_REG_FW1_AON_BISR_BYP_CFG_RD_SEC                              BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_3 */

#define BIT_REG_FW1_AON_PAD_OUT_DCDC_ARM1_EN_CFG_RD_SEC                  BIT(31)
#define BIT_REG_FW1_AON_PAD_OUT_DCDC_ARM0_EN_CFG_RD_SEC                  BIT(30)
#define BIT_REG_FW1_AON_PAD_OUT_XTL_EN1_CFG_RD_SEC                       BIT(29)
#define BIT_REG_FW1_AON_PAD_OUT_XTL_EN0_CFG_RD_SEC                       BIT(28)
#define BIT_REG_FW1_AON_PAD_OUT_CHIP_SLEEP_CFG_RD_SEC                    BIT(27)
#define BIT_REG_FW1_AON_EXT_XTL_EN_CTRL_RD_SEC                           BIT(26)
#define BIT_REG_FW1_AON_LVDSRFPLL_REL_CFG_RD_SEC                         BIT(25)
#define BIT_REG_FW1_AON_SLEEP_CNT_CLR_RD_SEC                             BIT(24)
#define BIT_REG_FW1_AON_PMU_DEBUG_RD_SEC                                 BIT(23)
#define BIT_REG_FW1_AON_AXI_LP_CTRL_DISABLE_RD_SEC                       BIT(22)
#define BIT_REG_FW1_AON_EIC_SEL_RD_SEC                                   BIT(21)
#define BIT_REG_FW1_AON_PUB_CLK_RDY_RD_SEC                               BIT(20)
#define BIT_REG_FW1_AON_PUB_ACC_RDY_RD_SEC                               BIT(19)
#define BIT_REG_FW1_AON_AUDCP_AUDDSP_DSLP_ENA_RD_SEC                     BIT(18)
#define BIT_REG_FW1_AON_AUDCP_SYS_DSLP_ENA_RD_SEC                        BIT(17)
#define BIT_REG_FW1_AON_DOZE_FORCE_SLEEP_CTRL_RD_SEC                     BIT(16)
#define BIT_REG_FW1_AON_DOZE_SLEEP_MON_RD_SEC                            BIT(15)
#define BIT_REG_FW1_AON_DOZE_SLEEP_ENABLE_RD_SEC                         BIT(14)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_MON_RD_SEC                           BIT(13)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_ENABLE_RD_SEC                        BIT(12)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_WAKEUP_EN_RD_SEC                     BIT(11)
#define BIT_REG_FW1_AON_PUB_DEEP_SLEEP_WAKEUP_EN_RD_SEC                  BIT(10)
#define BIT_REG_FW1_AON_PUB_DEEP_SLEEP_ENA_RD_SEC                        BIT(9)
#define BIT_REG_FW1_AON_SP_SYS_DSLP_ENA_RD_SEC                           BIT(8)
#define BIT_REG_FW1_AON_APCPU_TOP_DSLP_ENA_RD_SEC                        BIT(7)
#define BIT_REG_FW1_AON_WTLCP_DSLP_ENA_RD_SEC                            BIT(6)
#define BIT_REG_FW1_AON_PUBCP_DSLP_ENA_RD_SEC                            BIT(5)
#define BIT_REG_FW1_AON_AP_DSLP_ENA_RD_SEC                               BIT(4)
#define BIT_REG_FW1_AON_WTLCP_LDSP_DSLP_ENA_RD_SEC                       BIT(3)
#define BIT_REG_FW1_AON_WTLCP_TGDSP_DSLP_ENA_RD_SEC                      BIT(2)
#define BIT_REG_FW1_AON_APCPU_C7_DSLP_ENA_RD_SEC                         BIT(1)
#define BIT_REG_FW1_AON_APCPU_C7_CORE_INT_DISABLE_RD_SEC                 BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_4 */

#define BIT_REG_FW1_AON_APCU_MODE_STATE0_RD_SEC                          BIT(31)
#define BIT_REG_FW1_AON_APCPU_CORE_FORCE_STOP_RD_SEC                     BIT(30)
#define BIT_REG_FW1_AON_APCPU_C2_SIMD_RET_MODE_RD_SEC                    BIT(29)
#define BIT_REG_FW1_AON_APCPU_C1_SIMD_RET_MODE_RD_SEC                    BIT(28)
#define BIT_REG_FW1_AON_APCPU_C0_SIMD_RET_MODE_RD_SEC                    BIT(27)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG_RD_SEC                         BIT(26)
#define BIT_REG_FW1_AON_APCPU_TOP_RMA_CTRL_RD_SEC                        BIT(25)
#define BIT_REG_FW1_AON_FIREWALL_WAKEUP_PUB_RD_SEC                       BIT(24)
#define BIT_REG_FW1_AON_GIC_CFG_RD_SEC                                   BIT(23)
#define BIT_REG_FW1_AON_APCPU_C7_CFG_RD_SEC                              BIT(22)
#define BIT_REG_FW1_AON_APCPU_C2_CFG_RD_SEC                              BIT(21)
#define BIT_REG_FW1_AON_APCPU_C1_CFG_RD_SEC                              BIT(20)
#define BIT_REG_FW1_AON_APCPU_C0_CFG_RD_SEC                              BIT(19)
#define BIT_REG_FW1_AON_APCPU_TOP_CFG_RD_SEC                             BIT(18)
#define BIT_REG_FW1_AON_APCU_PWR_STATE1_RD_SEC                           BIT(17)
#define BIT_REG_FW1_AON_APCU_PWR_STATE0_RD_SEC                           BIT(16)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG3_RD_SEC                         BIT(15)
#define BIT_REG_FW1_AON_PD_APCPU_C7_CFG_RD_SEC                           BIT(14)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_SEL_RD_SEC                    BIT(13)
#define BIT_REG_FW1_AON_ANALOG_PHY_PD_CFG_RD_SEC                         BIT(12)
#define BIT_REG_FW1_AON_APCPU_GIC_RST_EN_RD_SEC                          BIT(11)
#define BIT_REG_FW1_AON_APCPU_C2_DSLP_ENA_RD_SEC                         BIT(10)
#define BIT_REG_FW1_AON_APCPU_C1_DSLP_ENA_RD_SEC                         BIT(9)
#define BIT_REG_FW1_AON_APCPU_C0_DSLP_ENA_RD_SEC                         BIT(8)
#define BIT_REG_FW1_AON_PWR_DGB_PARAMETER_RD_SEC                         BIT(7)
#define BIT_REG_FW1_AON_CGM_PMU_SEL_RD_SEC                               BIT(6)
#define BIT_REG_FW1_AON_PMU_CLK_DIV_CFG_RD_SEC                           BIT(5)
#define BIT_REG_FW1_AON_DDR_SLP_WAIT_CNT_RD_SEC                          BIT(4)
#define BIT_REG_FW1_AON_PWR_DOMAIN_INT_CLR_RD_SEC                        BIT(3)
#define BIT_REG_FW1_AON_AON_MEM_CTRL_RD_SEC                              BIT(2)
#define BIT_REG_FW1_AON_BISR_FORCE_SEL_RD_SEC                            BIT(1)
#define BIT_REG_FW1_AON_DCXO_LP_DEEP_SLEEP_CFG_RD_SEC                    BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_5 */

#define BIT_REG_FW1_AON_PUB_DFS_FRQ_SEL_RD_SEC                           BIT(31)
#define BIT_REG_FW1_AON_DUAL_RAIL_RAM_FORCE_SLP_CFG_RD_SEC               BIT(30)
#define BIT_REG_FW1_AON_DUAL_RAIL_RAM_FORCE_PD_CFG_RD_SEC                BIT(29)
#define BIT_REG_FW1_AON_APCPU_SOFT_INT_GEN_RD_SEC                        BIT(28)
#define BIT_REG_FW1_AON_APCPU_PCHANNEL_STATE1_RD_SEC                     BIT(27)
#define BIT_REG_FW1_AON_APCPU_PCHANNEL_STATE0_RD_SEC                     BIT(26)
#define BIT_REG_FW1_AON_APCPU_CORINTH_SCU_CLK_GATE_CFG_RD_SEC            BIT(25)
#define BIT_REG_FW1_AON_APCPU_SOFT_RST_TYPE_CFG_RD_SEC                   BIT(24)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_FRC_ON_CFG_RD_SEC                  BIT(23)
#define BIT_REG_FW1_AON_ANANKELITE_MEM_POWER_CFG_RD_SEC                  BIT(22)
#define BIT_REG_FW1_AON_DEBUG_STATE_MARK_RD_SEC                          BIT(21)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG3_RD_SEC                        BIT(20)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG2_RD_SEC                        BIT(19)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG1_RD_SEC                        BIT(18)
#define BIT_REG_FW1_AON_DEBUG_RECOV_TYPE_CFG_RD_SEC                      BIT(17)
#define BIT_REG_FW1_AON_WTLCP_HU3GE_NEST_DOMAIN_CTRL_RD_SEC              BIT(16)
#define BIT_REG_FW1_AON_DUAL_RAIL_MEM_POWER_CTRL_RD_SEC                  BIT(15)
#define BIT_REG_FW1_AON_PLL_RST_CTRL_STATE1_RD_SEC                       BIT(14)
#define BIT_REG_FW1_AON_PLL_RST_CTRL_STATE0_RD_SEC                       BIT(13)
#define BIT_REG_FW1_AON_ISPPLL_RST_CTRL_CFG_RD_SEC                       BIT(12)
#define BIT_REG_FW1_AON_RPLL_RST_CTRL_CFG_RD_SEC                         BIT(11)
#define BIT_REG_FW1_AON_GPLL_RST_CTRL_CFG_RD_SEC                         BIT(10)
#define BIT_REG_FW1_AON_LTEPLL_RST_CTRL_CFG_RD_SEC                       BIT(9)
#define BIT_REG_FW1_AON_TWPLL_RST_CTRL_CFG_RD_SEC                        BIT(8)
#define BIT_REG_FW1_AON_DPLL1_RST_CTRL_CFG_RD_SEC                        BIT(7)
#define BIT_REG_FW1_AON_DPLL0_RST_CTRL_CFG_RD_SEC                        BIT(6)
#define BIT_REG_FW1_AON_MPLL2_RST_CTRL_CFG_RD_SEC                        BIT(5)
#define BIT_REG_FW1_AON_MPLL1_RST_CTRL_CFG_RD_SEC                        BIT(4)
#define BIT_REG_FW1_AON_MPLL0_RST_CTRL_CFG_RD_SEC                        BIT(3)
#define BIT_REG_FW1_AON_MPLL_WAIT_CLK_DIV_CFG_RD_SEC                     BIT(2)
#define BIT_REG_FW1_AON_PD_GPU_TOP_CFG1_RD_SEC                           BIT(1)
#define BIT_REG_FW1_AON_APCU_MODE_STATE1_RD_SEC                          BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_6 */

#define BIT_REG_FW1_AON_SP_CLK_GATE_BYP_CFG_RD_SEC                       BIT(31)
#define BIT_REG_FW1_AON_ALL_PLL_PD_RCO_BYP_RD_SEC                        BIT(30)
#define BIT_REG_FW1_AON_OFF_EMU_TO_OFF_CFG_RD_SEC                        BIT(29)
#define BIT_REG_FW1_AON_ANANKE_LITE_DUAL_RAIL_RAM_FORCE_ON_CFG_RD_SEC    BIT(28)
#define BIT_REG_FW1_AON_OFF_EMU_CLR_IN_DISABLE_CFG_RD_SEC                BIT(27)
#define BIT_REG_FW1_AON_DVFS_BLOCK_SHUTDOWN_CFG_RD_SEC                   BIT(26)
#define BIT_REG_FW1_AON_APCPU_CSYSPWRUP_WAKEUP_EN_CFG_RD_SEC             BIT(25)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CLUSTER_INF_RD_SEC         BIT(24)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE7_INF_RD_SEC           BIT(23)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE2_INF_RD_SEC           BIT(22)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE1_INF_RD_SEC           BIT(21)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE0_INF_RD_SEC           BIT(20)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_RECORD_RD_SEC                    BIT(19)
#define BIT_REG_FW1_AON_INT_REQ_APCPU_MODE_ST_CLR_RD_SEC                 BIT(18)
#define BIT_REG_FW1_AON_INT_REQ_APCPU_MODE_ST_ENABLE_RD_SEC              BIT(17)
#define BIT_REG_FW1_AON_APCPU_DENY_TIME_THRESHOLD_CFG_RD_SEC             BIT(16)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CGM_EN_CFG_RD_SEC                  BIT(15)
#define BIT_REG_FW1_AON_ANALOG_PHY_PWRON_CFG_RD_SEC                      BIT(14)
#define BIT_REG_FW1_AON_GPIO_FORCE_GATING_PLL_CFG_RD_SEC                 BIT(13)
#define BIT_REG_FW1_AON_WTLCP_DPFEC_NEST_DOMAIN_CTRL_RD_SEC              BIT(12)
#define BIT_REG_FW1_AON_APCPU_CLUSTER_SW_PCHANNEL_HANDSHAKE_RD_SEC       BIT(11)
#define BIT_REG_FW1_AON_APCPU_CORE7_SW_PCHANNEL_HANDSHAKE_RD_SEC         BIT(10)
#define BIT_REG_FW1_AON_APCPU_CORE2_SW_PCHANNEL_HANDSHAKE_RD_SEC         BIT(9)
#define BIT_REG_FW1_AON_APCPU_CORE1_SW_PCHANNEL_HANDSHAKE_RD_SEC         BIT(8)
#define BIT_REG_FW1_AON_APCPU_CORE0_SW_PCHANNEL_HANDSHAKE_RD_SEC         BIT(7)
#define BIT_REG_FW1_AON_SOFTWARE_APCPU_PCHANNEL_HANDSHAKE_ENABLE_RD_SEC  BIT(6)
#define BIT_REG_FW1_AON_SOFTWARE_APCPU_PACTIVE_ENABLE_RD_SEC             BIT(5)
#define BIT_REG_FW1_AON_APCPU_CLUSTER_SW_PACTIVE_RD_SEC                  BIT(4)
#define BIT_REG_FW1_AON_APCPU_CORE7_SW_PACTIVE_RD_SEC                    BIT(3)
#define BIT_REG_FW1_AON_APCPU_CORE2_SW_PACTIVE_RD_SEC                    BIT(2)
#define BIT_REG_FW1_AON_APCPU_CORE1_SW_PACTIVE_RD_SEC                    BIT(1)
#define BIT_REG_FW1_AON_APCPU_CORE0_SW_PACTIVE_RD_SEC                    BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_7 */

#define BIT_REG_FW1_AON_AP_DEEP_SLEEP_CNT_RD_SEC                         BIT(31)
#define BIT_REG_FW1_AON_PUB_SYS_LIGHT_SLEEP_CNT_RD_SEC                   BIT(30)
#define BIT_REG_FW1_AON_AUDCP_SYS_SLEEP_CNT_RD_SEC                       BIT(29)
#define BIT_REG_FW1_AON_PUBCP_SYS_SLEEP_CNT_RD_SEC                       BIT(28)
#define BIT_REG_FW1_AON_WTLCP_SYS_SLEEP_CNT_RD_SEC                       BIT(27)
#define BIT_REG_FW1_AON_AP_SYS_SLEEP_CNT_RD_SEC                          BIT(26)
#define BIT_REG_FW1_AON_APCPU_TOP_SLEEP_CNT_RD_SEC                       BIT(25)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_SHUTDOWN_MARK_STATUS_RD_SEC      BIT(24)
#define BIT_REG_FW1_AON_PD_AUDCP_AUDDSP_SHUTDOWN_MARK_STATUS_RD_SEC      BIT(23)
#define BIT_REG_FW1_AON_PD_PUB_SYS_SHUTDOWN_MARK_STATUS_RD_SEC           BIT(22)
#define BIT_REG_FW1_AON_PD_AUDCP_SYS_SHUTDOWN_MARK_STATUS_RD_SEC         BIT(21)
#define BIT_REG_FW1_AON_PD_WTLCP_TD_PROC_SHUTDOWN_MARK_STATUS_RD_SEC     BIT(20)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_PROC_SHUTDOWN_MARK_STATUS_RD_SEC    BIT(19)
#define BIT_REG_FW1_AON_PD_PUBCP_SYS_SHUTDOWN_MARK_STATUS_RD_SEC         BIT(18)
#define BIT_REG_FW1_AON_PD_WTLCP_SYS_SHUTDOWN_MARK_STATUS_RD_SEC         BIT(17)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_B_SHUTDOWN_MARK_STATUS_RD_SEC     BIT(16)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_A_SHUTDOWN_MARK_STATUS_RD_SEC     BIT(15)
#define BIT_REG_FW1_AON_PD_WTLCP_TGDSP_SHUTDOWN_MARK_STATUS_RD_SEC       BIT(14)
#define BIT_REG_FW1_AON_PD_WTLCP_LDSP_SHUTDOWN_MARK_STATUS_RD_SEC        BIT(13)
#define BIT_REG_FW1_AON_PD_AP_VSP_SHUTDOWN_MARK_STATUS_RD_SEC            BIT(12)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_DPFEC_SHUTDOWN_MARK_STATUS_RD_SEC   BIT(11)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_CE_SHUTDOWN_MARK_STATUS_RD_SEC      BIT(10)
#define BIT_REG_FW1_AON_PD_MM_TOP_SHUTDOWN_MARK_STATUS_RD_SEC            BIT(9)
#define BIT_REG_FW1_AON_PD_GPU_TOP_SHUTDOWN_MARK_STATUS_RD_SEC           BIT(8)
#define BIT_REG_FW1_AON_PD_AP_SYS_SHUTDOWN_MARK_STATUS_RD_SEC            BIT(7)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_SHUTDOWN_MARK_STATUS_RD_SEC         BIT(6)
#define BIT_REG_FW1_AON_PD_APCPU_C2_SHUTDOWN_MARK_STATUS_RD_SEC          BIT(5)
#define BIT_REG_FW1_AON_PD_APCPU_C1_SHUTDOWN_MARK_STATUS_RD_SEC          BIT(4)
#define BIT_REG_FW1_AON_PD_APCPU_C0_SHUTDOWN_MARK_STATUS_RD_SEC          BIT(3)
#define BIT_REG_FW1_AON_WDG_TRIG_DBG_RECOV_CFG_RD_SEC                    BIT(2)
#define BIT_REG_FW1_AON_SRAM_DLY_CTRL_CFG_RD_SEC                         BIT(1)
#define BIT_REG_FW1_AON_DPLL1_CNT_DONE_BYP_RD_SEC                        BIT(0)

/* REG_REG_FW1_AON_REG_RD_CTRL_8 */

#define BIT_REG_FW1_AON_AUDCP_DOZE_SLEEP_CNT_RD_SEC                      BIT(24)
#define BIT_REG_FW1_AON_PUBCP_DOZE_SLEEP_CNT_RD_SEC                      BIT(23)
#define BIT_REG_FW1_AON_WTLCP_DOZE_SLEEP_CNT_RD_SEC                      BIT(22)
#define BIT_REG_FW1_AON_AP_DOZE_SLEEP_CNT_RD_SEC                         BIT(21)
#define BIT_REG_FW1_AON_APCPU_TOP_LIGHT_SLEEP_CNT_RD_SEC                 BIT(20)
#define BIT_REG_FW1_AON_APCPU_TOP_DEEP_SLEEP_CNT_RD_SEC                  BIT(19)
#define BIT_REG_FW1_AON_PD_APCPU_C7_SHUTDOWN_MARK_STATUS_RD_SEC          BIT(18)
#define BIT_REG_FW1_AON_DDR_SLP_CTRL_STATE_RD_SEC                        BIT(17)
#define BIT_REG_FW1_AON_EIC_SYS_SEL_RD_SEC                               BIT(16)
#define BIT_REG_FW1_AON_PD_AP_SYS_DBG_SHUTDOWN_EN_RD_SEC                 BIT(15)
#define BIT_REG_FW1_AON_CSI_DSI_PWR_CNT_DONE_RD_SEC                      BIT(14)
#define BIT_REG_FW1_AON_REG_SYS_DDR_PWR_HS_ACK_RD_SEC                    BIT(13)
#define BIT_REG_FW1_AON_SOFT_RST_SEL_RD_SEC                              BIT(12)
#define BIT_REG_FW1_AON_REG_SYS_SRST_FRC_LP_ACK_RD_SEC                   BIT(11)
#define BIT_REG_FW1_AON_SYS_SOFT_RST_BUSY_RD_SEC                         BIT(10)
#define BIT_REG_FW1_AON_AON_SYS_LIGHT_SLEEP_CNT_RD_SEC                   BIT(9)
#define BIT_REG_FW1_AON_AUDCP_SYS_LIGHT_SLEEP_CNT_RD_SEC                 BIT(8)
#define BIT_REG_FW1_AON_PUBCP_LIGHT_SLEEP_CNT_RD_SEC                     BIT(7)
#define BIT_REG_FW1_AON_WTLCP_LIGHT_SLEEP_CNT_RD_SEC                     BIT(6)
#define BIT_REG_FW1_AON_AP_LIGHT_SLEEP_CNT_RD_SEC                        BIT(5)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_CNT_RD_SEC                    BIT(4)
#define BIT_REG_FW1_AON_AUDCP_SYS_DEEP_SLEEP_CNT_RD_SEC                  BIT(3)
#define BIT_REG_FW1_AON_PUBCP_DEEP_SLEEP_CNT_RD_SEC                      BIT(2)
#define BIT_REG_FW1_AON_WTLCP_DEEP_SLEEP_CNT_RD_SEC                      BIT(1)
#define BIT_REG_FW1_AON_SP_SYS_DEEP_SLEEP_CNT_RD_SEC                     BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_0 */

#define BIT_REG_FW1_AON_XTL1_REL_CFG_WR_SEC                              BIT(31)
#define BIT_REG_FW1_AON_XTL0_REL_CFG_WR_SEC                              BIT(30)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT2_WR_SEC                             BIT(29)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT1_WR_SEC                             BIT(28)
#define BIT_REG_FW1_AON_PLL_WAIT_CNT0_WR_SEC                             BIT(27)
#define BIT_REG_FW1_AON_XTL_WAIT_CNT_WR_SEC                              BIT(26)
#define BIT_REG_FW1_AON_AP_WAKEUP_POR_CFG_WR_SEC                         BIT(25)
#define BIT_REG_FW1_AON_PD_PUB_SYS_CFG_WR_SEC                            BIT(24)
#define BIT_REG_FW1_AON_PUBCP_FRC_STOP_REQ_FOR_WTL_WR_SEC                BIT(23)
#define BIT_REG_FW1_AON_PD_AUDCP_SYS_CFG_WR_SEC                          BIT(22)
#define BIT_REG_FW1_AON_PD_AUDCP_AUDDSP_CFG_WR_SEC                       BIT(21)
#define BIT_REG_FW1_AON_PD_PUBCP_SYS_CFG_WR_SEC                          BIT(20)
#define BIT_REG_FW1_AON_PD_WTLCP_SYS_CFG_WR_SEC                          BIT(19)
#define BIT_REG_FW1_AON_PD_WTLCP_TD_PROC_CFG_WR_SEC                      BIT(18)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_PROC_CFG_WR_SEC                     BIT(17)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_B_CFG_WR_SEC                      BIT(16)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_A_CFG_WR_SEC                      BIT(15)
#define BIT_REG_FW1_AON_PD_WTLCP_TGDSP_CFG_WR_SEC                        BIT(14)
#define BIT_REG_FW1_AON_PD_WTLCP_LDSP_CFG_WR_SEC                         BIT(13)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_DPFEC_CFG_WR_SEC                    BIT(12)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_CE_CFG_WR_SEC                       BIT(11)
#define BIT_REG_FW1_AON_PD_GPU_TOP_CFG0_WR_SEC                           BIT(10)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_CFG1_WR_SEC                      BIT(9)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_CFG0_WR_SEC                      BIT(8)
#define BIT_REG_FW1_AON_PD_MM_TOP_CFG_WR_SEC                             BIT(7)
#define BIT_REG_FW1_AON_PD_AP_SYS_CFG_WR_SEC                             BIT(6)
#define BIT_REG_FW1_AON_PD_AP_VSP_CFG_WR_SEC                             BIT(5)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG2_WR_SEC                         BIT(4)
#define BIT_REG_FW1_AON_PD_APCPU_C2_CFG_WR_SEC                           BIT(3)
#define BIT_REG_FW1_AON_PD_APCPU_C1_CFG_WR_SEC                           BIT(2)
#define BIT_REG_FW1_AON_PD_APCPU_C0_CFG_WR_SEC                           BIT(1)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG_WR_SEC                          BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_1 */

#define BIT_REG_FW1_AON_BISR_BUSY_STATUS_WR_SEC                          BIT(31)
#define BIT_REG_FW1_AON_BISR_DONE_STATUS_WR_SEC                          BIT(30)
#define BIT_REG_FW1_AON_CLK26M_SEL_CFG_WR_SEC                            BIT(29)
#define BIT_REG_FW1_AON_DDR_PHY_RET_CFG_WR_SEC                           BIT(28)
#define BIT_REG_FW1_AON_DDR_OP_MODE_CFG_WR_SEC                           BIT(27)
#define BIT_REG_FW1_AON_PWR_STATUS3_DBG_WR_SEC                           BIT(26)
#define BIT_REG_FW1_AON_DDR_CHN_SLEEP_CTRL1_WR_SEC                       BIT(25)
#define BIT_REG_FW1_AON_DDR_CHN_SLEEP_CTRL0_WR_SEC                       BIT(24)
#define BIT_REG_FW1_AON_CPPLL_RST_CTRL_CFG_WR_SEC                        BIT(23)
#define BIT_REG_FW1_AON_CPPLL_REL_CFG_WR_SEC                             BIT(22)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_POLL1_WR_SEC                  BIT(21)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_POLL0_WR_SEC                  BIT(20)
#define BIT_REG_FW1_AON_PUB_SYS_SLEEP_BYPASS_CFG_WR_SEC                  BIT(19)
#define BIT_REG_FW1_AON_SLEEP_STATUS_WR_SEC                              BIT(18)
#define BIT_REG_FW1_AON_DDR_SLEEP_CTRL_WR_SEC                            BIT(17)
#define BIT_REG_FW1_AON_SLEEP_CTRL_WR_SEC                                BIT(16)
#define BIT_REG_FW1_AON_PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE_WR_SEC           BIT(15)
#define BIT_REG_FW1_AON_PWR_STATUS2_DBG_WR_SEC                           BIT(14)
#define BIT_REG_FW1_AON_PWR_STATUS1_DBG_WR_SEC                           BIT(13)
#define BIT_REG_FW1_AON_PWR_STATUS0_DBG_WR_SEC                           BIT(12)
#define BIT_REG_FW1_AON_PWR_STATUS4_DBG_WR_SEC                           BIT(11)
#define BIT_REG_FW1_AON_CP_SLP_STATUS_DBG0_WR_SEC                        BIT(10)
#define BIT_REG_FW1_AON_CP_SOFT_RST_WR_SEC                               BIT(9)
#define BIT_REG_FW1_AON_RPLL_REL_CFG_WR_SEC                              BIT(8)
#define BIT_REG_FW1_AON_GPLL_REL_CFG_WR_SEC                              BIT(7)
#define BIT_REG_FW1_AON_TWPLL_REL_CFG_WR_SEC                             BIT(6)
#define BIT_REG_FW1_AON_LTEPLL_REL_CFG_WR_SEC                            BIT(5)
#define BIT_REG_FW1_AON_DPLL1_REL_CFG_WR_SEC                             BIT(4)
#define BIT_REG_FW1_AON_DPLL0_REL_CFG_WR_SEC                             BIT(3)
#define BIT_REG_FW1_AON_XTLBUF1_REL_CFG_WR_SEC                           BIT(2)
#define BIT_REG_FW1_AON_XTLBUF0_REL_CFG_WR_SEC                           BIT(1)
#define BIT_REG_FW1_AON_ISPPLL_REL_CFG_WR_SEC                            BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_2 */

#define BIT_REG_FW1_AON_APCPU_C2_CORE_INT_DISABLE_WR_SEC                 BIT(31)
#define BIT_REG_FW1_AON_APCPU_C1_CORE_INT_DISABLE_WR_SEC                 BIT(30)
#define BIT_REG_FW1_AON_APCPU_C0_CORE_INT_DISABLE_WR_SEC                 BIT(29)
#define BIT_REG_FW1_AON_PUBCP_CORE_INT_DISABLE_WR_SEC                    BIT(28)
#define BIT_REG_FW1_AON_WTLCP_LDSP_CORE_INT_DISABLE_WR_SEC               BIT(27)
#define BIT_REG_FW1_AON_WTLCP_TGDSP_CORE_INT_DISABLE_WR_SEC              BIT(26)
#define BIT_REG_FW1_AON_AUDCP_SYS_CORE_INT_DISABLE_WR_SEC                BIT(25)
#define BIT_REG_FW1_AON_WAKEUP_LOCK_EN_WR_SEC                            BIT(24)
#define BIT_REG_FW1_AON_MEM_AUTO_SD_CFG_WR_SEC                           BIT(23)
#define BIT_REG_FW1_AON_MEM_AUTO_SLP_CFG_WR_SEC                          BIT(22)
#define BIT_REG_FW1_AON_MPLL2_REL_CFG_WR_SEC                             BIT(21)
#define BIT_REG_FW1_AON_MPLL1_REL_CFG_WR_SEC                             BIT(20)
#define BIT_REG_FW1_AON_MPLL0_REL_CFG_WR_SEC                             BIT(19)
#define BIT_REG_FW1_AON_RCO_CNT_WAIT_CFG_WR_SEC                          BIT(18)
#define BIT_REG_FW1_AON_RCO_REL_CFG_WR_SEC                               BIT(17)
#define BIT_REG_FW1_AON_PWR_CNT_WAIT_CFG1_WR_SEC                         BIT(16)
#define BIT_REG_FW1_AON_PWR_CNT_WAIT_CFG0_WR_SEC                         BIT(15)
#define BIT_REG_FW1_AON_SP_SYS_HOLD_CGM_EN_WR_SEC                        BIT(14)
#define BIT_REG_FW1_AON_APCPU_CORE_WAKEUP_EN_WR_SEC                      BIT(13)
#define BIT_REG_FW1_AON_MEM_SD_CFG_WR_SEC                                BIT(12)
#define BIT_REG_FW1_AON_MEM_SLP_CFG_WR_SEC                               BIT(11)
#define BIT_REG_FW1_AON_SLEEP_XTLON_CTRL_WR_SEC                          BIT(10)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG3_WR_SEC                         BIT(9)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG2_WR_SEC                         BIT(8)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG1_WR_SEC                         BIT(7)
#define BIT_REG_FW1_AON_CGM_FORCE_EN_CFG0_WR_SEC                         BIT(6)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG3_WR_SEC                    BIT(5)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG2_WR_SEC                    BIT(4)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG1_WR_SEC                    BIT(3)
#define BIT_REG_FW1_AON_CGM_AUTO_GATE_SEL_CFG0_WR_SEC                    BIT(2)
#define BIT_REG_FW1_AON_BISR_EN_CFG_WR_SEC                               BIT(1)
#define BIT_REG_FW1_AON_BISR_BYP_CFG_WR_SEC                              BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_3 */

#define BIT_REG_FW1_AON_PAD_OUT_DCDC_ARM1_EN_CFG_WR_SEC                  BIT(31)
#define BIT_REG_FW1_AON_PAD_OUT_DCDC_ARM0_EN_CFG_WR_SEC                  BIT(30)
#define BIT_REG_FW1_AON_PAD_OUT_XTL_EN1_CFG_WR_SEC                       BIT(29)
#define BIT_REG_FW1_AON_PAD_OUT_XTL_EN0_CFG_WR_SEC                       BIT(28)
#define BIT_REG_FW1_AON_PAD_OUT_CHIP_SLEEP_CFG_WR_SEC                    BIT(27)
#define BIT_REG_FW1_AON_EXT_XTL_EN_CTRL_WR_SEC                           BIT(26)
#define BIT_REG_FW1_AON_LVDSRFPLL_REL_CFG_WR_SEC                         BIT(25)
#define BIT_REG_FW1_AON_SLEEP_CNT_CLR_WR_SEC                             BIT(24)
#define BIT_REG_FW1_AON_PMU_DEBUG_WR_SEC                                 BIT(23)
#define BIT_REG_FW1_AON_AXI_LP_CTRL_DISABLE_WR_SEC                       BIT(22)
#define BIT_REG_FW1_AON_EIC_SEL_WR_SEC                                   BIT(21)
#define BIT_REG_FW1_AON_PUB_CLK_RDY_WR_SEC                               BIT(20)
#define BIT_REG_FW1_AON_PUB_ACC_RDY_WR_SEC                               BIT(19)
#define BIT_REG_FW1_AON_AUDCP_AUDDSP_DSLP_ENA_WR_SEC                     BIT(18)
#define BIT_REG_FW1_AON_AUDCP_SYS_DSLP_ENA_WR_SEC                        BIT(17)
#define BIT_REG_FW1_AON_DOZE_FORCE_SLEEP_CTRL_WR_SEC                     BIT(16)
#define BIT_REG_FW1_AON_DOZE_SLEEP_MON_WR_SEC                            BIT(15)
#define BIT_REG_FW1_AON_DOZE_SLEEP_ENABLE_WR_SEC                         BIT(14)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_MON_WR_SEC                           BIT(13)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_ENABLE_WR_SEC                        BIT(12)
#define BIT_REG_FW1_AON_LIGHT_SLEEP_WAKEUP_EN_WR_SEC                     BIT(11)
#define BIT_REG_FW1_AON_PUB_DEEP_SLEEP_WAKEUP_EN_WR_SEC                  BIT(10)
#define BIT_REG_FW1_AON_PUB_DEEP_SLEEP_ENA_WR_SEC                        BIT(9)
#define BIT_REG_FW1_AON_SP_SYS_DSLP_ENA_WR_SEC                           BIT(8)
#define BIT_REG_FW1_AON_APCPU_TOP_DSLP_ENA_WR_SEC                        BIT(7)
#define BIT_REG_FW1_AON_WTLCP_DSLP_ENA_WR_SEC                            BIT(6)
#define BIT_REG_FW1_AON_PUBCP_DSLP_ENA_WR_SEC                            BIT(5)
#define BIT_REG_FW1_AON_AP_DSLP_ENA_WR_SEC                               BIT(4)
#define BIT_REG_FW1_AON_WTLCP_LDSP_DSLP_ENA_WR_SEC                       BIT(3)
#define BIT_REG_FW1_AON_WTLCP_TGDSP_DSLP_ENA_WR_SEC                      BIT(2)
#define BIT_REG_FW1_AON_APCPU_C7_DSLP_ENA_WR_SEC                         BIT(1)
#define BIT_REG_FW1_AON_APCPU_C7_CORE_INT_DISABLE_WR_SEC                 BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_4 */

#define BIT_REG_FW1_AON_APCU_MODE_STATE0_WR_SEC                          BIT(31)
#define BIT_REG_FW1_AON_APCPU_CORE_FORCE_STOP_WR_SEC                     BIT(30)
#define BIT_REG_FW1_AON_APCPU_C2_SIMD_RET_MODE_WR_SEC                    BIT(29)
#define BIT_REG_FW1_AON_APCPU_C1_SIMD_RET_MODE_WR_SEC                    BIT(28)
#define BIT_REG_FW1_AON_APCPU_C0_SIMD_RET_MODE_WR_SEC                    BIT(27)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG_WR_SEC                         BIT(26)
#define BIT_REG_FW1_AON_APCPU_TOP_RMA_CTRL_WR_SEC                        BIT(25)
#define BIT_REG_FW1_AON_FIREWALL_WAKEUP_PUB_WR_SEC                       BIT(24)
#define BIT_REG_FW1_AON_GIC_CFG_WR_SEC                                   BIT(23)
#define BIT_REG_FW1_AON_APCPU_C7_CFG_WR_SEC                              BIT(22)
#define BIT_REG_FW1_AON_APCPU_C2_CFG_WR_SEC                              BIT(21)
#define BIT_REG_FW1_AON_APCPU_C1_CFG_WR_SEC                              BIT(20)
#define BIT_REG_FW1_AON_APCPU_C0_CFG_WR_SEC                              BIT(19)
#define BIT_REG_FW1_AON_APCPU_TOP_CFG_WR_SEC                             BIT(18)
#define BIT_REG_FW1_AON_APCU_PWR_STATE1_WR_SEC                           BIT(17)
#define BIT_REG_FW1_AON_APCU_PWR_STATE0_WR_SEC                           BIT(16)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_CFG3_WR_SEC                         BIT(15)
#define BIT_REG_FW1_AON_PD_APCPU_C7_CFG_WR_SEC                           BIT(14)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_SEL_WR_SEC                    BIT(13)
#define BIT_REG_FW1_AON_ANALOG_PHY_PD_CFG_WR_SEC                         BIT(12)
#define BIT_REG_FW1_AON_APCPU_GIC_RST_EN_WR_SEC                          BIT(11)
#define BIT_REG_FW1_AON_APCPU_C2_DSLP_ENA_WR_SEC                         BIT(10)
#define BIT_REG_FW1_AON_APCPU_C1_DSLP_ENA_WR_SEC                         BIT(9)
#define BIT_REG_FW1_AON_APCPU_C0_DSLP_ENA_WR_SEC                         BIT(8)
#define BIT_REG_FW1_AON_PWR_DGB_PARAMETER_WR_SEC                         BIT(7)
#define BIT_REG_FW1_AON_CGM_PMU_SEL_WR_SEC                               BIT(6)
#define BIT_REG_FW1_AON_PMU_CLK_DIV_CFG_WR_SEC                           BIT(5)
#define BIT_REG_FW1_AON_DDR_SLP_WAIT_CNT_WR_SEC                          BIT(4)
#define BIT_REG_FW1_AON_PWR_DOMAIN_INT_CLR_WR_SEC                        BIT(3)
#define BIT_REG_FW1_AON_AON_MEM_CTRL_WR_SEC                              BIT(2)
#define BIT_REG_FW1_AON_BISR_FORCE_SEL_WR_SEC                            BIT(1)
#define BIT_REG_FW1_AON_DCXO_LP_DEEP_SLEEP_CFG_WR_SEC                    BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_5 */

#define BIT_REG_FW1_AON_PUB_DFS_FRQ_SEL_WR_SEC                           BIT(31)
#define BIT_REG_FW1_AON_DUAL_RAIL_RAM_FORCE_SLP_CFG_WR_SEC               BIT(30)
#define BIT_REG_FW1_AON_DUAL_RAIL_RAM_FORCE_PD_CFG_WR_SEC                BIT(29)
#define BIT_REG_FW1_AON_APCPU_SOFT_INT_GEN_WR_SEC                        BIT(28)
#define BIT_REG_FW1_AON_APCPU_PCHANNEL_STATE1_WR_SEC                     BIT(27)
#define BIT_REG_FW1_AON_APCPU_PCHANNEL_STATE0_WR_SEC                     BIT(26)
#define BIT_REG_FW1_AON_APCPU_CORINTH_SCU_CLK_GATE_CFG_WR_SEC            BIT(25)
#define BIT_REG_FW1_AON_APCPU_SOFT_RST_TYPE_CFG_WR_SEC                   BIT(24)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_FRC_ON_CFG_WR_SEC                  BIT(23)
#define BIT_REG_FW1_AON_ANANKELITE_MEM_POWER_CFG_WR_SEC                  BIT(22)
#define BIT_REG_FW1_AON_DEBUG_STATE_MARK_WR_SEC                          BIT(21)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG3_WR_SEC                        BIT(20)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG2_WR_SEC                        BIT(19)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CFG1_WR_SEC                        BIT(18)
#define BIT_REG_FW1_AON_DEBUG_RECOV_TYPE_CFG_WR_SEC                      BIT(17)
#define BIT_REG_FW1_AON_WTLCP_HU3GE_NEST_DOMAIN_CTRL_WR_SEC              BIT(16)
#define BIT_REG_FW1_AON_DUAL_RAIL_MEM_POWER_CTRL_WR_SEC                  BIT(15)
#define BIT_REG_FW1_AON_PLL_RST_CTRL_STATE1_WR_SEC                       BIT(14)
#define BIT_REG_FW1_AON_PLL_RST_CTRL_STATE0_WR_SEC                       BIT(13)
#define BIT_REG_FW1_AON_ISPPLL_RST_CTRL_CFG_WR_SEC                       BIT(12)
#define BIT_REG_FW1_AON_RPLL_RST_CTRL_CFG_WR_SEC                         BIT(11)
#define BIT_REG_FW1_AON_GPLL_RST_CTRL_CFG_WR_SEC                         BIT(10)
#define BIT_REG_FW1_AON_LTEPLL_RST_CTRL_CFG_WR_SEC                       BIT(9)
#define BIT_REG_FW1_AON_TWPLL_RST_CTRL_CFG_WR_SEC                        BIT(8)
#define BIT_REG_FW1_AON_DPLL1_RST_CTRL_CFG_WR_SEC                        BIT(7)
#define BIT_REG_FW1_AON_DPLL0_RST_CTRL_CFG_WR_SEC                        BIT(6)
#define BIT_REG_FW1_AON_MPLL2_RST_CTRL_CFG_WR_SEC                        BIT(5)
#define BIT_REG_FW1_AON_MPLL1_RST_CTRL_CFG_WR_SEC                        BIT(4)
#define BIT_REG_FW1_AON_MPLL0_RST_CTRL_CFG_WR_SEC                        BIT(3)
#define BIT_REG_FW1_AON_MPLL_WAIT_CLK_DIV_CFG_WR_SEC                     BIT(2)
#define BIT_REG_FW1_AON_PD_GPU_TOP_CFG1_WR_SEC                           BIT(1)
#define BIT_REG_FW1_AON_APCU_MODE_STATE1_WR_SEC                          BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_6 */

#define BIT_REG_FW1_AON_SP_CLK_GATE_BYP_CFG_WR_SEC                       BIT(31)
#define BIT_REG_FW1_AON_ALL_PLL_PD_RCO_BYP_WR_SEC                        BIT(30)
#define BIT_REG_FW1_AON_OFF_EMU_TO_OFF_CFG_WR_SEC                        BIT(29)
#define BIT_REG_FW1_AON_ANANKE_LITE_DUAL_RAIL_RAM_FORCE_ON_CFG_WR_SEC    BIT(28)
#define BIT_REG_FW1_AON_OFF_EMU_CLR_IN_DISABLE_CFG_WR_SEC                BIT(27)
#define BIT_REG_FW1_AON_DVFS_BLOCK_SHUTDOWN_CFG_WR_SEC                   BIT(26)
#define BIT_REG_FW1_AON_APCPU_CSYSPWRUP_WAKEUP_EN_CFG_WR_SEC             BIT(25)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CLUSTER_INF_WR_SEC         BIT(24)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE7_INF_WR_SEC           BIT(23)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE2_INF_WR_SEC           BIT(22)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE1_INF_WR_SEC           BIT(21)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_APCPU_CORE0_INF_WR_SEC           BIT(20)
#define BIT_REG_FW1_AON_INT_REQ_MODE_ST_RECORD_WR_SEC                    BIT(19)
#define BIT_REG_FW1_AON_INT_REQ_APCPU_MODE_ST_CLR_WR_SEC                 BIT(18)
#define BIT_REG_FW1_AON_INT_REQ_APCPU_MODE_ST_ENABLE_WR_SEC              BIT(17)
#define BIT_REG_FW1_AON_APCPU_DENY_TIME_THRESHOLD_CFG_WR_SEC             BIT(16)
#define BIT_REG_FW1_AON_APCPU_MODE_ST_CGM_EN_CFG_WR_SEC                  BIT(15)
#define BIT_REG_FW1_AON_ANALOG_PHY_PWRON_CFG_WR_SEC                      BIT(14)
#define BIT_REG_FW1_AON_GPIO_FORCE_GATING_PLL_CFG_WR_SEC                 BIT(13)
#define BIT_REG_FW1_AON_WTLCP_DPFEC_NEST_DOMAIN_CTRL_WR_SEC              BIT(12)
#define BIT_REG_FW1_AON_APCPU_CLUSTER_SW_PCHANNEL_HANDSHAKE_WR_SEC       BIT(11)
#define BIT_REG_FW1_AON_APCPU_CORE7_SW_PCHANNEL_HANDSHAKE_WR_SEC         BIT(10)
#define BIT_REG_FW1_AON_APCPU_CORE2_SW_PCHANNEL_HANDSHAKE_WR_SEC         BIT(9)
#define BIT_REG_FW1_AON_APCPU_CORE1_SW_PCHANNEL_HANDSHAKE_WR_SEC         BIT(8)
#define BIT_REG_FW1_AON_APCPU_CORE0_SW_PCHANNEL_HANDSHAKE_WR_SEC         BIT(7)
#define BIT_REG_FW1_AON_SOFTWARE_APCPU_PCHANNEL_HANDSHAKE_ENABLE_WR_SEC  BIT(6)
#define BIT_REG_FW1_AON_SOFTWARE_APCPU_PACTIVE_ENABLE_WR_SEC             BIT(5)
#define BIT_REG_FW1_AON_APCPU_CLUSTER_SW_PACTIVE_WR_SEC                  BIT(4)
#define BIT_REG_FW1_AON_APCPU_CORE7_SW_PACTIVE_WR_SEC                    BIT(3)
#define BIT_REG_FW1_AON_APCPU_CORE2_SW_PACTIVE_WR_SEC                    BIT(2)
#define BIT_REG_FW1_AON_APCPU_CORE1_SW_PACTIVE_WR_SEC                    BIT(1)
#define BIT_REG_FW1_AON_APCPU_CORE0_SW_PACTIVE_WR_SEC                    BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_7 */

#define BIT_REG_FW1_AON_AP_DEEP_SLEEP_CNT_WR_SEC                         BIT(31)
#define BIT_REG_FW1_AON_PUB_SYS_LIGHT_SLEEP_CNT_WR_SEC                   BIT(30)
#define BIT_REG_FW1_AON_AUDCP_SYS_SLEEP_CNT_WR_SEC                       BIT(29)
#define BIT_REG_FW1_AON_PUBCP_SYS_SLEEP_CNT_WR_SEC                       BIT(28)
#define BIT_REG_FW1_AON_WTLCP_SYS_SLEEP_CNT_WR_SEC                       BIT(27)
#define BIT_REG_FW1_AON_AP_SYS_SLEEP_CNT_WR_SEC                          BIT(26)
#define BIT_REG_FW1_AON_APCPU_TOP_SLEEP_CNT_WR_SEC                       BIT(25)
#define BIT_REG_FW1_AON_PD_GPU_RGX_DUST_SHUTDOWN_MARK_STATUS_WR_SEC      BIT(24)
#define BIT_REG_FW1_AON_PD_AUDCP_AUDDSP_SHUTDOWN_MARK_STATUS_WR_SEC      BIT(23)
#define BIT_REG_FW1_AON_PD_PUB_SYS_SHUTDOWN_MARK_STATUS_WR_SEC           BIT(22)
#define BIT_REG_FW1_AON_PD_AUDCP_SYS_SHUTDOWN_MARK_STATUS_WR_SEC         BIT(21)
#define BIT_REG_FW1_AON_PD_WTLCP_TD_PROC_SHUTDOWN_MARK_STATUS_WR_SEC     BIT(20)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_PROC_SHUTDOWN_MARK_STATUS_WR_SEC    BIT(19)
#define BIT_REG_FW1_AON_PD_PUBCP_SYS_SHUTDOWN_MARK_STATUS_WR_SEC         BIT(18)
#define BIT_REG_FW1_AON_PD_WTLCP_SYS_SHUTDOWN_MARK_STATUS_WR_SEC         BIT(17)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_B_SHUTDOWN_MARK_STATUS_WR_SEC     BIT(16)
#define BIT_REG_FW1_AON_PD_WTLCP_HU3GE_A_SHUTDOWN_MARK_STATUS_WR_SEC     BIT(15)
#define BIT_REG_FW1_AON_PD_WTLCP_TGDSP_SHUTDOWN_MARK_STATUS_WR_SEC       BIT(14)
#define BIT_REG_FW1_AON_PD_WTLCP_LDSP_SHUTDOWN_MARK_STATUS_WR_SEC        BIT(13)
#define BIT_REG_FW1_AON_PD_AP_VSP_SHUTDOWN_MARK_STATUS_WR_SEC            BIT(12)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_DPFEC_SHUTDOWN_MARK_STATUS_WR_SEC   BIT(11)
#define BIT_REG_FW1_AON_PD_WTLCP_LTE_CE_SHUTDOWN_MARK_STATUS_WR_SEC      BIT(10)
#define BIT_REG_FW1_AON_PD_MM_TOP_SHUTDOWN_MARK_STATUS_WR_SEC            BIT(9)
#define BIT_REG_FW1_AON_PD_GPU_TOP_SHUTDOWN_MARK_STATUS_WR_SEC           BIT(8)
#define BIT_REG_FW1_AON_PD_AP_SYS_SHUTDOWN_MARK_STATUS_WR_SEC            BIT(7)
#define BIT_REG_FW1_AON_PD_APCPU_TOP_SHUTDOWN_MARK_STATUS_WR_SEC         BIT(6)
#define BIT_REG_FW1_AON_PD_APCPU_C2_SHUTDOWN_MARK_STATUS_WR_SEC          BIT(5)
#define BIT_REG_FW1_AON_PD_APCPU_C1_SHUTDOWN_MARK_STATUS_WR_SEC          BIT(4)
#define BIT_REG_FW1_AON_PD_APCPU_C0_SHUTDOWN_MARK_STATUS_WR_SEC          BIT(3)
#define BIT_REG_FW1_AON_WDG_TRIG_DBG_RECOV_CFG_WR_SEC                    BIT(2)
#define BIT_REG_FW1_AON_SRAM_DLY_CTRL_CFG_WR_SEC                         BIT(1)
#define BIT_REG_FW1_AON_DPLL1_CNT_DONE_BYP_WR_SEC                        BIT(0)

/* REG_REG_FW1_AON_REG_WR_CTRL_8 */

#define BIT_REG_FW1_AON_AUDCP_DOZE_SLEEP_CNT_WR_SEC                      BIT(24)
#define BIT_REG_FW1_AON_PUBCP_DOZE_SLEEP_CNT_WR_SEC                      BIT(23)
#define BIT_REG_FW1_AON_WTLCP_DOZE_SLEEP_CNT_WR_SEC                      BIT(22)
#define BIT_REG_FW1_AON_AP_DOZE_SLEEP_CNT_WR_SEC                         BIT(21)
#define BIT_REG_FW1_AON_APCPU_TOP_LIGHT_SLEEP_CNT_WR_SEC                 BIT(20)
#define BIT_REG_FW1_AON_APCPU_TOP_DEEP_SLEEP_CNT_WR_SEC                  BIT(19)
#define BIT_REG_FW1_AON_PD_APCPU_C7_SHUTDOWN_MARK_STATUS_WR_SEC          BIT(18)
#define BIT_REG_FW1_AON_DDR_SLP_CTRL_STATE_WR_SEC                        BIT(17)
#define BIT_REG_FW1_AON_EIC_SYS_SEL_WR_SEC                               BIT(16)
#define BIT_REG_FW1_AON_PD_AP_SYS_DBG_SHUTDOWN_EN_WR_SEC                 BIT(15)
#define BIT_REG_FW1_AON_CSI_DSI_PWR_CNT_DONE_WR_SEC                      BIT(14)
#define BIT_REG_FW1_AON_REG_SYS_DDR_PWR_HS_ACK_WR_SEC                    BIT(13)
#define BIT_REG_FW1_AON_SOFT_RST_SEL_WR_SEC                              BIT(12)
#define BIT_REG_FW1_AON_REG_SYS_SRST_FRC_LP_ACK_WR_SEC                   BIT(11)
#define BIT_REG_FW1_AON_SYS_SOFT_RST_BUSY_WR_SEC                         BIT(10)
#define BIT_REG_FW1_AON_AON_SYS_LIGHT_SLEEP_CNT_WR_SEC                   BIT(9)
#define BIT_REG_FW1_AON_AUDCP_SYS_LIGHT_SLEEP_CNT_WR_SEC                 BIT(8)
#define BIT_REG_FW1_AON_PUBCP_LIGHT_SLEEP_CNT_WR_SEC                     BIT(7)
#define BIT_REG_FW1_AON_WTLCP_LIGHT_SLEEP_CNT_WR_SEC                     BIT(6)
#define BIT_REG_FW1_AON_AP_LIGHT_SLEEP_CNT_WR_SEC                        BIT(5)
#define BIT_REG_FW1_AON_PUB_SYS_DEEP_SLEEP_CNT_WR_SEC                    BIT(4)
#define BIT_REG_FW1_AON_AUDCP_SYS_DEEP_SLEEP_CNT_WR_SEC                  BIT(3)
#define BIT_REG_FW1_AON_PUBCP_DEEP_SLEEP_CNT_WR_SEC                      BIT(2)
#define BIT_REG_FW1_AON_WTLCP_DEEP_SLEEP_CNT_WR_SEC                      BIT(1)
#define BIT_REG_FW1_AON_SP_SYS_DEEP_SLEEP_CNT_WR_SEC                     BIT(0)

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY0 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY0(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY1 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY1(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY2 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY2(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY3 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY3(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY4 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY4(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY5 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY5(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY6 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY6(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY7 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY7(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY8 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY8(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY9 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY9(x)                          (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY10 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY10(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY11 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY11(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY12 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY12(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY13 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY13(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY14 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY14(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY15 */

#define BIT_REG_FW1_AON_BIT_CTRL_ADDR_ARRAY15(x)                         (((x) & 0xFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY0 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY0(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY1 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY1(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY2 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY2(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY3 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY3(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY4 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY4(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY5 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY5(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY6 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY6(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY7 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY7(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY8 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY8(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY9 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY9(x)                               (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY10 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY10(x)                              (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY11 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY11(x)                              (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY12 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY12(x)                              (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY13 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY13(x)                              (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY14 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY14(x)                              (((x) & 0xFFFFFFFF))

/* REG_REG_FW1_AON_BIT_CTRL_ARRAY15 */

#define BIT_REG_FW1_AON_BIT_CTRL_ARRAY15(x)                              (((x) & 0xFFFFFFFF))


#endif /* REG_FW1_AON_H */


