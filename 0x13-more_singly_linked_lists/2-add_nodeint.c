#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 * @head: Address of the pointer to the first node of the list.
 * @n: Integer value to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/* Pointer to the new node */

	new_node = malloc(sizeof(listint_t));
	/* Allocate memory for the new node */
	if (new_node == NULL)
		return (NULL);
	/* Return NULL if memory allocation fails */

	new_node->n = n;
	/* Assign the value n to the new node's n field */
	new_node->next = *head;
	/* Point the new node to the current head node */
	*head = new_node;
	/* Update the head pointer to the new node */

	return (*head);
	/* Return the address of the new head node */
}
