#include "main.h"

/**
 * _strdup - Function that copies string to newly allocates space
 * @str: The string to copy
 *
 * Return: pointer to the new memory
 */

char *_strdup(char *str)
{
	int a;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		copy[a] = str[a];

	return (copy);
}
