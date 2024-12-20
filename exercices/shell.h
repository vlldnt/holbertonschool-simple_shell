#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFF_SIZE 1024

extern char **environ;

void prompt(void);
char *read_input(void);
char **split_string(char *command);
int execute(char **args);
char *command_path(char *command);
void free_memory(char **args);

#endif
