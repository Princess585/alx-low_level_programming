#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: A string to search from
 * @accept: A string that needs to be searched
 * Return: The number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, q;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (q = 0; s[a] != accept[q]; q++)
	{
	if (accept[q] == '\0')
	return (a);
	}
	}
	return (0);
}
