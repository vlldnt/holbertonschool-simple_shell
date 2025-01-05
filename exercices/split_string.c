#include "shell.h"

/**
 * split_string - split a string into an array of strings
 * @command: the command entered
 * Return: args (array of the command written)
 */

char **split_string(char *command)
{
	char **cmd_array = NULL;
	char *cmd_token = NULL;
	size_t i = 0;

	cmd_array = malloc(sizeof(char *) * BUFF_SIZE);
	if (!cmd_array)
		return (NULL);

	cmd_token = strtok(command, " ");
	while (cmd_token)
	{
		i++;
		cmd_array[i] = strdup(cmd_token);
		cmd_token = strtok(NULL, " ");
	}

	cmd_array[i] = NULL;

return (cmd_array);
}
