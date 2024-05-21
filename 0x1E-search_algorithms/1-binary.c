#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of ints
 * @array: Ptr to the first array element
 * @size: The array numb in an element
 * @value: The value to be searced
 * Return: If not present or the array is NULL, -1 or the index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* If the middle element is greater than the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
