#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: An area to fill with bytes
 * @b: A byte that is constant
 * @n: Bytes number
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n++;
	}
	return (s);
}
