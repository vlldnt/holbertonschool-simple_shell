#include "shell.h"

/**
 * main - get a prompt and wait user to write command
 * and return the command in the output
 * Return: 0
 */

int main(void)
{
	size_t n;
	char *buff;

	printf("$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

return (0);
}
