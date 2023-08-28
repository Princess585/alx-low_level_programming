#include "lists.h"

/**
 * get_nodeint_at_index - Writes a function that returns the nth node
 * @index: The nodes index
 * @head: The number one node in the linked list
 * Return: NULL if node does not exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
