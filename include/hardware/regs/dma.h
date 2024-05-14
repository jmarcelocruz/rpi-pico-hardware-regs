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

#ifndef HW_REGS_DMA_H
#define HW_REGS_DMA_H

#include <types.h>

#define DMA_HW ((struct dma_hw *)0x50000000)

struct dma_channel_hw {
    rw32_t read_addr;
    rw32_t write_addr;
    rw32_t trans_count;
    rw32_t al1_ctrl;
    rw32_t al1_read_addr;
    rw32_t al1_write_addr;
    rw32_t al1_trans_count_trig;
    rw32_t al2_ctrl;
    rw32_t al2_trans_count;
    rw32_t al2_read_addr;
    rw32_t al2_write_addr_trig;
    rw32_t al3_ctrl;
    rw32_t al3_write_addr;
    rw32_t al3_trans_count;
    rw32_t al3_read_addr_trig;
};

struct dma_channel_dbg_hw {
    rw32_t ctdreq;
    ro32_t tcr;
    uint32_t _pad0[13]; /* undefined in datasheet */
};

struct dma_hw {
    struct dma_channel_hw channel[12];
    uint32_t _pad0[64]; /* undefined in datasheet */
    rw32_t intr;
    rw32_t inte0;
    rw32_t intf0;
    rw32_t ints0;
    uint32_t _pad1; /* undefined in datasheet */
    rw32_t inte1;
    rw32_t intf1;
    rw32_t ints1;
    rw32_t timer[4];
    wo32_t multi_chan_trigger;
    rw32_t sniff_ctrl;
    rw32_t sniff_data;
    uint32_t _pad2; /* undefined in datasheet */
    ro32_t fifo_levels;
    rw32_t chan_abort;
    ro32_t n_channels;
    uint32_t _pad3[237]; /* undefined in datasheet */
    struct dma_channel_dbg_hw channel_dbg[12];
};

#endif
