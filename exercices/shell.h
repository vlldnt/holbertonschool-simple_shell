#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/*Get PID and get PPID */
int _pid(void);
int _ppid(void);

/*Tools functions*/
int _prompt(void);

#endif
