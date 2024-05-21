#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - It deallocates a singly linked list
 *
 * @list: Ptr to the linked list that must be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
