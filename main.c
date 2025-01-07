#include "shell.h"

/**
 * main - main fucntion to launch our simple shell
 * Return: 0 at the end
 */

int main(void)
{
	char *input, **args;


	signal(SIGINT, handle_sigint);

	while (1)
	{
		if (isatty(STDIN_FILENO))
			prompt();

		input = read_input();
		if (!input)
			break;

		if (strcmp(input, "\n") == 0 || strlen(input) == 0)
		{
			free(input);
			continue;
		}

		args = split_string(input);

		if (strcmp(args[0], "exit") == 0)
		{
			free_ressources(args);
			free(input);
			exit(0);
		}

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
