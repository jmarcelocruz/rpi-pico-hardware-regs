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

#ifndef HW_REGS_PIO_H
#define HW_REGS_PIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#define PIO0_HW ((struct pio_hw *)0x50200000)
#define PIO1_HW ((struct pio_hw *)0x50300000)

struct pio_hw {
    rw32_t ctrl;
    ro32_t fstat;
    rw32_t fdebug;
    ro32_t flevel;
    wo32_t txf[4];
    ro32_t rxf[4];
    rw32_t irq;
    rw32_t irq_force;
    rw32_t input_sync_bypass;
    ro32_t dbg_padout;
    ro32_t dgb_padoe;
    ro32_t dbg_cfginfo;
    wo32_t instr_mem[32];
    rw32_t sm_clkdiv[4];
    rw32_t sm_execctrl[4];
    rw32_t sm_shiftctrl[4];
    ro32_t sm_addr[4];
    rw32_t sm_pinctrl[4];
    ro32_t intr;
    rw32_t irq0_inte;
    rw32_t irq0_intf;
    ro32_t irq0_ints;
    rw32_t irq1_inte;
    rw32_t irq1_intf;
    ro32_t irq1_ints;
};

#ifdef __cplusplus
}
#endif

#endif
