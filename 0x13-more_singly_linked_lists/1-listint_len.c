#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in the list.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *current_node;  /* Pointer to traverse the list */
	unsigned int element_count = 0; /* Counter for the number of elements */

	current_node = h;

	/* Traverse the list using a for loop */
	for (; current_node != NULL; current_node = current_node->next)
	{
		element_count++; /* Increment the element count */
	}

	return (element_count);
}
