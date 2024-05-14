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

#ifndef HW_REGS_WATCHDOG_H
#define HW_REGS_WATCHDOG_H

#include <types.h>

#define WATCHDOG_HW ((struct watchdog_hw *)0x40058000)

struct watchdog_hw {
    rw32_t ctrl;
    wo32_t load;
    ro32_t reason;
    rw32_t scratch[8];
    rw32_t tick;
};

#endif
