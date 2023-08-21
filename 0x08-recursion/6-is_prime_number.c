#include "main.h"

int actual_prime(int n, int);

/**
 * is_prime_number - Decides if an integer is a prime number or not
 * @n: Evaluation number
 *
 * Return: 1 if n is a prime number, and 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Function that calculates prime recursively number
 * @n: evaluation number
 * @i: An iterator
 *
 * Return: 1 if n is a prime number, 0 if n is not a prime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
