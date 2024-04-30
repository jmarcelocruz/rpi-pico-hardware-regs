#ifndef HW_REGS_MPU_H
#define HW_REGS_MPU_H

#include <types.h>

#define MPU_HW ((struct mpu_hw *)0xe000ed90)

struct mpu_hw {
    ro32_t type;
    rw32_t ctrl;
    rw32_t rnr;
    rw32_t rbar;
    rw32_t rasr;
};

#endif
