#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, safely
 * @head: List of type listint_t to print
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int difference;

	for (; head; num++)
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
				return (num);
		}
	}

	return (num);
}
