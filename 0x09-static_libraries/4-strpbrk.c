#include "main.h"

/**
 * _strpbrk - Fucntion that searches a string for any set of bytes
 * @s: Locates the first occurrence in th string
 * @accept: Any bytes in the string
 * Return: A pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	return (s);
	}
	s++;
	}
	return ('\0');
}
