#include "lists.h"

/**
 * free_listp - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints a linked list safely.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	listp_t *hptr, *new_node, *search_node;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		search_node = hptr;

		while (search_node->next != NULL)
		{
			search_node = search_node->next;
			if (head == search_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_listp(&hptr);
	return (node_count);
}
