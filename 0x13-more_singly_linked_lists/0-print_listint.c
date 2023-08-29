#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a singly linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current_node;	/* Pointer to traverse the list */
	unsigned int node_count = 0;	/* Counter for the number of nodes */

	current_node = h;

	/* Traverse the list using a for loop */
	for (; current_node != NULL; current_node = current_node->next)
	{
		printf("%d\n", current_node->n);	/* Print the current node's value */
		node_count++;	/* Increment the node count */
	}

	return (node_count);
}
