#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * Description: This function calculates the index where a key/value pair
 *should be stored in the array of the hash table based on the key.
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 *         of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_results;

	hash_results = hash_djb2(key);
	if (size != 0)
		return (hash_results % size);
	return (0);
}
