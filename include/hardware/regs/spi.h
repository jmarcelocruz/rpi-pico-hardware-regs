/*
 * Copyright 2024 José Marcelo Marques da Cruz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#ifndef HW_REGS_SPI_H
#define HW_REGS_SPI_H

#ifdef __cplusplus
extern "C" {
#endif

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

#ifdef __cplusplus
}
#endif

#endif
