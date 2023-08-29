#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the first node of a
 * listint_t list and returns its data.
 * @head: Double pointer to the head node.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int n;

	switch (*head == NULL)
	{
		case 1:
			/* List is empty */
			return (0);
		case 0:
			/* List is not empty */
			node_to_delete = *head;
			*head = node_to_delete->next;
			n = node_to_delete->n;
			free(node_to_delete);
			return (n);
	}
	return (0);
	/* Return 0 if control reaches here */
}
