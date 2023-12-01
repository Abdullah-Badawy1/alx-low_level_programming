#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * Description: Retrieves the value associated with a given key in the hash table.
 *
 * @ht: hash table
 * @key: key to search for
 *
 * Return: value associated with the key, or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if ((ht->array)[index] == NULL)
		return (NULL);

	current_node = (ht->array)[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
