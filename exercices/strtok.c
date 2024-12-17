#include "shell.h"

/**
 * split_string - string tokenization of a string
 * @str: string to split
 * @delim: delimiter helping split
 */

void split_string(char *str, const char *delim)
{
	char *split = strtok(str, delim);

	while (split)
	{
		printf("%s\n", split);
		split = strtok(NULL, delim);
	}
}


/**
 * main - main function to split string with strtok
 * Return: 0
 */

int main(void)
{
	char string[] = "Je suis gentil c'est vrai !";
	const char *delim = " ";

	split_string(string, delim);

return (0);
}
