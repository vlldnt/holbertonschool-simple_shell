#include "shell.h"

/**
 * main - main function for the simple shell
 * Return: 0
 */

int main(void)
{
        char *input, *input_copy, *executable_path;
        char **test;
        int i;

        /* Set up signal handler for SIGINT CTRL+C */
        signal(SIGINT, handle_sigint);

        while (1) /* Infinite loop (wait for EOF) */
        {
                prompt(); /* Display prompt */

                input = read_input(); /* read the input written */
                if (input == NULL)
                        break;
                printf("Test read_input:\nCommand written : %s\n", input);

                input_copy = strdup(input);
                if (!input_copy)
                {
                        free(input);
                        return (1);
                }

                test = split_string(input_copy);
                if (!test)
                {
                        free(test);
                        return (1);
                }

                /* Test the executable path */
                executable_path = find_executable(test[0]);
                if (executable_path)
                {
                        printf("Test find_executable:\nExecutable found at: %s\n\n", executable_path);
                        free(executable_path);
                }
                else
                {
                        printf("Test find_executable:\nExecutable not found\n\n");
                }

                for (i = 0; test[i] != NULL; i++)
                {
                        if (i == 0)
                                printf("Test split_string:\nCommand : %s\n", test[0]);
                        else
                                printf("argument[%d] : %s\n", i, test[i]);
                }
                free(test);
                free(input_copy);
                free(input);
        }

        return (0);
}

