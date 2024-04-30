#ifndef HW_REGS_NVIC_H
#define HW_REGS_NVIC_H

#include <types.h>

#define NVIC_HW ((struct nvic_hw *)0xe000e100)

struct nvic_hw{
    rw32_t iser;
    uint32_t _pad0[31]; /* undefined in datasheet */
    rw32_t icer;
    rw32_t ispr;
    rw32_t icpr;
    rw32_t ipr[8];
};

#endif
