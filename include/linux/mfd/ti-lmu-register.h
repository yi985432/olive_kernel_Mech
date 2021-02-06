/*
 * TI LMU (Lighting Management Unit) Device Register Map
 *
 * Copyright 2016 Texas Instruments
 * Copyright (C) 2019 XiaoMi, Inc.
 *
 * Author: Milo Kim <milo.kim@ti.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MFD_TI_LMU_REGISTER_H__
#define __MFD_TI_LMU_REGISTER_H__

#include <linux/bitops.h>

/* LM3532 */
#define LM3532_REG_OUTPUT_CFG			0x10
#define LM3532_ILED1_CFG_MASK			0x03
#define LM3532_ILED2_CFG_MASK			0x0C
#define LM3532_ILED3_CFG_MASK			0x30
#define LM3532_ILED1_CFG_SHIFT			0
#define LM3532_ILED2_CFG_SHIFT			2
#define LM3532_ILED3_CFG_SHIFT			4

#define LM3532_REG_RAMPUP			0x12
#define LM3532_REG_RAMPDN			LM3532_REG_RAMPUP
#define LM3532_RAMPUP_MASK			0x07
#define LM3532_RAMPUP_SHIFT			0
#define LM3532_RAMPDN_MASK			0x38
#define LM3532_RAMPDN_SHIFT			3

#define LM3532_REG_ENABLE			0x1D

#define LM3532_REG_PWM_A_CFG			0x13
#define LM3532_PWM_A_MASK			0x05	/* zone 0 */
#define LM3532_PWM_ZONE_0			BIT(2)

#define LM3532_REG_PWM_B_CFG			0x14
#define LM3532_PWM_B_MASK			0x09	/* zone 1 */
#define LM3532_PWM_ZONE_1			BIT(3)

#define LM3532_REG_PWM_C_CFG			0x15
#define LM3532_PWM_C_MASK			0x11	/* zone 2 */
#define LM3532_PWM_ZONE_2			BIT(4)

#define LM3532_REG_ZONE_CFG_A			0x16
#define LM3532_REG_ZONE_CFG_B			0x18
#define LM3532_REG_ZONE_CFG_C			0x1A
#define LM3532_ZONE_MASK			(BIT(2) | BIT(3) | BIT(4))
#define LM3532_ZONE_0				0
#define LM3532_ZONE_1				BIT(2)
#define LM3532_ZONE_2				BIT(3)

#define LM3532_REG_BRT_A			0x70	/* zone 0 */
#define LM3532_REG_BRT_B			0x76	/* zone 1 */
#define LM3532_REG_BRT_C			0x7C	/* zone 2 */

#define LM3532_MAX_REG				0x7E

/* LM36272 and LM36274 */
#define LM3627X_REG_CONFIG1			0x02
#define LM3627X_OVP_MASK			(BIT(5) | BIT(6) | BIT(7))
#define LM3627X_OVP_17V				0
#define LM3627X_OVP_21V				BIT(5)
#define LM3627X_OVP_25V				BIT(6)
#define LM3627X_OVP_29V				(BIT(5) | BIT(6))
#define LM3627X_PWM_MASK			BIT(0)
#define LM3627X_PWM_MODE			BIT(0)

#define LM3627X_REG_CONFIG2			0x03
#define LM3627X_SWFREQ_MASK			BIT(7)
#define LM3627X_SWFREQ_1MHZ			BIT(7)

#define LM3627X_REG_BRT_LSB			0x04
#define LM3627X_REG_BRT_MSB			0x05

#define LM3627X_REG_ENABLE			0x08
#define LM3627X_BL_ENABLE_OFFSET		4
#define LM36272_BL_CHANNEL_MASK			(BIT(0) | BIT(1))
#define LM36272_BL_SINGLE_CHANNEL		BIT(0)
#define LM36272_BL_DUAL_CHANNEL			(BIT(0) | BIT(1))
#define LM36274_BL_CHANNEL_1			BIT(0)
#define LM36274_BL_CHANNEL_2			BIT(1)
#define LM36274_BL_CHANNEL_3			BIT(2)
#define LM36274_BL_CHANNEL_4			BIT(3)

#define LM3627X_REG_BIAS_CONFIG			0x09
#define LM3627X_EXT_EN_MASK			BIT(0)
#define LM3627X_EN_VNEG_MASK			BIT(1)
#define LM3627X_EN_VPOS_MASK			BIT(2)
#define LM3627X_BIAS_MASK			(BIT(5) | BIT(6) | BIT(7))
#define LM3627X_BIAS_DEFAULT			BIT(7)
#define LM3627X_BIAS_AUTO			(BIT(5) | BIT(7))
#define LM3627X_BIAS_WAKE1			(BIT(6) | BIT(7))
#define LM3627X_BIAS_WAKE2			(BIT(5) | BIT(6) | BIT(7))

#define LM3627X_REG_VOUT_BOOST			0x0C
#define LM3627X_REG_VOUT_POS			0x0D
#define LM3627X_REG_VOUT_NEG			0x0E
#define LM3627X_VOUT_MASK			0x3F

#define LM3627X_MAX_REG				0x13

/* LM3631 */
#define LM3631_REG_DEVCTRL			0x00
#define LM3631_LCD_EN_MASK			BIT(1)
#define LM3631_BL_EN_MASK			BIT(0)

#define LM3631_REG_BRT_LSB			0x01
#define LM3631_REG_BRT_MSB			0x02

#define LM3631_REG_BL_CFG			0x06
#define LM3631_BL_CHANNEL_MASK			BIT(3)
#define LM3631_BL_DUAL_CHANNEL			0
#define LM3631_BL_SINGLE_CHANNEL		BIT(3)
#define LM3631_MAP_MASK				BIT(5)
#define LM3631_EXPONENTIAL_MAP			0

#define LM3631_REG_BRT_MODE			0x08
#define LM3631_MODE_MASK			(BIT(1) | BIT(2) | BIT(3))
#define LM3631_DEFAULT_MODE			(BIT(1) | BIT(3))

#define LM3631_REG_SLOPE			0x09
#define LM3631_SLOPE_MASK			0xF0
#define LM3631_SLOPE_SHIFT			4

#define LM3631_REG_LDO_CTRL1			0x0A
#define LM3631_EN_OREF_MASK			BIT(0)
#define LM3631_EN_VNEG_MASK			BIT(1)
#define LM3631_EN_VPOS_MASK			BIT(2)

#define LM3631_REG_LDO_CTRL2			0x0B
#define LM3631_EN_CONT_MASK			BIT(0)

#define LM3631_REG_VOUT_CONT			0x0C
#define LM3631_VOUT_CONT_MASK			(BIT(6) | BIT(7))

#define LM3631_REG_VOUT_BOOST			0x0C
#define LM3631_REG_VOUT_POS			0x0D
#define LM3631_REG_VOUT_NEG			0x0E
#define LM3631_REG_VOUT_OREF			0x0F
#define LM3631_VOUT_MASK			0x3F

#define LM3631_REG_ENTIME_VCONT			0x0B
#define LM3631_ENTIME_CONT_MASK			0x70

#define LM3631_REG_ENTIME_VOREF			0x0F
#define LM3631_REG_ENTIME_VPOS			0x10
#define LM3631_REG_ENTIME_VNEG			0x11
#define LM3631_ENTIME_MASK			0xF0
#define LM3631_ENTIME_SHIFT			4

#define LM3631_MAX_REG				0x16

/* LM3632 */
#define LM3632_REG_CONFIG1			0x02
#define LM3632_OVP_MASK				(BIT(5) | BIT(6) | BIT(7))
#define LM3632_OVP_25V				BIT(6)

#define LM3632_REG_CONFIG2			0x03
#define LM3632_SWFREQ_MASK			BIT(7)
#define LM3632_SWFREQ_1MHZ			BIT(7)

#define LM3632_REG_BRT_LSB			0x04
#define LM3632_REG_BRT_MSB			0x05

#define LM3632_REG_IO_CTRL			0x09
#define LM3632_PWM_MASK				BIT(6)
#define LM3632_I2C_MODE				0
#define LM3632_PWM_MODE				BIT(6)

#define LM3632_REG_ENABLE			0x0A
#define LM3632_BL_EN_MASK			BIT(0)
#define LM3632_BL_CHANNEL_MASK			(BIT(3) | BIT(4))
#define LM3632_BL_SINGLE_CHANNEL		BIT(4)
#define LM3632_BL_DUAL_CHANNEL			BIT(3)

#define LM3632_REG_BIAS_CONFIG			0x0C
#define LM3632_EXT_EN_MASK			BIT(0)
#define LM3632_EN_VNEG_MASK			BIT(1)
#define LM3632_EN_VPOS_MASK			BIT(2)

#define LM3632_REG_VOUT_BOOST			0x0D
#define LM3632_REG_VOUT_POS			0x0E
#define LM3632_REG_VOUT_NEG			0x0F
#define LM3632_VOUT_MASK			0x3F

#define LM3632_MAX_REG				0x10

/* LM3633 */
#define LM3633_REG_HVLED_OUTPUT_CFG		0x10
#define LM3633_HVLED1_CFG_MASK			BIT(0)
#define LM3633_HVLED2_CFG_MASK			BIT(1)
#define LM3633_HVLED3_CFG_MASK			BIT(2)
#define LM3633_HVLED1_CFG_SHIFT			0
#define LM3633_HVLED2_CFG_SHIFT			1
#define LM3633_HVLED3_CFG_SHIFT			2

#define LM3633_REG_BANK_SEL			0x11

#define LM3633_REG_BL0_RAMP			0x12
#define LM3633_REG_BL1_RAMP			0x13
#define LM3633_BL_RAMPUP_MASK			0xF0
#define LM3633_BL_RAMPUP_SHIFT			4
#define LM3633_BL_RAMPDN_MASK			0x0F
#define LM3633_BL_RAMPDN_SHIFT			0

#define LM3633_REG_BL_RAMP_CONF			0x1B
#define LM3633_BL_RAMP_MASK			0x0F
#define LM3633_BL_RAMP_EACH			0x05

#define LM3633_REG_PTN0_RAMP			0x1C
#define LM3633_REG_PTN1_RAMP			0x1D
#define LM3633_PTN_RAMPUP_MASK			0x70
#define LM3633_PTN_RAMPUP_SHIFT			4
#define LM3633_PTN_RAMPDN_MASK			0x07
#define LM3633_PTN_RAMPDN_SHIFT			0

#define LM3633_REG_IMAX_HVLED_A			0x20
#define LM3633_REG_IMAX_HVLED_B			0x21
#define LM3633_REG_IMAX_LVLED_BASE		0x22

#define LM3633_REG_BL_FEEDBACK_ENABLE		0x28

#define LM3633_REG_ENABLE			0x2B
#define LM3633_LED_BANK_OFFSET			2

#define LM3633_REG_PATTERN			0x2C

#define LM3633_REG_BOOST_CFG			0x2D
#define LM3633_OVP_MASK				(BIT(1) | BIT(2))
#define LM3633_OVP_40V				0x6

#define LM3633_REG_PWM_CFG			0x2F
#define LM3633_PWM_A_MASK			BIT(0)
#define LM3633_PWM_B_MASK			BIT(1)

#define LM3633_REG_BRT_HVLED_A_LSB		0x40
#define LM3633_REG_BRT_HVLED_A_MSB		0x41
#define LM3633_REG_BRT_HVLED_B_LSB		0x42
#define LM3633_REG_BRT_HVLED_B_MSB		0x43

#define LM3633_REG_BRT_LVLED_BASE		0x44

#define LM3633_REG_PTN_DELAY			0x50

#define LM3633_REG_PTN_LOWTIME			0x51

#define LM3633_REG_PTN_HIGHTIME			0x52

#define LM3633_REG_PTN_LOWBRT			0x53

#define LM3633_REG_PTN_HIGHBRT			LM3633_REG_BRT_LVLED_BASE

#define LM3633_REG_BL_OPEN_FAULT_STATUS		0xB0

#define LM3633_REG_BL_SHORT_FAULT_STATUS	0xB2

#define LM3633_REG_MONITOR_ENABLE		0xB4

#define LM3633_MAX_REG				0xB4

/* LM3695 */
#define LM3695_REG_GP				0x10
#define LM3695_BL_CHANNEL_MASK			BIT(3)
#define LM3695_BL_DUAL_CHANNEL			0
#define LM3695_BL_SINGLE_CHANNEL			BIT(3)
#define LM3695_BRT_RW_MASK			BIT(2)
#define LM3695_BL_EN_MASK			BIT(0)

#define LM3695_REG_BRT_LSB			0x13
#define LM3695_REG_BRT_MSB			0x14

#define LM3695_MAX_REG				0x14

/* LM3697 */
#define LM3697_REG_HVLED_OUTPUT_CFG		0x10
#define LM3697_HVLED1_CFG_MASK			BIT(0)
#define LM3697_HVLED2_CFG_MASK			BIT(1)
#define LM3697_HVLED3_CFG_MASK			BIT(2)
#define LM3697_HVLED1_CFG_SHIFT			0
#define LM3697_HVLED2_CFG_SHIFT			1
#define LM3697_HVLED3_CFG_SHIFT			2

#define LM3697_REG_BL0_RAMP			0x11
#define LM3697_REG_BL1_RAMP			0x12
#define LM3697_RAMPUP_MASK			0xF0
#define LM3697_RAMPUP_SHIFT			4
#define LM3697_RAMPDN_MASK			0x0F
#define LM3697_RAMPDN_SHIFT			0

#define LM3697_REG_RAMP_CONF			0x14
#define LM3697_RAMP_MASK			0x0F
#define LM3697_RAMP_EACH			0x05

#define LM3697_REG_BOOST_CFG		0x1A

#define LM3697_REG_PWM_CFG			0x1C
#define LM3697_PWM_A_MASK			BIT(0)
#define LM3697_PWM_B_MASK			BIT(1)

#define LM3697_REG_IMAX_A			0x17
#define LM3697_REG_IMAX_B			0x18

#define LM3697_REG_FEEDBACK_ENABLE		0x19

#define LM3697_REG_BRT_A_LSB			0x20
#define LM3697_REG_BRT_A_MSB			0x21
#define LM3697_REG_BRT_B_LSB			0x22
#define LM3697_REG_BRT_B_MSB			0x23

#define LM3697_REG_ENABLE			0x24

#define LM3697_REG_OPEN_FAULT_STATUS		0xB0

#define LM3697_REG_SHORT_FAULT_STATUS		0xB2

#define LM3697_REG_MONITOR_ENABLE		0xB4

#define LM3697_MAX_REG				0xB4
#endif
