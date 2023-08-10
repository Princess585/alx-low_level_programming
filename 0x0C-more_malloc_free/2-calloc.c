#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_calloc - Allocates memory for an array using malloc
 * @size: Array size
 * @nmemb: Array members number
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
	return (NULL);
	pointer = calloc(nmemb, size);
	if (pointer == NULL)
	return (NULL);
	else
	return (pointer);
}
