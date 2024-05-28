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

#ifndef HW_REGS_ADC_H
#define HW_REGS_ADC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define ADC_HW ((struct adc_hw *)0x4004c000)

struct adc_hw {
    rw32_t cs;
    ro32_t result;
    rw32_t fcs;
    ro32_t fifo;
    rw32_t div;
    ro32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#ifdef __cplusplus
}
#endif

#endif
