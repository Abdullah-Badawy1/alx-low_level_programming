#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in a listint_t linked list.
 * @head: Pointer to the first node of the list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the nth node of the list,
 * NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *current_node;

	switch (head == NULL)
	{
		case 1:
			/* List is empty, return NULL */
			return (NULL);
		case 0:
			/* List is not empty */
			current_node = head;
			for (counter = 0; current_node && (counter < index); counter++)
			{
				current_node = current_node->next;
			}

			if (counter < index)
				/* If index is out of bounds */
				return (NULL);

			return (current_node);
	}

	return (NULL);
	/* Return NULL if control reaches here */
}
