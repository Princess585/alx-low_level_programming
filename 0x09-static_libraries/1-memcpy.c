#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Destination of the location
 * @src: Source of the location
 * @n: The number of bytes to copy
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	dest[a] = src[a];
	return (dest);
}
