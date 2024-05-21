#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of an int
 * @array: A ptr to the first element of an array to be searched
 * @size: Array numb in an element
 * @value: The value that needs to be searched
 * Return: If not present or array is NULL -1 or first value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}
