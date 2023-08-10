#include "main.h"
/**
 * *array_range - Function that creates an array of integers
 * @min: Stored values of minimum range
 * @max: Stored values of maximum range and elements number
 *
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pointer[a] = min++;

	return (pointer);
}
