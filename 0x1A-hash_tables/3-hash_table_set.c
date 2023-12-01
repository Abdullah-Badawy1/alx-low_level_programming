#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * Description: Adds an element (key, value pair) to the hash table.
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *old_head = NULL;

	if (key == NULL || value == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = (char *)strdup(key);
	new_node->value = (char *)strdup(value);
	new_node->next = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[index];
		for (; old_head != NULL; old_head = old_head->next)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *)strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
		}
		new_node->next = (ht->array)[index];
		(ht->array)[index] = new_node;
		return (1);
	}
}
