#ifndef HW_REGS_SPI_H
#define HW_REGS_SPI_H

#include <types.h>

#define SPI0_HW ((struct spi_hw *)0x4003c000)
#define SPI1_HW ((struct spi_hw *)0x40040000)

struct spi_hw {
    rw32_t sspcr[2];
    rw32_t sspdr;
    ro32_t sspsr;
    rw32_t sspcpsr;
    rw32_t sspimsc;
    ro32_t sspris;
    ro32_t sspmis;
    wo32_t sspicr;
    rw32_t sspdmacr;
    uint32_t _pad0[1006]; /* undefined in datasheet */
    ro32_t sspperiphid[4];
    ro32_t ssppcellid[4];
};

#endif
