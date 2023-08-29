#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the listint_t linked list.
 *
 * Description: This function frees a list in a safe mode to avoid loops.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *current;
	size_t nodes_freed;
	int difference;

	nodes_freed = 0;
	current = *h;

	for (; current != NULL; nodes_freed++)
	{
		difference = current - current->next;

		switch (difference > 0)
		{
			case 1:/* Non-looping node */
				tmp = current->next;
				free(current);
				current = tmp;
				break;

			default:/* Looping node or last node */
				free(current);
				*h = NULL;
				return (nodes_freed);
		}
	}

	*h = NULL;
	return (nodes_freed);
}
