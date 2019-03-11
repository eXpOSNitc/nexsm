#ifndef XSM_MACHINE_H

#define XSM_MACHINE_H

#include <setjmp.h>

#include "types.h"
#include "registers.h"
#include "memory.h"
#include "disk.h"
#include "exception.h"
#include "debug.h"

#define XSM_ADDR_DREF 0
#define XSM_ADDR_NODREF 1

#define PRIVILEGE_USER 0
#define PRIVILEGE_KERNEL 1

#define XSM_EXCEPTION_OCCURED -1

/* Operation codes. */
#define MOV 0
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4
#define MOD 5
#define INR 6
#define DCR 7
#define LT 8
#define GT 9
#define EQ 10
#define NE 11
#define GE 12
#define LE 13
#define JZ 14
#define JNZ 15
#define JMP 16
#define PUSH 17
#define POP 18
#define CALL 19
#define RET 20
#define BRKP 21
#define INT 22

#define LOADI 23
#define LOAD 24
#define STORE 25
#define ENCRYPT 26
#define BACKUP 27
#define RESTORE 28
#define PORT 29
#define IN 30
#define INI 31
#define OUT 32
#define IRET 33
#define HALT 34
#define NOP 35

/* Between these values are the privileged instructions. */
#define TOKEN_KERN_LOW 23
#define TOKEN_KERN_HIGH 34

#define XSM_INSTRUCTION_COUNT 36

#define XSM_DISKOP_LOAD 0
#define XSM_DISKOP_STORE 1

#define XSM_CONSOLE_PRINT 0
#define XSM_CONSOLE_READ 1

//#define XSM_INTERRUPT_EXHANDLER 0

//#define XSM_HALT 1654

typedef struct _disk_operation
{
    int src_block;
    int dest_page;
    int operation;
} disk_operation;

typedef struct _console_operation
{
    xsm_word word;
    int operation;
} console_operation;

typedef struct _xsm_cpu
{
    xsm_reg *regs;
    int timer;
    int mode;
    int disk_state, disk_wait;
    int console_state, console_wait;

    int mem_low, mem_high;

    disk_operation disk_op;
    console_operation console_op;

    /* Exception point */
    jmp_buf h_exp_point;
} xsm_cpu;

typedef struct _xsm_options
{
    int timer;
    int debug;
    int disk;
    int console;
} xsm_options;

#endif