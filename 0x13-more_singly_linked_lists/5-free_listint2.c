#include "lists.h"

/**
 * free_listint2 - Writes a function that frees a linked list
 * @head: The listint_t points to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
