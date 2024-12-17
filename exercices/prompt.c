#include "shell.h"

/**
 * _prompt - get a prompt and wait user to write command
 * and return the command in the output
 * Return: 0
 */

int _prompt(void)
{
	size_t n = 0;
	char *buff = NULL;
	int read, i = 0;
	char *argv[64], *token;

	printf("$Adrien-Hugo_super-simple-shell: ");
	read = getline(&buff, &n, stdin);
	if (read == -1)
	{
		free(buff);
		return (1);
	}

	buff[strcspn(buff, "\n")] = 0;
	token = strtok(buff, " ");
	while (token != NULL)
	{
		argv[i++] = token;
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;
	if (execvp(argv[0], argv) == -1)
	{
		perror("Error executing command");
		free(buff);
		return (1);
	}

	free(buff);
return (0);
}

