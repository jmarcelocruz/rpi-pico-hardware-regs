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

#ifndef HW_REGS_PADS_QSPI_H
#define HW_REGS_PADS_QSPI_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define PADS_QSPI_HW ((struct pads_qspi_hw *)0x40020000)

struct pads_qspi_hw {
    rw32_t voltage_select;
    rw32_t sclk;
    rw32_t sd[4];
    rw32_t ss;
};

#ifdef __cplusplus
}
#endif

#endif
