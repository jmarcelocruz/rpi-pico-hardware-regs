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

#ifndef HW_REGS_PWM_H
#define HW_REGS_PWM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define PWM_HW ((struct pwm_hw *)0x40050000)

struct pwm_channel_hw {
    rw32_t csr;
    rw32_t div;
    rw32_t ctr;
    rw32_t cc;
    rw32_t top;
};

struct pwm_hw {
    struct pwm_channel_hw channel[8];
    rw32_t en;
    rw32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#ifdef __cplusplus
}
#endif

#endif
