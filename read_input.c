#include "shell.h"

/**
 * read_input - get the input written
 * Return: The input written by user
 */

char *read_input(void)
{
	char *input = NULL;
	size_t n = 0;
	ssize_t read;

	read = getline(&input, &n, stdin);
	if (read == -1)
	{
		fprintf(stderr, "Logout...\nDisconnected from Simple-Shell.\n");
		free(input);
		exit(1);
	}

return (input);
}
