#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the listint_t linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *prev_node;

	if (!(*head))
		return (NULL);

	prev_node = NULL;
	next_node = (*head)->next;
	(*head)->next = prev_node;
	prev_node = *head;

	for (; next_node;)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
	}

	return (*head);
}
