#ifndef HW_REGS_XOSC_H
#define HW_REGS_XOSC_H

#include <types.h>

#define XOSC_HW ((struct xosc_hw *)0x40024000)

struct xosc_hw {
    rw32_t ctrl;
    rw32_t status;
    rw32_t dormant;
    rw32_t startup;
    rw32_t count;
};

#endif
