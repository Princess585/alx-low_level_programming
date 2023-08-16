#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: search from the array
 * @size: array size
 * @cmp: pointer to the function to be used
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
