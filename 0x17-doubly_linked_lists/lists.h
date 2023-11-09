#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly Linked List Node
 * @n: Integer data stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: Node structure for a doubly linked list
 * used in Holberton project.
 */
typedef struct dlistint_s
{
	int n;                    /* Integer data stored in the node */
	struct dlistint_s *prev;  /* Pointer to the previous node */
	struct dlistint_s *next;  /* Pointer to the next node */
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @n: Integer value to be stored in the new node
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @n: Integer value to be stored in the new node
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head of the doubly linked list
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Head of the doubly linked list
 * @index: Index of the node to retrieve
 * Return: Address of the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Computes the sum of all the data (n) of a doubly linked list
 * @head: Head of the doubly linked list
 * Return: Sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head);

/**
 *insert_dnodeint_at_index -
 *Inserts a new node at a given position in a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index at which to insert the new node
 * @n: Integer value to be stored in the new node
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 *delete_dnodeint_at_index - Deletes the node at a given
 *index in a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to delete
 * Return: 1 if successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
