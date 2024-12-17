#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - Executes the command ls -l /tmp in 5 child processes
 *
 * Return: 0 on success, exits with failure on error
 */
int main(void)
{
	pid_t child_pid;
	int pid;
	int i, status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		pid = getpid();
		if (child_pid == -1)
		{
			perror("fork failed");
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			printf("Child %d: Executing ls -l /tmp, with PID :%d\n", i + 1, pid);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("execve failed");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
			printf("Child %d exited. Status: %d\n", i + 1, WEXITSTATUS(status));
		}
	}
	printf("All child processes have completed.\n");
	return (0);
}

