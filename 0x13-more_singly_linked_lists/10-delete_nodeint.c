#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * in a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if deletion succeeded, or
 *        -1 if deletion failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head, *temp;

	if (!current)
		return (-1);
	/* Empty list, deletion failed */

	switch (index)
	{
		case 0:
			/* Delete the first node */
			*head = current->next;
			free(current);
			return (1);
			/* Deletion succeeded */

		default:
			/* Delete at other positions */
			for (i = 0; current->next && (i + 1) != index; i++)
			{
				current = current->next;
			}

			if (current->next && (i + 1) == index)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
				/* Deletion succeeded */
			}
			return (-1);
			/* Deletion failed */
	}
}
