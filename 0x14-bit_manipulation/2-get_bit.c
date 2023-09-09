#include "main.h"

/**
 * get_bit - Function that returns the bit value at an index
 * @index: Bit index
 * @n: The number to search
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
