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

#ifndef HW_REGS_RTC_H
#define HW_REGS_RTC_H

#include <types.h>

#define RTC_HW ((struct rtc_hw *)0x4005c000)

struct rtc_hw {
    rw32_t clkdiv_m1;
    rw32_t setup_0;
    rw32_t setup_1;
    rw32_t ctrl;
    rw32_t irq_setup_0;
    rw32_t irq_setup_1;
    ro32_t rtc_1;
    ro32_t rtc_0;
    ro32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#endif
