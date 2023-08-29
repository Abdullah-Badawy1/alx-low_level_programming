#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a list.
 * @head: The head of the list to find the loop in.
 * Description: This function detects
 * and returns the node where a loop is located
 *              in a linked list.
 * Section header: The header of this function is lists.h.
 * Return: The node where the loop is located, or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}
