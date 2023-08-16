#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter
 * @size: Array size
 * @array: function array
 * @action: pointer to the function you need
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
