#include"main.h"

/**
 * get_bit - Function that progresses the val that are returned
 * @n: The bit check num
 * @index: Te bit index
 * Return: The bit val and -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

