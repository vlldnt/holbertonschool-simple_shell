# SIMPLE SHELL : Holberton School C#25

## Quick description :blue_book:

The Simple Shell project involves creating a basic command-line interpreter in C that mimics a Unix shell. It allows users to execute commands, handle errors, and implement features like path handling and environment variables. Builtin commands are implemented like `end` and `exit`.

## Simple Shell flowchart

Before starting coding we've made a [flowchar](https://i.goopics.net/946u64.png) helping to understand the simple shell and how to organise our work for the rest of the project

![simpleShell-flowchart](https://i.goopics.net/946u64.png)

## Requirements

Our project has been coded on Ubuntu 22.04 and gcc is version 13.2.0

*List of allowed fuctions dans systems calls :*

All the functions in `string.h`and `access`, `chdir`, `close`, `closedir`, `execve`, `exit`, `_exit`, `fflush`, `fork`, `free`, `getcwd`, `getline`, `getpid` `isatty` `kill` `malloc`, `open`, `opendir`, `perror`, `printf`, `fprintf` `vfprintf` `sprintf`, `putchar`, `read`, `readdir`, `signal`, `stat`, `lstat`, `fstat`, `strtok`, `wait`, `waitpid`, `wait3`, `wait4`, `write`

## Quick overview of the repository

| File name          | Description                                                                  |
| -----------------: |  ---------------------------------------------------------------------------- |
| [builtin.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/builtin.c) | Handle the execution of the built in "exit" and "env" |
| [execute_command.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/execute_command.c) | Execution the command received from input|
| [free_ressources.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/free_ressources.c) | Tool to free memory of an array of string |
| [get_env.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/get_env.c) | Tool to get an environment variable |
| [handle_sigint.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/handle_sigint.c) | Handle the Signal Interruption (CTRL + C)  |
| [main.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/main.c)  | Contains the main function for our simple_shell  |
| [prompt.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/prompt.c)       |  Display the prompt and checking if input is from a terminal   |
| [read_input.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/read_input.c)     | Get and return the input received by the user   |
| [AUTHORS](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/AUTHORS) | List and details on the authors of  the project |
| [man_1_simple_shell](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/man_1_simple_shell) | Man page of the simple_shell   |
| [shell.h](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/shell.h) | Header of the project  |
| [README.md](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/README.md) | Description of our project |
| [split_string.c](https://github.com/vlldnt/holbertonschool-simple_shell/blob/main/split_string.c) | Function that split a string in an array |

