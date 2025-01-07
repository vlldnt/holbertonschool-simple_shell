#include "shell.h"

/**
 * main - main fucntion to launch our simple shell
 * Return: 0 at the end
 */

int main(void)
{
	char *input, **args;
	int len;

	signal(SIGINT, handle_sigint);

	while (1)
	{
		if (isatty(STDIN_FILENO))
			prompt();

		input = read_input();
		if (!input)
			break;

		len = strlen(input) - 1;

		if (input[len] == '\n')
			input[len] = '\0';

		if (strcmp(input, "exit") == 0)
		{
			free(input);
			exit(0);
		}

		args = split_string(input);

		if (!args)
		{
			free(input);
			continue;

		}
		execute_command(args);
		free(input);
		free_ressources(args);
	}
return (0);
}
