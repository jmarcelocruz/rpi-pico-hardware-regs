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

#ifndef HW_REGS_UART_H
#define HW_REGS_UART_H

#include <types.h>

#define UART0_HW ((struct uart_hw *)0x40034000)
#define UART0_HW ((struct uart_hw *)0x40038000)

struct uart_hw {
    rw32_t uartdr;
    wo32_t uartrsr;
    uint32_t _pad0[4]; /* undefined in datasheet */
    ro32_t uartfr;
    uint32_t _pad1; /* undefined in datasheet */
    rw32_t uartilpr;
    rw32_t uartibrd;
    rw32_t uartfbrd;
    rw32_t uartlcr_h;
    rw32_t uartcr;
    rw32_t uartifls;
    rw32_t uartimsc;
    ro32_t uartris;
    ro32_t uartmis;
    wo32_t uarticr;
    rw32_t uartdmacr;
    uint32_t _pad2[997]; /* undefined in datasheet */
    ro32_t uartperiphid[4];
    ro32_t uartpcellid[4];
};

#endif
