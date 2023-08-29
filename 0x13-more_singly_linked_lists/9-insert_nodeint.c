#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: Element/property n of the node to be added.
 * Return: Address of the new element (SUCCESS),
 *         or NULL if it failed (FAILURE),
 *         or NULL if it's not possible to add the new node at index @idx.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head, *new_node_ptr;
	unsigned int i;

	switch (idx)
	{
		case 0:
			/* Insert at the beginning */
			new_node_ptr = malloc(sizeof(listint_t));

			if (!new_node_ptr)
				return (NULL);
			new_node_ptr->n = n;
			new_node_ptr->next = *head;
			*head = new_node_ptr;
			return (new_node_ptr);

		default:
			/* Insert at other positions */
			for (i = 0; current_node && (i + 1) != idx; i++)
			{
				current_node = current_node->next;
			}

			if (current_node && (i + 1) == idx)
			{
				new_node_ptr = malloc(sizeof(listint_t));

				if (!new_node_ptr)
					return (NULL);
				new_node_ptr->n = n;
				new_node_ptr->next = current_node->next;
				current_node->next = new_node_ptr;
				return (new_node_ptr);
			}
			return (NULL);
	}
}
