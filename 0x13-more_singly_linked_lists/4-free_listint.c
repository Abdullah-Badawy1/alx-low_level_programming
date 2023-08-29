#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t nodes.
 * @head: Pointer to the head node of the list.
 * Description: This function releases the memory occupied by each node in
 *              the list, starting from the head.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	for (; head != NULL; head = current_node)
		{
		current_node = head->next;
		/* Store the next node's address before freeing */
		free(head);/* Free the current node */
		}
}
