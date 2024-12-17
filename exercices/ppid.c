#include "shell.h"

/**
 * main - get the PPID
 * Return: 0
 */

int main(void)
{
	int ppid = getppid();

	printf("%d\n", ppid);

return (0);
}
