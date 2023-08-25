#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - Represents a node in a singly linked list.
 * @str: A dynamically allocated string.
 * @len: Length of the string.
 * @next: Pointer to the next node in the list.
 * Description: This structure defines the nodes of a singly linked list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * print_list - Prints the content of a linked list.
 * @h: Pointer to the head node of the list.
 * Return: Number of nodes in the list.
 * Description: Prints node content (string & length) in the linked list.
 */
size_t print_list(const list_t *h);
/**
 * list_len - Calculates the number of nodes in a linked list.
 * @h: Pointer to the head node of the list.
 * Return: Number of nodes in the list.
 * Description: Counts and returns the number of nodes in the list.
 */
size_t list_len(const list_t *h);
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head node.
 * @str: The string for the new node.
 * Return: Pointer to the newly created node.
 * Description: Adds a new node with string at the list's beginning.
 */
list_t *add_node(list_t **head, const char *str);
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head node.
 * @str: The string for the new node.
 * Return: Pointer to the newly created node.
 * Description: Adds a new node with string at the list's end.
 */
list_t *add_node_end(list_t **head, const char *str);
/**
 * free_list - Frees memory of a linked list.
 * @head: Pointer to the head node.
 * Description: Releases memory of nodes, including strings.
 */
void free_list(list_t *head);
#endif
