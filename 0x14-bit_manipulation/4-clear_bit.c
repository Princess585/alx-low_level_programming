#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Function that sets a bit to 0
 * @n: The number of a parameter
 * @index: The par index
 * Return: if successful is 1 and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

