#ifndef _LJW_CHDRS_RESULT_H_

#define _LJW_CHDRS_RESULT_H_

#include "any.h"

typedef struct {
    int ec;
    unsigned int line;
    const char* message;
    const char* file;
    const char* function;
}Error;

#define ERROR(msg, ec) (Error) {.ec = ec, .message = msg, .line = __LINE__, .file = __FILE__, .function = __func__}

typedef struct {
    bool has_value;
    union {
        Error error;
        Any data;
    }result;
}Result;

#define RESULT_SUC(dt, d) (Result) {.has_value = true, .result = {.data = {.to_##dt = d}}}
#define RESULT_FAIL(msg, ec) (Result) {.has_value = false, .result = {.error = ERROR(msg, ec)}}

#endif