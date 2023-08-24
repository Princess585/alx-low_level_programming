#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * @h:Function that points to the lists
 *
 * Return: The elements number in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
