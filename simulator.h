#ifndef XSM_SIMULATOR_H

#define XSM_SIMULATOR_H

#define XSM_SIMULATOR_DEFDEBUG FALSE
#define XSM_SIMULATOR_DEFCONSOLE 20
#define XSM_SIMULATOR_DEFTIMER 20
#define XSM_SIMULATOR_DEFDISK 20

int simulator_run();
int simulator_parse_args(int argc, char **argv);

#endif