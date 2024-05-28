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

#ifndef HW_REGS_PADS_BANK0_H
#define HW_REGS_PADS_BANK0_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define PADS_BANK0_HW ((struct pads_bank0_hw *)0x4001c000)

struct pads_bank0_hw {
    rw32_t voltage_select;
    rw32_t io[29];
    rw32_t swclk;
    rw32_t swd;
};

#ifdef __cplusplus
}
#endif

#endif
