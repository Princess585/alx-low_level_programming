#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: prints the sum of two diagonal square
 * @size: size of a square
 * Return: success
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
	sum1 = sum2 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
	sum1 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
