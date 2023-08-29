#include "lists.h"

/**
 * free_listint2 -Frees a linked list of listint_t
 * @head: Double pointer to the head node of the list.
 * Description: This function releases the memory occupied by each node in
 *the list, starting from the head. After freeing, the head is set to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	/* Current node to be freed */

	if (head != NULL)
	{
		for (; *head != NULL; *head = current_node)
		{
			current_node = (*head)->next;
			/* Store the next node */
			free(*head);
			/* Free the current node */
		}
	}
}
