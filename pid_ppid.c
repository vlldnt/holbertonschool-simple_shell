#include "shell.h"

/**
 * _pid - get my pid
 * Return: Process ID
 */

int _pid(void)
{
	int pid = getpid();

	return (pid);
}

/**
 * _ppid - get my ppid
 * Return: Parent Process ID
 */

int _ppid(void)
{
	int ppid = getppid();

	return (ppid);
}
