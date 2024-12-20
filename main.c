#include "shell.h"

/**
 * main - main function for the simple shell
 * Return: 0
 */

int main(void)
{
	char *input;

	/* Set up signal handler for SIGINT CTRL+C */
	signal(SIGINT, handle_sigint);

	while (1) /* Infinite loop (wait for EOF) */
	{
		prompt(); /* Display prompt */

		input = read_input(); /* read the input written */
		if (input == NULL)
			break;
	}

return (0);
}
