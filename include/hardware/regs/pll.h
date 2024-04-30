#ifndef HW_REGS_PLL_H
#define HW_REGS_PLL_H

#include <types.h>

#define PLL_SYS_HW ((struct pll_hw *)0x40028000)
#define PLL_USB_HW ((struct pll_hw *)0x4002c000)

struct pll_hw {
    rw32_t cs;
    rw32_t pwr;
    rw32_t fbdiv_int;
    rw32_t prim;
};

#endif
