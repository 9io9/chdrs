#ifndef _LJW_CHDRS_FN_H_

#define _LJW_CHDRS_FN_H_

typedef enum {
    left, right, equal
}order;

typedef void (*CopyFn) (void* /* dest */, void* /* src */); // copy content from arg 2 to arg 1
typedef order (*CmpFn) (void* /* data in node */, void* /* data out of node */); // if data out of node less than data in node, return left, otherwise return right 
typedef void (*VisFn) (void* /* data in node */);
typedef void (*SwapFn) (void* /* a */, void* /* b */);

#endif