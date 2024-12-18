#include "shell.h"

/**
 * split_string - string tokenization of a string
 * @str: string to split
 * @delim: delimiter helping split
 */

char *split_string(char *str, const char *delim)
{
	char *split;
	
	split = strtok(str, delim);

	while (split)
	{
		split = strtok(NULL, delim);
	}

return (split);
}
