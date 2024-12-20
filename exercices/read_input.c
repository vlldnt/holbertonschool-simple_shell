#include "shell.h"

/**
 * read_input - get the input written
 */

char *read_input(void)
{
	char *input = NULL;
	size_t n = 0;
	int read;

	read = getline(&input, &n, stdin);

	if (read == -1 || input == NULL)
	{
		if (errno == EINTR) /* handle CTRL+ C interruption system call*/
		{
			write(STDOUT_FILENO, "\n", 1);
			return (NULL);
		}

		write(STDOUT_FILENO, "\n", 1);
		free(input);
		exit(0);
	}
return (input);
}
