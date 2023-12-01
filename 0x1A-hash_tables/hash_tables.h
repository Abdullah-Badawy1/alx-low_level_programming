#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table.
 *
 * @key: The key, a string. The key is unique within the HashTable.
 * @value: The value corresponding to a key.
 * @next: A pointer to the next node in the list, enabling chaining for collision handling.
 *
 * Description: This structure represents a single node in a hash table,
 * containing a key-value pair and a pointer to the next node, allowing
 * the implementation of chaining for collision resolution in the hash table.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure.
 *
 * @size: The size of the array in the hash table.
 * @array: An array of pointers, each pointing to the first node of a linked list.
 *         This implementation uses chaining for collision handling.
 *
 * Description: This structure represents the entire hash table, with an array
 * that holds pointers to the first node of linked lists (for each bucket in the table),
 * thus implementing a chaining collision handling mechanism.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Node of a sorted hash table.
 *
 * @key: The key, a string. The key is unique within the HashTable.
 * @value: The value corresponding to a key.
 * @next: A pointer to the next node in the list for standard chaining.
 * @sprev: A pointer to the previous element in the sorted linked list.
 * @snext: A pointer to the next element in the sorted linked list.
 *
 * Description: This structure extends the basic hash node structure to
 * include pointers to previous and next nodes in a sorted order, facilitating
 * the maintenance of a sorted linked list in addition to the standard chaining.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure.
 *
 * @size: The size of the array in the hash table.
 * @array: An array of pointers, each pointing to the first node of a linked list.
 *         This implementation uses chaining for collision handling.
 * @shead: A pointer to the first element of the sorted linked list.
 * @stail: A pointer to the last element of the sorted linked list.
 *
 * Description: This structure represents a sorted hash table, extending the basic
 * hash table structure with pointers to the head and tail of a sorted linked list,
 * enabling the maintenance of order in addition to efficient hashing.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

// Function prototypes for operations on hash tables
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif // HASH_TABLE_H
