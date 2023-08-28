#include "lists.h"

/**
 * listint_len - Function that returns the elements number
 * @h: The  list linked of type listimt_t
 * Return: The nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
