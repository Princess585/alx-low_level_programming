#include "lists.h"

/**
 * free_listint - Function that frees the linked lists
 * @head: The list to be freed by listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
