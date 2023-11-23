#include "main.h"

/**
 * get_endianness - Function that checks the end nums
 * Return: 0 if huge and 1 if not
 */
int get_endianness(void)
{
	int z;
	char *b;

	z = 1;
	b = (char *)&z;
	return (*b);
}

