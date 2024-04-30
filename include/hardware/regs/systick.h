#ifndef HW_REGS_SYSTICK_HW
#define HW_REGS_SYSTICK_HW

#include <types.h>

#define SYSTICK_HW ((struct systick_hw *)0xe000e010)

struct systick_hw {
    rw32_t csr;
    rw32_t rvr;
    rw32_t cvr;
    ro32_t calib;
};

#endif
