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

#ifndef HW_REGS_VREG_H
#define HW_REGS_VREG_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define VREG_HW ((struct vreg_hw *)0x40064000)


struct vreg_hw {
    rw32_t vreg;
    rw32_t bod;
    rw32_t chip_reset;
};

#ifdef __cplusplus
}
#endif

#endif
