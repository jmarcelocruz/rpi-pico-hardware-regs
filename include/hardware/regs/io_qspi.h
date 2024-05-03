#ifndef HW_REGS_IO_QSPI_H
#define HW_REGS_IO_QSPI_H

#include <types.h>

#define IO_QSPI_HW ((struct io_qspi_hw *)0x40018000)

struct gpio_qspi_hw {
    ro32_t status;
    rw32_t ctrl;
};

struct io_qspi_hw {
    struct gpio_qspi_hw sclk;
    struct gpio_qspi_hw ss;
    struct gpio_qspi_hw sd[4];
    rw32_t intr;
    rw32_t proc0_inte;
    rw32_t proc0_intf;
    ro32_t proc0_ints;
    rw32_t proc1_inte;
    rw32_t proc1_intf;
    ro32_t proc1_ints;
    rw32_t dormant_wake_inte;
    rw32_t dormant_wake_intf;
    ro32_t dormant_wake_ints;
};

#endif
