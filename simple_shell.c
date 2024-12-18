#include "shell.h"

/**
 * main - main simple shell program
 * Return: 0;
 */

int main(void)
{
	int i = 0;
	char *read;
	char **split;

	read = read_input();

	if (!read)
	{
		printf("\nError exiting shell\n");
	}

	printf("COMMAND: %s", read);

	split = split_string(read, " ");

return (0);
}
