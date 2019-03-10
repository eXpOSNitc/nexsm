#ifndef XSM_MEMORY_H

#define XSM_MEMORY_H

#include "types.h"
#include "word.h"

#define XSM_MEMORY_SIZE (XSM_PAGE_SIZE*XSM_MEMORY_NUMPAGES)
#define XSM_MEM_NOWRITE -1
#define XSM_MEM_PAGEFAULT -2
#define XSM_MEM_ILLPAGE -3

#define INSTR_FETCH -5
#define OPER_FETCH -6
#define DEBUG_FETCH -7

#endif