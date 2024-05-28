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

#ifndef HW_REGS_TIMER_H
#define HW_REGS_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define TIMER_HW ((struct timer_hw *)0x40054000)

struct timer_hw {
    wo32_t timehw;
    wo32_t timelw;
    ro32_t timehr;
    ro32_t timelr;
    rw32_t alarm[4];
    rw32_t armed;
    ro32_t timerawh;
    ro32_t timerawl;
    rw32_t dbgpause;
    rw32_t pause;
    rw32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#ifdef __cplusplus
}
#endif

#endif
