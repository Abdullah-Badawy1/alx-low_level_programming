#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc;
 * exits with status 98 if allocation fails.
 * @size: The size of the memory block to be allocated.
 *
 * Return: A pointer to the allocated memory block.
 */
void *malloc_checked(unsigned int size)
{
	void *allocated_memory;

	allocated_memory = malloc(size);
	if (allocated_memory == NULL)
	exit(98);
	return (allocated_memory);
}
