#include "shell.h"

/**
 * handle_sigint - hanfle the SIGINT signal (CTRL C)
 * @signal: unsused here
 */

void handle_sigint(int signal)
{
	signal = signal; /* Signal unused here */

	write(STDOUT_FILENO, "\n", 1);

	prompt();
}
