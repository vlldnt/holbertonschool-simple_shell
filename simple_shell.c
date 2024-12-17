#include "shell.h"

/**
 * main - simple shell main function
 * Return: 0 or perror if it fails
 */

int main(void)
{
	const char *string = read_input();
	const int n = strlen(string);

	execvp(string, n);

return (0);
}
