#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory occupied by a dog struct.
 * @d: Pointer to the dog struct to be freed.
 *
 * Description:
 * This function releases the memory resources allocated for a
 * dog struct, including its name and owner fields, and the
 * struct itself. If the pointer @d is NULL, no action is taken.
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
