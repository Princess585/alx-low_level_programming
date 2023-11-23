#include "main.h"

/**
 * binary_to_uint - A funct that converts binary and other nums
 * @b: String ptr to decimal numbers
 * Return: The  unsigned integer with binary dec values
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}
	for (z = 0; b[z] != '\0'; z++)
	{
		num <<= 1;
		if (b[z] == '1')
			num += 1;
	}
	return (num);
}

