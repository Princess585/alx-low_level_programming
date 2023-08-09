#include "main.h"

/**
 * _strstr - Function that locates a substring
 *  @haystack: Finds the first occurrence of the substring
 *  @needle: Occurrence found in the haystack
 *  Return: A pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *a = haystack;
	char *q = needle;

	while (*a == *q && *q != '\0')
	{
	a++;
	q++;
	}

	if (*q == '\0')
	return (haystack);
	}
	return (0);
}
