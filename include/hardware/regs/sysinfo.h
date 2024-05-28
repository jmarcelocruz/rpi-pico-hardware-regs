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

#ifndef HW_REGS_SYSINFO_H
#define HW_REGS_SYSINFO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define SYSINFO_HW ((struct sysinfo_hw *)0x40000000)

struct sysinfo_hw {
    ro32_t chip_id;
    ro32_t platform;
    uint32_t _pad0[14]; /* undefined in datasheet */
    ro32_t gitref_rp2040;
};

#ifdef __cplusplus
}
#endif

#endif
