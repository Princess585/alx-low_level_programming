#include "lists.h"

/**
 * print_listint - Function that prints all elements of a list
 * @h: The list linked
 * Return: The nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
