#ifndef HW_REGS_SCB_H
#define HW_REGS_SCB_H

#include <types.h>

#define SCB_HW ((struct scb_hw *)0xe000ed00)

struct scb_hw {
    ro32_t cpuid;
    rw32_t icsr;
    rw32_t vtor;
    rw32_t aircr;
    rw32_t scr;
    ro32_t ccr;
    uint32_t _pad0; /* undefined in datasheet */
    rw32_t shpr2;
    rw32_t shpr3;
    rw32_t shcsr;
};

#endif
