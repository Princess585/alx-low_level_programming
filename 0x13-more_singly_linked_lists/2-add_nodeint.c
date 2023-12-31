#include "lists.h"

/**
 * add_nodeint - Function that adds a new node
 * @n: The inserted data in the new node
 * @head: First node pointer
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

