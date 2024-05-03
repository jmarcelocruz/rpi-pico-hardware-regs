#ifndef HW_REGS_IO_BANK0_H
#define HW_REGS_IO_BANK0_H

#include <types.h>

#define IO_BANK0_HW ((struct io_bank0_hw *)0x40014000)

struct gpio_hw {
    ro32_t status;
    rw32_t ctrl;
};

struct io_bank0_hw {
    struct gpio_hw io[29];
    rw32_t intr[4];
    rw32_t proc0_inte[4];
    rw32_t proc0_intf[4];
    ro32_t proc0_ints[4];
    rw32_t proc1_inte[4];
    rw32_t proc1_intf[4];
    ro32_t proc1_ints[4];
    rw32_t dormant_wake_inte[4];
    rw32_t dormant_wake_intf[4];
    ro32_t dormant_wake_ints[4];
};

#endif
