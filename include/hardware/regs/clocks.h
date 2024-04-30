#ifndef HW_REGS_CLOCKS_H
#define HW_REGS_CLOCKS_H

#include <types.h>

#define CLOCKS_HW ((struct clocks_hw *)0x40008000)

struct clk_hw {
    rw32_t ctrl;
    rw32_t div;
    ro32_t selected;
};

struct clk_sys_resus_hw {
    rw32_t ctrl;
    ro32_t status;
};

struct fc_hw {
    rw32_t ref_khz;
    rw32_t min_khz;
    rw32_t max_khz;
    rw32_t delay;
    rw32_t interval;
    rw32_t src;
    ro32_t status;
    ro32_t result;
};

struct clocks_hw {
    struct clk_hw gpout[4];
    struct clk_hw ref;
    struct clk_hw sys;
    struct clk_hw peri; /* beware: peri clock does not contain div register*/
    struct clk_hw usb;
    struct clk_hw adc;
    struct clk_hw rtc;
    struct clk_sys_resus_hw sys_resus;
    struct fc_hw fc0;
    rw32_t wake_en[2];
    rw32_t sleep_en[2];
    ro32_t enabled[2];
    ro32_t intr;
    rw32_t inte;
    rw32_t intf;
    ro32_t ints;
};

#endif
