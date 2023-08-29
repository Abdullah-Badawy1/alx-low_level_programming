#include "lists.h"
#include <stdio.h>

size_t count_loop_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_loop_nodes - Counts the number of nodes in a looped list.
 * @head: A pointer to the head of the list to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of nodes in the loop.
 */
size_t count_loop_nodes(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				nodes++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				nodes++;
				slow_ptr = slow_ptr->next;
			}

			return (nodes);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = count_loop_nodes(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
