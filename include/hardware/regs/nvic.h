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

#ifndef HW_REGS_NVIC_H
#define HW_REGS_NVIC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define NVIC_HW ((struct nvic_hw *)0xe000e100)

struct nvic_hw{
    rw32_t iser;
    uint32_t _pad0[31]; /* undefined in datasheet */
    rw32_t icer;
    rw32_t ispr;
    rw32_t icpr;
    rw32_t ipr[8];
};

#ifdef __cplusplus
}
#endif

#endif
