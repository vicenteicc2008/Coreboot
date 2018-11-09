/*
* Copyright (c) 2018 naehrwert
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 2, as published by the Free Software Foundation.
*
* This program is distributed in the hope it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _CLOCK_H_
#define _CLOCK_H_

#include "types.h"

/*! Clock registers. */
#define CLK_RST_CONTROLLER_RST_DEVICES_L 0x4
#define CLK_RST_CONTROLLER_RST_DEVICES_H 0x8
#define CLK_RST_CONTROLLER_RST_DEVICES_U 0xC
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_L 0x10
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_H 0x14
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_U 0x18
#define CLK_RST_CONTROLLER_CCLK_BURST_POLICY 0x20
#define CLK_RST_CONTROLLER_SUPER_CCLK_DIVIDER 0x24
#define CLK_RST_CONTROLLER_SCLK_BURST_POLICY 0x28
#define CLK_RST_CONTROLLER_SUPER_SCLK_DIVIDER 0x2C
#define CLK_RST_CONTROLLER_CLK_SYSTEM_RATE 0x30
#define CLK_RST_CONTROLLER_MISC_CLK_ENB 0x48
#define CLK_RST_CONTROLLER_OSC_CTRL 0x50
#define CLK_RST_CONTROLLER_PLLM_BASE 0x90
#define CLK_RST_CONTROLLER_PLLM_OUT 0x94
#define CLK_RST_CONTROLLER_PLLM_MISC1 0x98
#define CLK_RST_CONTROLLER_PLLM_MISC2 0x9c
#define CLK_RST_CONTROLLER_PLLD_BASE 0xD0
#define CLK_RST_CONTROLLER_PLLD_MISC1 0xD8
#define CLK_RST_CONTROLLER_PLLD_MISC 0xDC
#define CLK_RST_CONTROLLER_PLLX_BASE 0xE0
#define CLK_RST_CONTROLLER_PLLX_MISC 0xE4
#define CLK_RST_CONTROLLER_PLLE_BASE 0xE8
#define CLK_RST_CONTROLLER_PLLE_MISC 0xEC
#define CLK_RST_CONTROLLER_PLLE_SS_CNTL1 0xF0
#define CLK_RST_CONTROLLER_PLLE_SS_CNTL2 0xF4
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRA 0xF8
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRB 0xFC
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRC 0x3A0
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRD 0x3A4
#define CLK_RST_CONTROLLER_LVL2_CLK_GATE_OVRE 0x554
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2S2 0x100
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2S3 0x104
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPDIF_OUT 0x108
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPDIF_IN 0x10C
#define CLK_RST_CONTROLLER_CLK_SOURCE_PWM 0x110
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPI2 0x118
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPI3 0x11C
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C1 0x124
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C5 0x128
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPI1 0x134
#define CLK_RST_CONTROLLER_CLK_SOURCE_DISP1 0x138
#define CLK_RST_CONTROLLER_CLK_SOURCE_DISP2 0x13C
#define CLK_RST_CONTROLLER_CLK_SOURCE_ISP 0x144
#define CLK_RST_CONTROLLER_CLK_SOURCE_VI 0x148
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC1 0x150
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC2 0x154
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC4 0x164
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTA 0x178
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTB 0x17C
#define CLK_RST_CONTROLLER_CLK_SOURCE_HOST1X 0x180
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C2 0x198
#define CLK_RST_CONTROLLER_CLK_SOURCE_EMC 0x19C
#define CLK_RST_CONTROLLER_CLK_SOURCE_EMC_DLL 0x664
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTC 0x1A0
#define CLK_RST_CONTROLLER_CLK_SOURCE_VI_SENSOR 0x1A8
#define CLK_RST_CONTROLLER_CLK_SOURCE_SPI4 0x1B4
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C3 0x1B8
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC3 0x1BC
#define CLK_RST_CONTROLLER_CLK_SOURCE_UARTD 0x1C0
#define CLK_RST_CONTROLLER_CLK_SOURCE_OWR 0x1CC
#define CLK_RST_CONTROLLER_CLK_SOURCE_CSITE 0x1D4
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2S1 0x1D8
#define CLK_RST_CONTROLLER_CLK_SOURCE_DTV 0x1DC
#define CLK_RST_CONTROLLER_CLK_SOURCE_TSEC 0x1F4
#define CLK_RST_CONTROLLER_CLK_SPARE2 0x1FC
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_X 0x280
#define CLK_RST_CONTROLLER_CLK_ENB_X_SET 0x284
#define CLK_RST_CONTROLLER_CLK_ENB_X_CLR 0x288
#define CLK_RST_CONTROLLER_RST_DEVICES_X 0x28C
#define CLK_RST_CONTROLLER_RST_DEV_X_SET 0x290
#define CLK_RST_CONTROLLER_RST_DEV_X_CLR 0x294
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_Y 0x298
#define CLK_RST_CONTROLLER_CLK_ENB_Y_SET 0x29C
#define CLK_RST_CONTROLLER_CLK_ENB_Y_CLR 0x2A0
#define CLK_RST_CONTROLLER_RST_DEVICES_Y 0x2A4
#define CLK_RST_CONTROLLER_RST_DEV_Y_SET 0x2A8
#define CLK_RST_CONTROLLER_RST_DEV_Y_CLR 0x2AC
#define CLK_RST_CONTROLLER_DFLL_BASE	 0x2F4
#define CLK_RST_CONTROLLER_RST_DEV_L_SET 0x300
#define CLK_RST_CONTROLLER_RST_DEV_L_CLR 0x304
#define CLK_RST_CONTROLLER_RST_DEV_H_SET 0x308
#define CLK_RST_CONTROLLER_RST_DEV_H_CLR 0x30C
#define CLK_RST_CONTROLLER_RST_DEV_U_SET 0x310
#define CLK_RST_CONTROLLER_RST_DEV_U_CLR 0x314
#define CLK_RST_CONTROLLER_CLK_ENB_L_SET 0x320
#define CLK_RST_CONTROLLER_CLK_ENB_L_CLR 0x324
#define CLK_RST_CONTROLLER_CLK_ENB_H_SET 0x328
#define CLK_RST_CONTROLLER_CLK_ENB_H_CLR 0x32C
#define CLK_RST_CONTROLLER_CLK_ENB_U_SET 0x330
#define CLK_RST_CONTROLLER_CLK_ENB_U_CLR 0x334
#define CLK_RST_CONTROLLER_CCPLEX_PG_SM_OVRD 0x33C
#define CLK_RST_CONTROLLER_RST_CPU_CMPLX_SET 0x340
#define CLK_RST_CONTROLLER_RST_DEVICES_V 0x358
#define CLK_RST_CONTROLLER_RST_DEVICES_W 0x35C
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_V 0x360
#define CLK_RST_CONTROLLER_CLK_OUT_ENB_W 0x364
#define CLK_RST_CONTROLLER_CCLKG_BURST_POLICY 0x368
#define CLK_RST_CONTROLLER_SUPER_CCLKG_DIVIDER 0x36C
#define CLK_RST_CONTROLLER_CCLKLP_BURST_POLICY 0x370
#define CLK_RST_CONTROLLER_SUPER_CCLKLP_DIVIDER 0x374
#define CLK_RST_CONTROLLER_CPU_SOFTRST_CTRL 0x380
#define CLK_RST_CONTROLLER_CPU_SOFTRST_CTRL1 0x384
#define CLK_RST_CONTROLLER_CPU_SOFTRST_CTRL2 0x388
#define CLK_RST_CONTROLLER_CLK_SOURCE_MSELECT 0x3B4
#define CLK_RST_CONTROLLER_CLK_SOURCE_TSENSOR 0x3B8
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2S4 0x3BC
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2S5 0x3C0
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C4 0x3C4
#define CLK_RST_CONTROLLER_CLK_SOURCE_AHUB 0x3D0
#define CLK_RST_CONTROLLER_CLK_SOURCE_HDA2CODEC_2X 0x3E4
#define CLK_RST_CONTROLLER_CLK_SOURCE_ACTMON 0x3E8
#define CLK_RST_CONTROLLER_CLK_SOURCE_EXTPERIPH1 0x3EC
#define CLK_RST_CONTROLLER_CLK_SOURCE_EXTPERIPH2 0x3F0
#define CLK_RST_CONTROLLER_CLK_SOURCE_EXTPERIPH3 0x3F4
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C_SLOW 0x3FC
#define CLK_RST_CONTROLLER_CLK_SOURCE_SYS 0x400
#define CLK_RST_CONTROLLER_CLK_SOURCE_ISPB 0x404
#define CLK_RST_CONTROLLER_CLK_SOURCE_SOR1 0x410
#define CLK_RST_CONTROLLER_CLK_SOURCE_SOR0 0x414
#define CLK_RST_CONTROLLER_CLK_SOURCE_HDA 0x428
#define CLK_RST_CONTROLLER_CLK_SOURCE_SE 0x42C
#define CLK_RST_CONTROLLER_RST_DEV_V_CLR 0x434
#define CLK_RST_CONTROLLER_RST_DEV_W_SET 0x438
#define CLK_RST_CONTROLLER_RST_DEV_W_CLR 0x43C
#define CLK_RST_CONTROLLER_CLK_ENB_V_SET 0x440
#define CLK_RST_CONTROLLER_CLK_ENB_V_CLR 0x444
#define CLK_RST_CONTROLLER_CLK_ENB_W_SET 0x448
#define CLK_RST_CONTROLLER_CLK_ENB_W_CLR 0x44C
#define CLK_RST_CONTROLLER_RST_CPUG_CMPLX_CLR 0x454
#define CLK_RST_CONTROLLER_PLLX_MISC_3 0x518
#define CLK_RST_CONTROLLER_SPARE_REG0 0x55C
#define CLK_RST_CONTROLLER_PLLMB_BASE 0x5E8
#define CLK_RST_CONTROLLER_CLK_SOURCE_XUSB_CORE_HOST 0x600
#define CLK_RST_CONTROLLER_CLK_SOURCE_XUSB_FALCON 0x604
#define CLK_RST_CONTROLLER_CLK_SOURCE_XUSB_FS 0x608
#define CLK_RST_CONTROLLER_CLK_SOURCE_XUSB_CORE_DEV 0x60C
#define CLK_RST_CONTROLLER_CLK_SOURCE_XUSB_SS 0x610
#define CLK_RST_CONTROLLER_CLK_SOURCE_CILAB 0x614
#define CLK_RST_CONTROLLER_CLK_SOURCE_CILCD 0x618
#define CLK_RST_CONTROLLER_CLK_SOURCE_CILEF 0x61C
#define CLK_RST_CONTROLLER_CLK_SOURCE_DSIA_LP 0x620
#define CLK_RST_CONTROLLER_CLK_SOURCE_DSIB_LP 0x624
#define CLK_RST_CONTROLLER_CLK_SOURCE_ENTROPY 0x628
#define CLK_RST_CONTROLLER_CLK_SOURCE_DVFS_REF 0x62C
#define CLK_RST_CONTROLLER_CLK_SOURCE_DVFS_SOC 0x630
#define CLK_RST_CONTROLLER_CLK_SOURCE_EMC_LATENCY 0x640
#define CLK_RST_CONTROLLER_CLK_SOURCE_SOC_THERM 0x644
#define CLK_RST_CONTROLLER_CLK_SOURCE_DMIC1 0x64C
#define CLK_RST_CONTROLLER_CLK_SOURCE_DMIC2 0x650
#define CLK_RST_CONTROLLER_CLK_SOURCE_VI_SENSOR2 0x658
#define CLK_RST_CONTROLLER_CLK_SOURCE_I2C6 0x65C
#define CLK_RST_CONTROLLER_CLK_SOURCE_MIPIBIF 0x660
#define CLK_RST_CONTROLLER_CLK_SOURCE_UART_FST_MIPI_CAL 0x66C
#define CLK_RST_CONTROLLER_CLK_SOURCE_VIC 0x678
#define CLK_RST_CONTROLLER_CLK_SOURCE_SDMMC_LEGACY_TM 0x694
#define CLK_RST_CONTROLLER_CLK_SOURCE_NVDEC 0x698
#define CLK_RST_CONTROLLER_CLK_SOURCE_NVJPG 0x69C
#define CLK_RST_CONTROLLER_CLK_SOURCE_NVENC 0x6A0
#define CLK_RST_CONTROLLER_PLLA1_BASE 0x6A4
#define CLK_RST_CONTROLLER_PLLA1_MISC_0 0x6A8
#define CLK_RST_CONTROLLER_PLLA1_MISC_1 0x6AC
#define CLK_RST_CONTROLLER_PLLA1_MISC_2 0x6B0
#define CLK_RST_CONTROLLER_PLLA1_MISC_3 0x6B4
#define CLK_RST_CONTROLLER_AUDIO_SYNC_CLK_DMIC3 0x6B8
#define CLK_RST_CONTROLLER_CLK_SOURCE_DMIC3 0x6BC
#define CLK_RST_CONTROLLER_CLK_SOURCE_APE 0x6C0
#define CLK_RST_CONTROLLER_CLK_SOURCE_QSPI 0x6C4
#define CLK_RST_CONTROLLER_CLK_SOURCE_VI_I2C 0x6C8
#define CLK_RST_CONTROLLER_CLK_SOURCE_USB2_HSIC_TRK 0x6CC
#define CLK_RST_CONTROLLER_CLK_SOURCE_PEX_SATA_USB_RX_BYP 0x6D0
#define CLK_RST_CONTROLLER_CLK_SOURCE_MAUD 0x6D4
#define CLK_RST_CONTROLLER_CLK_SOURCE_TSECB 0x6D8
#define CLK_RST_CONTROLLER_CLK_CPUG_MISC1 0x6DC

enum {
	CLK_L_CPU = 0x1 << 0,
	CLK_L_COP = 0x1 << 1,
	CLK_L_TRIG_SYS = 0x1 << 2,
	CLK_L_RTC = 0x1 << 4,
	CLK_L_TMR = 0x1 << 5,
	CLK_L_UARTA = 0x1 << 6,
	CLK_L_UARTB = 0x1 << 7,
	CLK_L_GPIO = 0x1 << 8,
	CLK_L_SDMMC2 = 0x1 << 9,
	CLK_L_SPDIF = 0x1 << 10,
	CLK_L_I2S2 = 0x1 << 11,
	CLK_L_I2C1 = 0x1 << 12,
	CLK_L_NDFLASH = 0x1 << 13,
	CLK_L_SDMMC1 = 0x1 << 14,
	CLK_L_SDMMC4 = 0x1 << 15,
	CLK_L_PWM = 0x1 << 17,
	CLK_L_I2S3 = 0x1 << 18,
	CLK_L_EPP = 0x1 << 19,
	CLK_L_VI = 0x1 << 20,
	CLK_L_2D = 0x1 << 21,
	CLK_L_USBD = 0x1 << 22,
	CLK_L_ISP = 0x1 << 23,
	CLK_L_3D = 0x1 << 24,
	CLK_L_DISP2 = 0x1 << 26,
	CLK_L_DISP1 = 0x1 << 27,
	CLK_L_HOST1X = 0x1 << 28,
	CLK_L_VCP = 0x1 << 29,
	CLK_L_I2S1 = 0x1 << 30,
	CLK_L_CACHE2 = 0x1 << 31,

	CLK_H_MEM = 0x1 << 0,
	CLK_H_AHBDMA = 0x1 << 1,
	CLK_H_APBDMA = 0x1 << 2,
	CLK_H_KBC = 0x1 << 4,
	CLK_H_STAT_MON = 0x1 << 5,
	CLK_H_PMC = 0x1 << 6,
	CLK_H_FUSE = 0x1 << 7,
	CLK_H_KFUSE = 0x1 << 8,
	CLK_H_SBC1 = 0x1 << 9,
	CLK_H_SNOR = 0x1 << 10,
	CLK_H_JTAG2TBC = 0x1 << 11,
	CLK_H_SBC2 = 0x1 << 12,
	CLK_H_SBC3 = 0x1 << 14,
	CLK_H_I2C5 = 0x1 << 15,
	CLK_H_DSI = 0x1 << 16,
	CLK_H_HSI = 0x1 << 18,
	CLK_H_HDMI = 0x1 << 19,
	CLK_H_CSI = 0x1 << 20,
	CLK_H_I2C2 = 0x1 << 22,
	CLK_H_UARTC = 0x1 << 23,
	CLK_H_MIPI_CAL = 0x1 << 24,
	CLK_H_EMC = 0x1 << 25,
	CLK_H_USB2 = 0x1 << 26,
	CLK_H_USB3 = 0x1 << 27,
	CLK_H_MPE = 0x1 << 28,
	CLK_H_VDE = 0x1 << 29,
	CLK_H_BSEA = 0x1 << 30,
	CLK_H_BSEV = 0x1 << 31,

	CLK_U_UARTD = 0x1 << 1,
	CLK_U_UARTE = 0x1 << 2,
	CLK_U_I2C3 = 0x1 << 3,
	CLK_U_SBC4 = 0x1 << 4,
	CLK_U_SDMMC3 = 0x1 << 5,
	CLK_U_PCIE = 0x1 << 6,
	CLK_U_OWR = 0x1 << 7,
	CLK_U_AFI = 0x1 << 8,
	CLK_U_CSITE = 0x1 << 9,
	CLK_U_PCIEXCLK = 0x1 << 10,
	CLK_U_AVPUCQ = 0x1 << 11,
	CLK_U_TRACECLKIN = 0x1 << 13,
	CLK_U_SOC_THERM = 0x1 << 14,
	CLK_U_DTV = 0x1 << 15,
	CLK_U_NAND_SPEED = 0x1 << 16,
	CLK_U_I2C_SLOW = 0x1 << 17,
	CLK_U_DSIB = 0x1 << 18,
	CLK_U_TSEC = 0x1 << 19,
	CLK_U_IRAMA = 0x1 << 20,
	CLK_U_IRAMB = 0x1 << 21,
	CLK_U_IRAMC = 0x1 << 22,

	// Clock reset.
	CLK_U_EMUCIF = 0x1 << 23,
	// Clock enable.
	CLK_U_IRAMD = 0x1 << 23,

	CLK_U_CRAM2 = 0x2 << 24,
	CLK_U_XUSB_HOST = 0x1 << 25,
	CLK_U_MSENC = 0x1 << 27,
	CLK_U_SUS_OUT = 0x1 << 28,
	CLK_U_DEV2_OUT = 0x1 << 29,
	CLK_U_DEV1_OUT = 0x1 << 30,
	CLK_U_XUSB_DEV = 0x1 << 31,

	CLK_V_CPUG = 0x1 << 0,
	CLK_V_CPULP = 0x1 << 1,
	CLK_V_3D2 = 0x1 << 2,
	CLK_V_MSELECT = 0x1 << 3,
	CLK_V_I2S4 = 0x1 << 5,
	CLK_V_I2S5 = 0x1 << 6,
	CLK_V_I2C4 = 0x1 << 7,
	CLK_V_SBC5 = 0x1 << 8,
	CLK_V_SBC6 = 0x1 << 9,
	CLK_V_AHUB = 0x1 << 10,
	CLK_V_APB2APE = 0x1 << 11,
	CLK_V_HDA2CODEC_2X = 0x1 << 15,
	CLK_V_ATOMICS = 0x1 << 16,
	CLK_V_SPDIF_DOUBLER = 0x1 << 22,
	CLK_V_ACTMON = 0x1 << 23,
	CLK_V_EXTPERIPH1 = 0x1 << 24,
	CLK_V_SATA = 0x1 << 28,
	CLK_V_HDA = 0x1 << 29,

	CLK_W_HDA2HDMICODEC = 0x1 << 0,
	CLK_W_SATACOLD = 0x1 << 1,
	CLK_W_PCIERX0 = 0x1 << 2,
	CLK_W_PCIERX1 = 0x1 << 3,
	CLK_W_PCIERX2 = 0x1 << 4,
	CLK_W_PCIERX3 = 0x1 << 5,
	CLK_W_PCIERX4 = 0x1 << 6,
	CLK_W_PCIERX5 = 0x1 << 7,
	CLK_W_CEC = 0x1 << 8,
	CLK_W_PCIE2_IOBIST = 0x1 << 9,
	CLK_W_EMC_IOBIST = 0x1 << 10,
	CLK_W_SATA_IOBIST = 0x1 << 12,
	CLK_W_MIPI_IOBIST = 0x1 << 13,
	CLK_W_XUSB_PADCTL = 0x1 << 14,
	CLK_W_XUSB = 0x1 << 15,
	CLK_W_CILAB = 0x1 << 16,
	CLK_W_CILCD = 0x1 << 17,
	CLK_W_CILEF = 0x1 << 18,
	CLK_W_DSIA_LP = 0x1 << 19,
	CLK_W_DSIB_LP = 0x1 << 20,
	CLK_W_ENTROPY = 0x1 << 21,
	CLK_W_DVFS = 0x1 << 27,
	CLK_W_XUSB_SS = 0x1 << 28,
	CLK_W_EMC_LATENCY = 0x1 << 29,
	CLK_W_MC1 = 0x1 << 30,

	CLK_X_SPARE = 0x1 << 0,
	CLK_X_DMIC1 = 0x1 << 1,
	CLK_X_DMIC2 = 0x1 << 2,
	CLK_X_ETR = 0x1 << 3,
	CLK_X_CAM_MCLK = 0x1 << 4,
	CLK_X_CAM_MCLK2 = 0x1 << 5,
	CLK_X_I2C6 = 0x1 << 6,
	CLK_X_MC_CAPA = 0x1 << 7,	
	CLK_X_MC_CBPA = 0x1 << 8,
	CLK_X_MC_CPU = 0x1 << 9,
	CLK_X_MC_BBC = 0x1 << 10,
	CLK_X_VIM2_CLK = 0x1 << 11,
	CLK_X_MIPIBIF = 0x1 << 13,
	CLK_X_EMC_DLL = 0x1 << 14,	
	CLK_X_UART_FST_MIPI_CAL = 0x1 << 17,
	CLK_X_VIC = 0x1 << 18,
	CLK_X_DPAUX = 0x1 << 21,
	CLK_X_SOR0 = 0x1 << 22,
	CLK_X_SOR1 = 0x1 << 23,
	CLK_X_GPU = 0x1 << 24,
	CLK_X_DPGAPB = 0x1 << 25,
	CLK_X_HPLL_ADSP = 0x1 << 26,
	CLK_X_PLLP_ADSP = 0x1 << 27,
	CLK_X_PLLA_ADSP = 0x1 << 28,
	CLK_X_PLLG_REF = 0x1 << 29,
	
	CLK_Y_SPARE1 = 0x1 << 0,
	CLK_Y_SDMMC_LEGACY_TM = 0x1 << 1,
	CLK_Y_NVDEC = 0x1 << 2,
	CLK_Y_NVJPG = 0x1 << 3,
	CLK_Y_AXIAP = 0x1 << 4,
	CLK_Y_DMIC3 = 0x1 << 5,
	CLK_Y_APE = 0x1 << 6,
	CLK_Y_ADSP = 0x1 << 7,
	CLK_Y_MC_CDPA = 0x1 << 8,
	CLK_Y_MC_CCPA = 0x1 << 9,
	CLK_Y_MAUD = 0x1 << 10,
	CLK_Y_TSECB = 0x1 << 14,
	CLK_Y_DPAUX1 = 0x1 << 15,
	CLK_Y_VI_I2C = 0x1 << 16,
	CLK_Y_HSIC_TRK = 0x1 << 17,
	CLK_Y_USB2_TRK = 0x1 << 18,
	CLK_Y_QSPI = 0x1 << 19,
	CLK_Y_UARTAPE = 0x1 << 20,
	CLK_Y_ADSPNEON = 0x1 << 26,
	CLK_Y_NVENC = 0x1 << 27,
	CLK_Y_IQC2 = 0x1 << 28,
	CLK_Y_IQC1 = 0x1 << 29,
	CLK_Y_SOR_SAFE = 0x1 << 30,
	CLK_Y_PLLP_OUT_CPU = 0x1 << 31
};

/* PLLM specific registers */
#define PLLM_MISC1_SETUP_SHIFT		0
#define PLLM_MISC1_PD_LSHIFT_PH45_SHIFT		28
#define PLLM_MISC1_PD_LSHIFT_PH90_SHIFT		29
#define PLLM_MISC1_PD_LSHIFT_PH135_SHIFT	30
#define PLLM_MISC2_KCP_SHIFT		1
#define PLLM_MISC2_KVCO_SHIFT		0
#define PLLM_OUT1_RSTN_RESET_DISABLE	(1 << 0)
#define PLLM_EN_LCKDET          	(1 << 4)

/* CLK_RST_CONTROLLER_PLL*_BASE_0 */
#define PLL_BASE_BYPASS			(1U << 31)
#define PLL_BASE_ENABLE			(1U << 30)
#define PLL_BASE_REF_DIS		(1U << 29)
#define PLL_BASE_OVRRIDE		(1U << 28)
#define PLL_BASE_LOCK			(1U << 27)
#define PLLC_BASE_LOCK			(1U << 26)

#define PLL_BASE_DIVP_SHIFT		20
#define PLL_BASE_DIVP_MASK		(7U << PLL_BASE_DIVP_SHIFT)

#define PLL_BASE_DIVN_SHIFT		8
#define PLL_BASE_DIVN_MASK		(0x3ffU << PLL_BASE_DIVN_SHIFT)

#define PLL_BASE_DIVM_SHIFT		0
#define PLL_BASE_DIVM_MASK		(0x1f << PLL_BASE_DIVM_SHIFT)

/* SPECIAL CASE: PLLM, PLLC and PLLX use different-sized fields here */
#define PLLCX_BASE_DIVP_MASK		(0xfU << PLL_BASE_DIVP_SHIFT)
#define PLLM_BASE_DIVP_MASK			(0x1fU << PLL_BASE_DIVP_SHIFT)
#define PLLCMX_BASE_DIVN_MASK		(0xffU << PLL_BASE_DIVN_SHIFT)
#define PLLCMX_BASE_DIVM_MASK		(0xffU << PLL_BASE_DIVM_SHIFT)

#define PLLX_IDDQ_SHIFT			3
#define PLLX_IDDQ_MASK			(1U << PLLX_IDDQ_SHIFT)

#define CLK_DIVISOR_MASK		(0xffff)

#define CLK_SOURCE_SHIFT		29
#define CLK_SOURCE_MASK			(0x7 << CLK_SOURCE_SHIFT)

#define CLK_SOURCE_EMC_MC_EMC_SAME_FREQ (1 << 16)
#define EMC_2X_CLK_SRC_SHIFT		29
#define PLLM_UD				4

/* PLL stabilization delay in usec */
#define CLOCK_PLL_STABLE_DELAY_US 300

#define IO_STABILIZATION_DELAY (2)
#define LOGIC_STABILIZATION_DELAY (2)

/* Bits to enable/reset modules */
#define CLK_ENB_CPU			(1 << 0)
#define SWR_TRIG_SYS_RST		(1 << 2)
#define SWR_CSITE_RST			(1 << 9)
#define CLK_ENB_CSITE			(1 << 9)
#define CLK_ENB_EMC_DLL			(1 << 14)

/*! Generic clock descriptor. */
typedef struct _clock_t
{
	u32 reset;
	u32 enable;
	u32 source;
	u8 index;
	u8 clk_src;
	u8 clk_div;
} clock_t;

#endif
