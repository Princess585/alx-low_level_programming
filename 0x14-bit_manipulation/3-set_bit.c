#include "main.h"

/**
 * set_bit - Function that sets a bit at an index to 1
 * @n: Number of change to point to
 * @index: Bit index
 * Return: 1 in success and -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
