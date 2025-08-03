#ifndef _LJW_CHDRS_ANY_H_

#define _LJW_CHDRS_ANY_H_

#include <stdbool.h>
#include <stdint.h>

typedef union {
    uint8_t to_u8;
    uint16_t to_u16;
    uint32_t to_u32;
    uint64_t to_u64;
    int8_t to_i8;
    int16_t to_i16;
    int32_t to_i32;
    int64_t to_i64;
    void* to_ptr;
}Any;

#endif