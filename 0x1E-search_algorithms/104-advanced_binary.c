#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches for a value in an array
 * @array: Ptr to the first array element
 * @left: The array starting index point to search.
 * @right: The array ending index point to search.
 * @value: The value to search
 * Return: If not present -1, otherwise index of lacated value
 * Description: After each change it prints an array
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* If the right boundary is less than the left boundary */
	if (right < left)
		/* Value not found, return -1 */
		return (-1);

	printf("Searching in array: ");

	/* Print the [sub]array being searched */
	for (i = left; i < right; i++)

		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/* Calculate the middle index */
	i = left + (right - left) / 2;

	/* If the middle element is the value and it's the first occurrence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		/* Return the index */
		return (i);

	/* If the middle element is greater than or equal to the value */
	if (array[i] >= value)
		/* Recursively search the left subarray */
		return (advanced_binary_recursive(array, left, i, value));
	/* Recursively search the right subarray */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in an array of an integer
 * @array: Ptr to array first node
 * @size: The element numb in an array
 * @value: The value to search
 * Return: If not present or the array is NULL -1, otherwise index
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Call the recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
