#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
	{
		switch (h->str != NULL)
		{
		case 1:
			printf("[%u]\t%s\n", h->len, h->str);
			break;
		case 0:
			printf("[0]\t(nil)\n");
			break;
		}
		n++;
	}

	return (n);
}
