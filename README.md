# SIMPLE SHELL : Holberton School C#25

## Quick description :blue_book:

The Simple Shell project involves creating a basic command-line interpreter in C that mimics a Unix shell. It allows users to execute commands, handle errors, and implement features like path handling and environment variables. Few built-in commands are implemented like `end` and `exit`.

## Simple Shell flowchart

Before starting coding we've made a [flowchar](https://i.goopics.net/946u64.png) helping to understand the simple shell and how to organise our work for the rest of the project

![simpleShell-flowchart](https://i.goopics.net/946u64.png)

## Requirements

Our project has been coded on Ubuntu 22.04 and gcc is version 13.2.0

### List of allowed fuctions dans systems calls :

All the functions in `string.h`and `access`, `chdir`, `close`, `closedir`, `execve`, `exit`, `_exit`, `fflush`, `fork`, `free`, `getcwd`, `getline`, `getpid` `isatty` `kill` `malloc`, `open`, `opendir`, `perror`, `printf`, `fprintf` `vfprintf` `sprintf`, `putchar`, `read`, `readdir`, `signal`, `stat`, `lstat`, `fstat`, `strtok`, `wait`, `waitpid`, `wait3`, `wait4`, `write`

### Compilation
The program will be compiled enabling most of the commons and optional warning options and treating them all as errors, by following strict C language rules and using the older C89 santard with some extra features specific to GCC and ignoring warnings about mismatched printf style format strings: 

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o prog``

### Some rules to follow : 
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to

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

## How to use Simple Shell 
After being comiled the program can be lauch with:
```./prog```
Once in the Simple Shell you can write every knonw in the `PATH` like `ls` `pwd` `whoami`. 

Two built-in commands are implemented which are `exit` and `env` and`Ctrl+C` and `Ctrl+D` to exit the program are usable.

Only mandatory taks has been implemented, meaning some command with attribute will not work like `ls -l *.c` cause the `*` isn't handle at the moment. It will be for future improvements.

### Examples

#### Your shell should work like this in interactive mode:
```
julien@ubuntu:/# ./prog
($) /bin/ls
prog main.c shell.c
($)
($) exit
julien@ubuntu:/#
```
#### But also in non-interactive mode:
```
julien@ubuntu:/# echo "/bin/ls" | ./prog
prog main.c shell.c test_ls_2
julien@ubuntu:/# cat test_ls_2
/bin/ls
/bin/ls
julien@ubuntu:/# cat test_ls_2 | ./prog
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
julien@ubuntu:/#
```
### `CTRL+C` (interrupt signal) and `CTRL+D` (End-of-File) 

```
julien@ubuntu:~/shell$ ./prog
$ ^C
$ ^C
$ ^C
$ ls /var
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  snap  spool  tmp
$ ^C
$ ^C
$ ^C
--> Here `CTRL+D` <---
julien@ubuntu:~/shell$ 
```
## MANUAL PAGE SIMPLE SHELL

[ManPage]!(https://i.goopics.net/wubirh.png)
## Future features

- Modify exit built-in to accept status argument
- Implement `setenv`, `unsetenv`, `cd`, `alias`, `help` and `history`  built-ins
- Handle command separator `;`n and logical operators `&&` and `||`
- Handle variable replacement (`$?`, `$$`)
- Handle file input for shell commands


## Authors

* Vieilledent Adrien [@vlldnt](https://github.com/vlldnt)
* Bailly Hugo [@hugo-b-fx](https://github.com/hugo-b-fx)