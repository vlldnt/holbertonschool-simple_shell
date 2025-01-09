# SIMPLE SHELL : Holberton School C#25

## Quick description :blue_book:

The Simple Shell project involves creating a basic command-line interpreter in C that mimics a Unix shell. It allows users to execute commands, handle errors, and implement features like path handling and environment variables.


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

## Simple Shell flowchart

Before starting coding we've made a basic flowchar helping to understand the simple shell and how to organise our work for the rest of the project

<img align="center" src="https://i.ibb.co/gjmH5K0/Simple-Shell-Flow-Shart.png" alt="Flowchart">