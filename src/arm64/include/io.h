#pragma once

#define close_interrupt __asm__ volatile("msr daifset, #2" ::: "memory")
#define open_interrupt  __asm__ volatile("msr daifclr, #2" ::: "memory")


