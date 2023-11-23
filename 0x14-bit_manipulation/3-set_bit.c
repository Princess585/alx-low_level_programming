#include "main.h"

/**
 * set_bit - Function that progs the set bit val
 * @n: The set num
 * @index: The bit set index
 * Return: 1 if successful and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

