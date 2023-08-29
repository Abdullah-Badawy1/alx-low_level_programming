#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t list.
 * @head: The head of the list.
 * Return: The sum, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	switch (head == NULL)
	{
		case 1:
			/* List is empty, return 0 */
			return (0);
		case 0:
			/* List is not empty */
			for (; head != NULL; head = head->next)
			{
				sum += head->n;
			}
			return (sum);
	}

	return (0);
	/* Return 0 if control reaches here */
}
