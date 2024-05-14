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

#ifndef HW_REGS_I2C_H
#define HW_REGS_I2C_H

#include <types.h>

#define I2C0_HW ((struct i2c_hw *)0x40044000)
#define I2C1_HW ((struct i2c_hw *)0x40048000)

struct i2c_hw {
    rw32_t ic_con;
    rw32_t ic_tar;
    rw32_t ic_sar;
    uint32_t _pad0; /* undefined in datasheet */
    rw32_t ic_data_cmd;
    rw32_t ic_ss_scl_hcnt;
    rw32_t ic_ss_scl_lcnt;
    rw32_t ic_fs_scl_hcnt;
    rw32_t ic_fs_scl_lcnt;
    uint32_t _pad1[2]; /* undefined in datasheet */
    ro32_t ic_intr_stat;
    rw32_t ic_intr_mask;
    ro32_t ic_raw_intr_stat;
    rw32_t ic_rx_tl;
    rw32_t ic_tx_tl;
    ro32_t ic_clr_intr;
    ro32_t ic_clr_rx_under;
    ro32_t ic_clr_rx_over;
    ro32_t ic_clr_tx_over;
    ro32_t ic_clr_rd_req;
    ro32_t ic_clr_tx_abrt;
    ro32_t ic_clr_rx_done;
    ro32_t ic_clr_activity;
    ro32_t ic_clr_stop_det;
    ro32_t ic_clr_start_det;
    ro32_t ic_clr_gen_call;
    rw32_t ic_enable;
    ro32_t ic_status;
    ro32_t ic_txflr;
    ro32_t ic_rxflr;
    rw32_t ic_sda_hold;
    ro32_t ic_tx_abrt_source;
    rw32_t ic_slv_data_nack_only;
    rw32_t ic_dma_cr;
    rw32_t ic_dma_tdlr;
    rw32_t ic_dma_rdlr;
    rw32_t ic_sda_setup;
    rw32_t ic_ack_general_call;
    ro32_t ic_enable_status;
    rw32_t ic_fs_spklen;
    uint32_t _pad2; /* undefined in datasheet */
    ro32_t ic_clr_restart_det;
    uint32_t _pad3[18]; /* undefined in datasheet */
    ro32_t ic_comp_param_1;
    ro32_t ic_comp_version;
    ro32_t ic_comp_type;
};

#endif
