#include "shell.h"

/**
 * main - main fucntion to launch our simple shell
 * Return: 0 at the end
 */

int main(void)
{
	char *input, **args;
	int status;


	signal(SIGINT, handle_sigint);

	while (1)
	{
		if (isatty(STDIN_FILENO))
			prompt();

		input = read_input();
		if (!input)
			break;

		if (strcmp(input, "exit") == 0)
		{
			free(input);
			break;
		}

		args = split_string(input);
		if (!args)
		{
			free(input);
			continue;
		}

		status = execute_command(args);
		free(input);
		free_ressources(args);

		if (status == 0)
			break;
	}
return (0);
}
