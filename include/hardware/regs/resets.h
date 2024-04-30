#ifndef HW_REGS_RESETS_H
#define HW_REGS_RESETS_H

#include <types.h>

#define RESETS_HW ((struct resets_hw *)0x4000c000)

struct resets_hw {
    rw32_t reset;
    rw32_t wdsel;
    ro32_t reset_done;
};

#endif
