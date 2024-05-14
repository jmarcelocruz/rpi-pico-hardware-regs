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

#ifndef HW_REGS_XOSC_H
#define HW_REGS_XOSC_H

#include <types.h>

#define XOSC_HW ((struct xosc_hw *)0x40024000)

struct xosc_hw {
    rw32_t ctrl;
    rw32_t status;
    rw32_t dormant;
    rw32_t startup;
    rw32_t count;
};

#endif
