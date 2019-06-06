/*
 * Copyright (C) 2017 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2017-12-27 19:24:15
 *
 */


#ifndef ANLG_PHY_G7_H
#define ANLG_PHY_G7_H



#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL0        (0x0000)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL1        (0x0004)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL2        (0x0008)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL3        (0x000C)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL4        (0x0010)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL0        (0x0018)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL1        (0x001C)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL2        (0x0020)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL3        (0x0024)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL4        (0x0028)
#define REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_REG_SEL_CFG_0      (0x0030)
#define REG_ANLG_PHY_G7_SOFT_CNT_DONE0_CFG                 (0x0040)
#define REG_ANLG_PHY_G7_PLL_WAIT_SEL0_CFG                  (0x0044)
#define REG_ANLG_PHY_G7_PLL_WAIT_SW_CTL0_CFG               (0x0048)
#define REG_ANLG_PHY_G7_DIV_EN_SEL0_CFG                    (0x004C)
#define REG_ANLG_PHY_G7_DIV_EN_SW_CTL0_CFG                 (0x0050)
#define REG_ANLG_PHY_G7_GATE_EN_SEL0_CFG                   (0x0054)
#define REG_ANLG_PHY_G7_GATE_EN_SW_CTL0_CFG                (0x0058)
#define REG_ANLG_PHY_G7_MONITOR_WAIT_EN_STATUS0_CFG        (0x005C)
#define REG_ANLG_PHY_G7_MONITOR_DIV_AUTO_EN_STATUS0_CFG    (0x0060)
#define REG_ANLG_PHY_G7_MONITOR_GATE_AUTO_EN_STATUS0_CFG   (0x0064)

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL0 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_MACRO_TYPE(x)      (((x) & 0xFF) << 24)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_REG_VERSION(x)     (((x) & 0xF) << 20)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_N(x)               (((x) & 0x7FF) << 8)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_IBIAS(x)           (((x) & 0x3) << 6)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_LPF(x)             (((x) & 0x7) << 3)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_SDM_EN             BIT(2)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_MOD_EN             BIT(1)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_DIV_S              BIT(0)

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL1 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_NINT(x)            (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_KINT(x)            (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL2 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_LOCK_DONE          BIT(31)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_IL_DIV             BIT(28)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_BAND               BIT(26)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_RST                BIT(25)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_PD                 BIT(24)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CLKOUT_EN          BIT(0)

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL3 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_RESERVED(x)        (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_DIV_SEL(x)         (((x) & 0xF) << 8)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CCS_CTRL(x)        (((x) & 0xFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_CTRL4 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_BIST_EN            BIT(16)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL0_BIST_CNT(x)        (((x) & 0xFFFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL0 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_MACRO_TYPE(x)      (((x) & 0xFF) << 24)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_REG_VERSION(x)     (((x) & 0xF) << 20)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_N(x)               (((x) & 0x7FF) << 8)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_IBIAS(x)           (((x) & 0x3) << 6)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_LPF(x)             (((x) & 0x7) << 3)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_SDM_EN             BIT(2)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_MOD_EN             BIT(1)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_DIV_S              BIT(0)

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL1 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_NINT(x)            (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_KINT(x)            (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL2 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_LOCK_DONE          BIT(31)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_IL_DIV             BIT(28)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_BAND               BIT(26)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_RST                BIT(25)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_PD                 BIT(24)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CLKOUT_EN          BIT(0)

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL3 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_RESERVED(x)        (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_DIV_SEL(x)         (((x) & 0xF) << 8)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CCS_CTRL(x)        (((x) & 0xFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_CTRL4 */

#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_BIST_EN            BIT(16)
#define BIT_ANLG_PHY_G7_ANALOG_DPLL_TOP_DPLL1_BIST_CNT(x)        (((x) & 0xFFFF))

/* REG_ANLG_PHY_G7_ANALOG_DPLL_TOP_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL0_PD         BIT(7)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL0_RST        BIT(6)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL0_CLKOUT_EN  BIT(5)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL0_DIV_SEL    BIT(4)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL1_PD         BIT(3)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL1_RST        BIT(2)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL1_CLKOUT_EN  BIT(1)
#define BIT_ANLG_PHY_G7_DBG_SEL_ANALOG_DPLL_TOP_DPLL1_DIV_SEL    BIT(0)

/* REG_ANLG_PHY_G7_SOFT_CNT_DONE0_CFG */

#define BIT_ANLG_PHY_G7_DPLL0_DIVN_SOFT_CNT_DONE                 BIT(3)
#define BIT_ANLG_PHY_G7_DPLL0_DIV1_SOFT_CNT_DONE                 BIT(2)
#define BIT_ANLG_PHY_G7_DPLL1_DIVN_SOFT_CNT_DONE                 BIT(1)
#define BIT_ANLG_PHY_G7_DPLL1_DIV1_SOFT_CNT_DONE                 BIT(0)

/* REG_ANLG_PHY_G7_PLL_WAIT_SEL0_CFG */

#define BIT_ANLG_PHY_G7_DPLL0_DIVN_WAIT_AUTO_GATE_SEL            BIT(3)
#define BIT_ANLG_PHY_G7_DPLL0_DIV1_WAIT_AUTO_GATE_SEL            BIT(2)
#define BIT_ANLG_PHY_G7_DPLL1_DIVN_WAIT_AUTO_GATE_SEL            BIT(1)
#define BIT_ANLG_PHY_G7_DPLL1_DIV1_WAIT_AUTO_GATE_SEL            BIT(0)

/* REG_ANLG_PHY_G7_PLL_WAIT_SW_CTL0_CFG */

#define BIT_ANLG_PHY_G7_DPLL0_DIVN_WAIT_FORCE_EN                 BIT(3)
#define BIT_ANLG_PHY_G7_DPLL0_DIV1_WAIT_FORCE_EN                 BIT(2)
#define BIT_ANLG_PHY_G7_DPLL1_DIVN_WAIT_FORCE_EN                 BIT(1)
#define BIT_ANLG_PHY_G7_DPLL1_DIV1_WAIT_FORCE_EN                 BIT(0)

/* REG_ANLG_PHY_G7_DIV_EN_SEL0_CFG */

#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_933M4_AUTO_GATE_SEL       BIT(6)
#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_29M2_AUTO_GATE_SEL        BIT(5)
#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_622M2_AUTO_GATE_SEL       BIT(4)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_123M1_AUTO_GATE_SEL       BIT(3)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_400M_AUTO_GATE_SEL        BIT(2)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_50M_AUTO_GATE_SEL         BIT(1)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_266M7_AUTO_GATE_SEL       BIT(0)

/* REG_ANLG_PHY_G7_DIV_EN_SW_CTL0_CFG */

#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_933M4_FORCE_EN            BIT(6)
#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_29M2_FORCE_EN             BIT(5)
#define BIT_ANLG_PHY_G7_DPLL0_DIV_DIV1_622M2_FORCE_EN            BIT(4)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_123M1_FORCE_EN            BIT(3)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_400M_FORCE_EN             BIT(2)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_50M_FORCE_EN              BIT(1)
#define BIT_ANLG_PHY_G7_DPLL1_DIV_DIV1_266M7_FORCE_EN            BIT(0)

/* REG_ANLG_PHY_G7_GATE_EN_SEL0_CFG */

#define BIT_ANLG_PHY_G7_CGM_DPLL0_1866M7_PUB_AUTO_GATE_SEL       BIT(8)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_1600M_PUB_AUTO_GATE_SEL        BIT(7)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_622M3_AON_AUTO_GATE_SEL        BIT(6)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_29M2_AON_AUTO_GATE_SEL         BIT(5)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_400M_AON_AUTO_GATE_SEL         BIT(4)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_266M7_AON_AUTO_GATE_SEL        BIT(3)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_123M1_AON_AUTO_GATE_SEL        BIT(2)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_50M_AON_AUTO_GATE_SEL          BIT(1)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_933M4_CPU_AUTO_GATE_SEL        BIT(0)

/* REG_ANLG_PHY_G7_GATE_EN_SW_CTL0_CFG */

#define BIT_ANLG_PHY_G7_CGM_DPLL0_1866M7_PUB_FORCE_EN            BIT(8)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_1600M_PUB_FORCE_EN             BIT(7)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_622M3_AON_FORCE_EN             BIT(6)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_29M2_AON_FORCE_EN              BIT(5)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_400M_AON_FORCE_EN              BIT(4)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_266M7_AON_FORCE_EN             BIT(3)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_123M1_AON_FORCE_EN             BIT(2)
#define BIT_ANLG_PHY_G7_CGM_DPLL1_50M_AON_FORCE_EN               BIT(1)
#define BIT_ANLG_PHY_G7_CGM_DPLL0_933M4_CPU_FORCE_EN             BIT(0)

/* REG_ANLG_PHY_G7_MONITOR_WAIT_EN_STATUS0_CFG */

#define BIT_ANLG_PHY_G7_MONITOR_WAIT_EN_STATUS(x)                (((x) & 0xF))

/* REG_ANLG_PHY_G7_MONITOR_DIV_AUTO_EN_STATUS0_CFG */

#define BIT_ANLG_PHY_G7_MONITOR_DIV_AUTO_EN_STATUS(x)            (((x) & 0x7F))

/* REG_ANLG_PHY_G7_MONITOR_GATE_AUTO_EN_STATUS0_CFG */

#define BIT_ANLG_PHY_G7_MONITOR_GATE_AUTO_EN_STATUS(x)           (((x) & 0x1FF))


#endif /* ANLG_PHY_G7_H */

