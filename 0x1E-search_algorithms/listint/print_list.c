#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - Function that prints the content of a listint_t
 * @list: Ptr to the list head
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
