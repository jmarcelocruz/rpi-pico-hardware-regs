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

#ifndef HW_REGS_IO_QSPI_H
#define HW_REGS_IO_QSPI_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define IO_QSPI_HW ((struct io_qspi_hw *)0x40018000)

struct gpio_qspi_hw {
    ro32_t status;
    rw32_t ctrl;
};

struct io_qspi_hw {
    struct gpio_qspi_hw sclk;
    struct gpio_qspi_hw ss;
    struct gpio_qspi_hw sd[4];
    rw32_t intr;
    rw32_t proc0_inte;
    rw32_t proc0_intf;
    ro32_t proc0_ints;
    rw32_t proc1_inte;
    rw32_t proc1_intf;
    ro32_t proc1_ints;
    rw32_t dormant_wake_inte;
    rw32_t dormant_wake_intf;
    ro32_t dormant_wake_ints;
};

#ifdef __cplusplus
}
#endif

#endif
