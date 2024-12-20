#include "shell.h"

/**
 * main - main function for the simple shell
 * Return: 0
 */

int main(void)
{
	char *input; 

	signal(SIGINT, handle_sigint);

	while (1)
	{
		prompt(); /* Display prompt */

		input = read_input();
		if (input == NULL)
			break;
	}

return (0);
}
