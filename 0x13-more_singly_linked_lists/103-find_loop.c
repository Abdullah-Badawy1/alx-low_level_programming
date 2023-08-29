#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 * @head: Pointer to the head of the listint_t linked list.
 *
 * Description: This function finds a loop in the linked list.
 *
 * Return: The node where the loop is located, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	slow_ptr = fast_ptr = head;

	for (; slow_ptr && fast_ptr && fast_ptr->next;)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		switch (slow_ptr == fast_ptr)
		{
			case 1:/* Loop detected */
				slow_ptr = head;
				while (slow_ptr != fast_ptr)
				{
					slow_ptr = slow_ptr->next;
					fast_ptr = fast_ptr->next;
				}
				return (slow_ptr);
		}
	}

	return (NULL);/* No loop found */
}
