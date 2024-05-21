#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: Ptr to the first array element
  * @size: The array number in an element
  * @value: The value to search
  * Return: If not present or the array is NULL -1, otherwise index
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
