#include "main.h"

/**
 * flip_bits - Function that counts bit num from number to number
 * @n: The fir num
 * @m: The sec num
 * Return: The bit numb
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

