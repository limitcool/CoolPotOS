#pragma once

/**
 * 定义CP_Kernel内核的各种属性
 */
#define KERNEL_NAME       "CP_Kernel-arm64-0.0.1"  // 内核编号
#define MAX_CPU           256                      // 最大支持CPU核心数 256
#define KERNEL_HEAP_START 0x3c0f000                // 内核堆起始地址(未加偏移)
#define KERNEL_HEAP_SIZE  0x800000                 // 内核堆大小 8MB
#define STACK_SIZE        32768                    // 栈大小(byte)
#define KERNEL_ST_SZ      131072                   // 增强栈大小 128k
#define MAX_WAIT_INDEX    1000000                  // 阻塞最大循环数


