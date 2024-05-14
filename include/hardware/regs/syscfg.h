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

#ifndef HW_REGS_SYSCFG_H
#define HW_REGS_SYSCFG_H

#include <types.h>

#define SYSCFG_HW ((struct syscfg_hw *)0x40004000)

struct syscfg_hw {
    rw32_t proc_nmi_mask[2];
    rw32_t proc_config;
    rw32_t proc_in_sync_bypass;
    rw32_t proc_in_sync_bypass_hi;
    rw32_t dbgforce;
    rw32_t mempowerdown;
};

#endif
