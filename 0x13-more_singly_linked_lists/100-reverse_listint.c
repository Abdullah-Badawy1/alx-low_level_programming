#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses the demand a listint_t linked list.
 * @head: Double pointer to the head of the listint_t linked list.
 * Return: A pointer to the first place node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *new_head;

	switch (!(*head))
	{
		case 1:/* List is empty, return NULL */
			return (NULL);
		case 0:/* List is not empty */
			new_head = NULL;
			next_node = (*head)->next;
			(*head)->next = new_head;
			new_head = *head;

			for (; next_node; *head = next_node)
			{
				next_node = (*head)->next;
				(*head)->next = new_head;
				new_head = *head;
			}

			return (*head);
	}

	return (NULL);
	/* Return NULL if control reaches here */
}
