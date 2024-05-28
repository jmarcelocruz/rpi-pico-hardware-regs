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

#ifndef HW_REGS_SCB_H
#define HW_REGS_SCB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define SCB_HW ((struct scb_hw *)0xe000ed00)

struct scb_hw {
    ro32_t cpuid;
    rw32_t icsr;
    rw32_t vtor;
    rw32_t aircr;
    rw32_t scr;
    ro32_t ccr;
    uint32_t _pad0; /* undefined in datasheet */
    rw32_t shpr2;
    rw32_t shpr3;
    rw32_t shcsr;
};

#ifdef __cplusplus
}
#endif

#endif
