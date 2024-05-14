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

#ifndef HW_REGS_USB_H
#define HW_REGS_USB_H

#include <types.h>

#define USB_HW ((struct usb_hw *)0x50110000)

struct usb_hw {
    rw32_t addr_endp;
    rw32_t addr_endp_int[16];
    wo32_t sof_wr;
    ro32_t sof_rd;
    rw32_t sie_ctrl;
    rw32_t sie_status;
    rw32_t int_ep_ctrl;
    rw32_t buff_status;
    ro32_t buff_cpu_should_handle;
    rw32_t ep_abort;
    rw32_t ep_abort_done;
    rw32_t ep_stall_arm;
    rw32_t nak_poll;
    rw32_t ep_status_stall_nak;
    rw32_t usb_muxing;
    rw32_t usb_pwr;
    rw32_t usbphy_direct;
    rw32_t usbphy_direct_override;
    rw32_t usbphy_trim;
    uint32_t _pad0; /* undefined in datasheet */
    rw32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#endif
