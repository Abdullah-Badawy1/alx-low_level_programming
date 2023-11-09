#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the list
 * Return: No return value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		/* Traverse to the beginning of the list */
		while (head->prev != NULL)
			head = head->prev;
	}

	/* Free each node in the list */
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
