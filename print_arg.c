#include "shell.h"

/**
 * main - print arguments without using ac
 * @ac: number of argument not used here
 * @av: argument to print
 * Return: 0 as always if it's ok
 */

int main(int ac, char **av)
{
	char **arg = av;

	(void)ac;

	while (*arg)
	{
		printf("%s\n", *arg);
		arg++;
	}
return (0);
}
