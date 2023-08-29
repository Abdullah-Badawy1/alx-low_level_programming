#include "lists.h"

/**
 * free_listint_safe - Frees a list in safe mode.
 * @h: Double pointer to the head of the list.
 * Description: This function frees a list of listint_t nodes in a safe manner.
 *              It detects loops and avoids double freeing.
 * Section header: The header of this function is lists.h.
 * Return: The size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *current;
	size_t nodes_freed = 0;
	int offset;

	current = *h;

	while (current)
	{
		offset = current - current->next;

		if (offset > 0)
		{
			tmp = current->next;
			free(current);
			current = tmp;
			nodes_freed++;
		}
		else
		{
			free(current);
			*h = NULL;
			nodes_freed++;
			break;
		}
	}

	*h = NULL;

	return (nodes_freed);
}
