#include "main.h"

/**
 * custom_realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the memory block pointed to by ptr.
 * @new_size: Size of the new memory to be allocated.
 *
 * Return: Pointer to the address of the new memory block.
 */
void *custom_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
				*((char *)temp_block + i) = *((char *)ptr + i);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
