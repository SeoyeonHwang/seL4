/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __PLAT_MACHINE_H
#define __PLAT_MACHINE_H

#include <arch/machine/gic_pl390.h>

#define N_INTERRUPTS     160

enum IRQConstants {
//  INTERRUPT_RESERVED      =   0,
//  INTERRUPT_RESERVED      =   1,
//  INTERRUPT_RESERVED      =   2,
//  INTERRUPT_RESERVED      =   3,
//  INTERRUPT_RESERVED      =   4,
//  INTERRUPT_RESERVED      =   5,
//  INTERRUPT_RESERVED      =   6,
//  INTERRUPT_RESERVED      =   7,
//  INTERRUPT_RESERVED      =   8,
//  INTERRUPT_RESERVED      =   9,
//  INTERRUPT_RESERVED      =  10,
//  INTERRUPT_RESERVED      =  11,
//  INTERRUPT_RESERVED      =  12,
//  INTERRUPT_RESERVED      =  13,
//  INTERRUPT_RESERVED      =  14,
//  INTERRUPT_RESERVED      =  15,
//  INTERRUPT_RESERVED      =  16,
//  INTERRUPT_RESERVED      =  17,
//  INTERRUPT_RESERVED      =  18,
//  INTERRUPT_RESERVED      =  19,
//  INTERRUPT_RESERVED      =  20,
//  INTERRUPT_RESERVED      =  21,
//  INTERRUPT_RESERVED      =  22,
//  INTERRUPT_RESERVED      =  23,
//  INTERRUPT_RESERVED      =  24,
//  INTERRUPT_RESERVED      =  25,
//  INTERRUPT_RESERVED      =  26,
    INTERRUPT_GLOBAL_TIMER  =  27,
//  INTERRUPT_RESERVED      =  28,
//  INTERRUPT_PRIV_TIMER    =  29,
//  INTERRUPT_RESERVED      =  30,
//  INTERRUPT_RESERVED      =  31,
    INTERRUPT_IOMUXC        =  32,
    INTERRUPT_DAP           =  33,
    INTERRUPT_SDMA          =  34,
    INTERRUPT_VPU_JPEG      =  35,
    INTERRUPT_SNVS_PMIC_OFF =  36,
    INTERRUPT_IPU           =  37,
    INTERRUPT_IPU1          =  38,
    INTERRUPT_IPU2_ERROR    =  39,
    INTERRUPT_IPU2_SYNC     =  40,
    INTERRUPT_GPU3D         =  41,
    INTERRUPT_R2D           =  42,
    INTERRUPT_V2D           =  43,
    INTERRUPT_VPU           =  44,
    INTERRUPT_APBHBRIDGEDMA =  45,
    INTERRUPT_EIM           =  46,
    INTERRUPT_BCH           =  47,
    INTERRUPT_GPMI          =  48,
    INTERRUPT_DTCP          =  49,
    INTERRUPT_VDOA          =  50,
    INTERRUPT_SNVS          =  51,
    INTERRUPT_SNVS_SECURITY =  52,
    INTERRUPT_CSU           =  53,
    INTERRUPT_USDHC1        =  54,
    INTERRUPT_USDHC2        =  55,
    INTERRUPT_USDHC3        =  56,
    INTERRUPT_USDHC4        =  57,
    INTERRUPT_UART1         =  58,
    INTERRUPT_UART2         =  59,
    INTERRUPT_UART3         =  60,
    INTERRUPT_UART4         =  61,
    INTERRUPT_UART5         =  62,
    INTERRUPT_ECSPI1        =  63,
    INTERRUPT_ECSPI2        =  64,
    INTERRUPT_ECSPI3        =  65,
    INTERRUPT_ECSPI4        =  66,
    INTERRUPT_ECSPI5        =  67,
    INTERRUPT_I2C1          =  68,
    INTERRUPT_I2C2          =  69,
    INTERRUPT_I2C3          =  70,
    INTERRUPT_SATA          =  71,
    INTERRUPT_USB1          =  72,
    INTERRUPT_USB2          =  73,
    INTERRUPT_USB3          =  74,
    INTERRUPT_USB_OTG       =  75,
    INTERRUPT_USB_PHY_UTMI0 =  76,
    INTERRUPT_USB_PHY_UTMI1 =  77,
    INTERRUPT_SSI1          =  78,
    INTERRUPT_SSI2          =  79,
    INTERRUPT_SSI3          =  80,
    INTERRUPT_TEMPRATURE    =  81,
    INTERRUPT_ASRC          =  82,
    INTERRUPT_ESAI          =  83,
    INTERRUPT_SPDIF         =  84,
    INTERRUPT_MLB150_ERROR  =  85,
    INTERRUPT_ANALOGUE_PMU  =  86,
    INTERRUPT_GPT           =  87,
    INTERRUPT_EPIT1         =  88,
    INTERRUPT_EPIT2         =  89,
    INTERRUPT_GPIO1_INT7    =  90,
    INTERRUPT_GPIO1_INT6    =  91,
    INTERRUPT_GPIO1_INT5    =  92,
    INTERRUPT_GPIO1_INT4    =  93,
    INTERRUPT_GPIO1_INT3    =  94,
    INTERRUPT_GPIO1_INT2    =  95,
    INTERRUPT_GPIO1_INT1    =  96,
    INTERRUPT_GPIO1_INT0    =  97,
    INTERRUPT_GPIO1L        =  98,
    INTERRUPT_GPIO1H        =  99,
    INTERRUPT_GPIO2L        = 100,
    INTERRUPT_GPIO2H        = 101,
    INTERRUPT_GPIO3L        = 102,
    INTERRUPT_GPIO3H        = 103,
    INTERRUPT_GPIO4L        = 104,
    INTERRUPT_GPIO4H        = 105,
    INTERRUPT_GPIO5L        = 106,
    INTERRUPT_GPIO5H        = 107,
    INTERRUPT_GPIO6L        = 108,
    INTERRUPT_GPIO6H        = 109,
    INTERRUPT_GPIO7L        = 110,
    INTERRUPT_GPIO7H        = 111,
    INTERRUPT_WDOG1         = 112,
    INTERRUPT_WDOG2         = 113,
    INTERRUPT_KPP           = 114,
    INTERRUPT_PWM1          = 115,
    INTERRUPT_PWM2          = 116,
    INTERRUPT_PWM3          = 117,
    INTERRUPT_PWM4          = 118,
    INTERRUPT_CCM1          = 119,
    INTERRUPT_CCM2          = 120,
    INTERRUPT_GPC           = 121,
//  INTERRUPT_RESERVED      = 122,
    INTERRUPT_SRC           = 123,
    INTERRUPT_CPU_L2        = 124,
    INTERRUPT_CPU_PARITY    = 125,
    INTERRUPT_CPU_PU        = 126,
    INTERRUPT_CPU_CTI       = 127,
    INTERRUPT_SRC_WDOG      = 128,
//  INTERRUPT_RESERVED      = 129,
//  INTERRUPT_RESERVED      = 130,
//  INTERRUPT_RESERVED      = 131,
    INTERRUPT_MIPI_CSI1     = 132,
    INTERRUPT_MIPI_CSI2     = 133,
    INTERRUPT_MIPI_DSI      = 134,
    INTERRUPT_MIPI_HSI      = 135,
    INTERRUPT_SJC           = 136,
    INTERRUPT_CAAM0         = 137,
    INTERRUPT_CAAM1         = 138,
//  INTERRUPT_RESERVED      = 139,
    INTERRUPT_ASC1          = 140,
    INTERRUPT_ASC2          = 141,
    INTERRUPT_FLEXCAN1      = 142,
    INTERRUPT_FLEXCAN2      = 143,
//  INTERRUPT_RESERVED      = 144,
//  INTERRUPT_RESERVED      = 145,
//  INTERRUPT_RESERVED      = 146,
    INTERRUPT_HDMI          = 147,
    INTERRUPT_HDMI_CEC      = 148,
    INTERRUPT_MLB150        = 149,
    INTERRUPT_ENET          = 150,
    INTERRUPT_ENET_TIMER    = 151,
    INTERRUPT_PCIE1         = 152,
    INTERRUPT_PCIE2         = 153,
    INTERRUPT_PCIE3         = 154,
    INTERRUPT_PCIE4         = 155,
    INTERRUPT_DCIC1         = 156,
    INTERRUPT_DCIC2         = 157,
    INTERRUPT_MLB150_LOR    = 158,
    INTERRUPT_DIGITAL_PMU   = 159,
    maxIRQ = 159
} platform_interrupt_t;

#define KERNEL_TIMER_IRQ INTERRUPT_GLOBAL_TIMER

enum irqNumbers {
    irqInvalid = (irq_t) - 1
};

#endif /* !__PLAT_MACHINE_H */
