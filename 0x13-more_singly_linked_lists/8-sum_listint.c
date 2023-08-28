#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data(n)
 * @head: The number one node in the list linked
 * Return: The resulting sum, and 0 if list ie empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
