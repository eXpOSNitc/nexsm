#ifndef XSM_DEBUG_H

#define XSM_DEBUG_H

#include "machine.h"
#include "memory.h"

#define OFF FALSE
#define ON TRUE

#define DEBUG_COMMAND_LEN 100
#define DEBUG_STRING_LEN 100

#define DEBUG_STEP 0
#define DEBUG_CONTINUE 1
#define DEBUG_REG 2
#define DEBUG_MEM 3
#define DEBUG_PCB 4
#define DEBUG_PAGETABLE 5
#define DEBUG_FILETABLE 6
#define DEBUG_MEMFREELIST 7
#define DEBUG_DISKFREELIST 8
#define DEBUG_INODETABLE 9
#define DEBUG_USERTABLE 10
#define DEBUG_LOCATION 11
#define DEBUG_WATCH 12
#define DEBUG_WATCHCLEAR 13
#define DEBUG_EXIT 14
#define DEBUG_HELP 15
#define DEBUG_LIST 16
#define DEBUG_VAL 17
#define DEBUG_SEMTABLE 18
#define DEBUG_FILESTATUS 19
#define DEBUG_DISKSTATUS 20
#define DEBUG_SYSTEMSTATUS 21
#define DEBUG_TERMINALSTATUS 22
#define DEBUG_BUFFERTABLE 23
#define DEBUG_DISKMAPTABLE 24
#define DEBUG_ROOTFILE 25
#define DEBUG_RESOURCETABLE 26
#define DEBUG_PAGE 27
#define DEBUG_COUNT 27

#define DEBUG_LOC_PT 28672
#define MAX_PROC_NUM 16
#define PT_ENTRY_SIZE 16
#define DEBUG_PROC_RUNNING 2
#define MAX_NUM_PAGES 10
#define PTBR_PCB_OFFSET 14
#define DEBUG_PT_BASE 29696
#define RESOURCE_OFFSET 496
#define DEBUG_LIST_LEN 10

#define DEBUG_LOC_FILETABLE 28928
#define DEBUG_LOC_SEMTABLE 29056
#define DEBUG_LOC_FILESTATUS 29312
#define DEBUG_LOC_DISKSTATUS 29552
#define DEBUG_LOC_SYSTEMSTATUS 29560
#define DEBUG_LOC_TERMINALSTATUS 29568
#define DEBUG_LOC_BUFFERTABLE 30016
#define DEBUG_LOC_DISKMAPTABLE 30032
#define DEBUG_LOC_ROOTFILE 31744
#define DEBUG_LOC_MFL 29184
#define DEBUG_LOC_DFL 31232
#define DEBUG_LOC_INODE 30208
#define DEBUG_LOC_USERTABLE 31168

#define MAX_OPENFILE_NUM 32
#define MAX_FILE_NUM 60
#define MAX_USER_NUM 16
#define MAX_SEM_COUNT 32
#define MAX_MEM_PAGE 128
#define MAX_BUFFER 4
#define MAX_RESOURCE 8

#define DISK_SIZE 512
#define MEM_SIZE 128
#define PAGE_SIZE 512

#define DEBUG_MAX_WP 16
#define DEBUG_ERROR -1

struct
    _xsm_cpu;

typedef struct _xsm_cpu
    xsm_cpu;

typedef struct _debug_status
{
    int state;
    int prev_ip, ip;
    int skip;
    int skip_command;
    int wp[16];
    int wp_size;
    char command[DEBUG_COMMAND_LEN];
} debug_status;

#endif