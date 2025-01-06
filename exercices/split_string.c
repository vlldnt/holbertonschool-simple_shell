#include "shell.h"

/**
 * split_string - split a string into an array of strings
 * @command: the command entered
 * Return: args (array of the command written)
 */

char **split_string(char *command)
{
	char **array = NULL;
	char *token = NULL;
	size_t i = 0;
	size_t buffer_size = BUFF_SIZE;
	size_t re_alloc = 2;

	array = malloc(sizeof(char *) * BUFF_SIZE);
	if (!array)
	{
		fprintf(stderr, "Error, memory allocation failed\n");
		free(array);
		return (NULL);
	}

	token = strtok(command, " ");
	while (token)
	{
		if (i >= buffer_size)
			array = realloc(array, sizeof(char *) * re_alloc);
		array[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}

	array[i] = NULL;

return (array);
}
