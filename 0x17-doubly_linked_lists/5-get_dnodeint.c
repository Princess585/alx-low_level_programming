#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t
 * @head: Header to the list
 * index: The index of the nth node
 * Return: The nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	undigned int i;

	if (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == NULL)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
