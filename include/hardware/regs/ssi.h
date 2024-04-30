#ifndef HW_REGS_SSI_H
#define HW_REGS_SSI_H

#include <types.h>

#define SSI_HW ((struct ssi_hw *)0x18000000)

struct ssi_hw {
    rw32_t ctrlr[2];
    rw32_t ssienr;
    rw32_t mwcr;
    rw32_t ser;
    rw32_t baudr;
    rw32_t txftlr;
    rw32_t rxftlr;
    ro32_t txflr;
    ro32_t rxflr;
    ro32_t sr;
    rw32_t imr;
    ro32_t isr;
    ro32_t risr;
    ro32_t txoicr;
    ro32_t rxoicr;
    ro32_t rxuicr;
    ro32_t msticr;
    ro32_t icr;
    rw32_t dmacr;
    rw32_t dmatdlr;
    rw32_t dmardlr;
    ro32_t idr;
    ro32_t ssi_version_id;
    rw32_t dr[36];
    rw32_t rx_sample_dly;
    rw32_t spi_ctrlr0;
    rw32_t txd_drive_edge;
};

#endif
