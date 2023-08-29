#include "lists.h"
#include <stdio.h>

/**
 * free_list_pointers - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list_pointers(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list safely.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			switch (head == add->p)
			{
				case 1:
					printf("-> [%p] %d\n", (void *)head, head->n);
					free_list_pointers(&hptr);
					return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_list_pointers(&hptr);
	return (num_nodes);
}
