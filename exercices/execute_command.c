#include "shell.h"

/**
 * execute_command - fucntion that execute the command received
 * @array: command received in a array after split_string
 * Return: 1 on succes
 */

int execute_command(char **array)
{
	pid_t pid;
	int status;
	char *command_path;

	if (!array)
		return (1);

	command_path = find_executable(array[0]);

	if (!command_path)
	{
		fprintf(stderr, "%s: command not found\n", array[0]);
		return (1);
	}

	pid = fork();
	if (pid == -1)
	{
		perror("Error fork:");
		return (1);
	}
	if (pid == 0)
	{
		if (execve(command_path, array, environ) == -1)
		{
			perror("Error execve:");
			exit(1);
		}
	}
	else
		wait(&status);

	free(command_path);

return (1);
}
