#ifndef XSM_EXCEPTION_H

#define XSM_EXCEPTION_H

#include "types.h"

#define EXP_PAGEFAULT 0
#define EXP_ILLINSTR 1
#define EXP_ILLMEM 2
#define EXP_ARITH 3

typedef struct _xsm_exception
{
    char *message;
    int type;
    int mode;
    int ma;
    int epn;
} xsm_exception;

#endif