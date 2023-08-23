#include "main.h"

/**
 * argstostr - Function that concatenates arguments
 * @ac: Counts the argument
 * @av: The argument vector
 *
 * Return: The pointer
 */

char *argstostr(int ac, char **av)
{
	int a, j, k = 0;
	int count = 0;
	char *output;

	for (a = 0; a < ac; a++)
	{
		for (j = 0; av[a][j] != '\0'; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (j = 0; av[a][j] != '\0'; j++)
		{
			output[k] = av[a][j];
			k++;
		}
		output[k++] = '\n';
	}
	output[k] = '\0';
	return (output);
}

