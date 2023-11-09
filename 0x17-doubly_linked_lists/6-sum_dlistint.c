#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n)
 * of a doubly linked list.
 *
 * @head: Pointer to the head of the list
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		/* Traverse to the beginning of the list */
		for (; head->prev != NULL; head = head->prev)
			;

		/* Calculate the sum of the data in the list */
		for (; head != NULL; head = head->next)
		{
			sum += head->n;
		}
	}

	return (sum);
}
