#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, ensuring safety
 * @head: Pointer to the list of type listint_t to print
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	long int difference;

	for (; head; num_nodes++)
	{
		difference = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		
		switch (difference > 0)
		{
			case 1:
				head = head->next;
				break;
				
			default:
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				return (num_nodes);
		}
	}

	return (num_nodes);
}
