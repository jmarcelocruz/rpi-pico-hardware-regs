#ifndef HW_REGS_ROSC_H
#define HW_REGS_ROSC_H

#include <types.h>

#define ROSC_HW ((struct rosc_hw *)0x40060000)

struct rosc_hw {
    rw32_t ctrl;
    rw32_t freqa;
    rw32_t freqb;
    rw32_t dormant;
    rw32_t div;
    rw32_t phase;
    rw32_t status;
    ro32_t randombit;
    rw32_t count;
};

#endif
