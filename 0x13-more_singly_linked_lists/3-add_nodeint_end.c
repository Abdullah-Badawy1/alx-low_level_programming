#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t.
 * @n: The value of the node to be added.
 * @h: Pointer to the head/first node of the list.
 * Return: The address of the new element, NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node;
	/* New node to be added */
	listint_t *last_node;
	/* Pointer to the last node in the list */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Return NULL if memory allocation fails */

	new_node->n = n;
	new_node->next = NULL;

	/* Check if the list is empty */
	switch (*h == NULL)
	{
		case 1:
			/* List is empty, make the new node the head */
			*h = new_node;
			return (new_node);
		case 0:
			/* List is not empty, find the last node */
			last_node = *h;
			for (; last_node->next != NULL; last_node = last_node->next)
			{
			/* Iterate through the list until the last node is found */
			}
			last_node->next = new_node;
			return (new_node);
	}
	return (NULL);
	/* Return NULL if control reaches here, for safety */
}
