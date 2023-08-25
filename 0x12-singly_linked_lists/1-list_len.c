#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 **/
size_t list_len(const list_t *h)
{
	const list_t *temp;


	unsigned int counter = 0;



	for (temp = h; temp; temp = temp->next)
	{
		counter = couter + 1;
	}

	return (counter);
}
