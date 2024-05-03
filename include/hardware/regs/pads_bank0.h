#ifndef HW_REGS_PADS_BANK0_H
#define HW_REGS_PADS_BANK0_H

#include <types.h>

#define PADS_BANK0_HW ((struct pads_bank0_hw *)0x4001c000)

struct pads_bank0_hw {
    rw32_t voltage_select;
    rw32_t io[29];
    rw32_t swclk;
    rw32_t swd;
};

#endif
