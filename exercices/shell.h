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

int main(void);
void prompt(void);
char *read_input(void);
void handle_sigint(int signal);
char **split_string(char *command);
char *find_executable(char *command);

#endif
