#include "shell.h"

/**
 * main - main function for the simple shell
 * Return: 0
 */

int main(void)
{
	char *input;
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
		printf("Command written : %s", input);



		test = split_string(input);
		if (!test)
		{
			free(test);
			return (1);
		}

		for (i = 0 ; test[i] != NULL; i++)
		{
			if (i == 0)
				printf("Command : %s\n", test[0]);
			else
				printf("argument[%d] : %s\n", i, test[i]);
		}
		free(test);
		free(input);
	}
return (0);
}
