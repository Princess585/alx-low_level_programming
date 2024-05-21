#include "search_algos.h"
/**
  * jump_search - Searches for a value in an array that is sorted
  * @array: A pointer to the first array element
  * @size: The element number in an array
  * @value: The value that must be searched
  * Return: If not present or the array is NULL -1, otherwise index
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step size */
	step = sqrt(size);

	/* Perform the jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		i = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if the value is found and return the corresponding index */
	return (array[i] == value ? (int)i : -1);
}
