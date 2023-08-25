#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the list_t list to be freed.
 **/


void free_list(list_t *head)
{
	list_t *tmp;

	for (; head; head = tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
