#ifndef HW_REGS_PADS_QSPI_H
#define HW_REGS_PADS_QSPI_H

#include <types.h>

#define PADS_QSPI_HW ((struct pads_qspi_hw *)0x40020000)

struct pads_qspi_hw {
    rw32_t voltage_select;
    rw32_t sclk;
    rw32_t sd[4];
    rw32_t ss;
};

#endif
