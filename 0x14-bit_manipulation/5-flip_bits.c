#include "main.h"

/**
 * flip_bits - Function that counts the bits number to change
 * @n: The first number to count
 * @m: The second number to count
 * Return: Bit number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}

