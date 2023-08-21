#include "main.h"

/**
 * factorial - Function that finds the factorial of a number
 * @n: factorial number
 *
 * Return: The factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
