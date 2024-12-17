#include "shell.h"

/**
 * read_input - Reads the input written
 * Return: the input string
 */

char *read_input(void)
{
	char *buff = NULL;
	size_t n = 0;
	
	printf("$Adrien-Hugo_simple_shell: ");
	if (getline(&buff, &n, stdin) == -1)
	{
		free(buff);
		return (NULL);
	}

	buff[strcspn(buff, "\n")] = 0;

return (buff);
}
