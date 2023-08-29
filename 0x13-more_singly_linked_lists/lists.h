#ifndef MORE_SINGLY_LINKED_LIST_H_
#define MORE_SINGLY_LINKED_LIST_H_

#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer value stored in the node
 * @next: Points to the next node in the list
 *
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
	int n;
/* Integer value stored in the node */
	struct listint_s *next;
	/* Points to the next node in the list */
} listint_t;

size_t print_listint(const listint_t *h);
/* Print elements of a linked list */
size_t listint_len(const listint_t *h);
/* Get the number of elements in a linked list */
listint_t *add_nodeint(listint_t **head, const int n);
/* Add a new node at the beginning of a list */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* Add a new node at the end of a list */
void free_listint(listint_t *head);
/* Free memory occupied by a linked list */
void free_listint2(listint_t **head);
/* Free memory occupied by a linked list and set the head to NULL */
int pop_listint(listint_t **head);
/* Remove the head node from a list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* Get the node at a specific index */
int sum_listint(listint_t *head);
/* Calculate the sum of all elements in a linked list */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* Insert a node at a specific index */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* Delete a node at a specific index */
listint_t *reverse_listint(listint_t **head);
/* Reverse the order of elements in a linked list */

#endif
