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

#ifndef HW_REGS_PLL_H
#define HW_REGS_PLL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define PLL_SYS_HW ((struct pll_hw *)0x40028000)
#define PLL_USB_HW ((struct pll_hw *)0x4002c000)

struct pll_hw {
    rw32_t cs;
    rw32_t pwr;
    rw32_t fbdiv_int;
    rw32_t prim;
};

#ifdef __cplusplus
}
#endif

#endif
