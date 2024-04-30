#ifndef HW_REGS_WATCHDOG_H
#define HW_REGS_WATCHDOG_H

#include <types.h>

#define WATCHDOG_HW ((struct watchdog_hw *)0x40058000)

struct watchdog_hw {
    rw32_t ctrl;
    wo32_t load;
    ro32_t reason;
    rw32_t scratch[8];
    rw32_t tick;
};

#endif
