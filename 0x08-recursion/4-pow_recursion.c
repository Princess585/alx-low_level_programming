#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function that finds the power of a raised num
 * @x: The base of a number
 * @y: The power
 *
 * Return: x the poer of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
