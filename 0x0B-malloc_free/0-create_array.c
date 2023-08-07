#include "main.h"

/**
 * create_array - creates an array of characters
 * and initializes it with a specific character.
 * @size: Size of the array
 * @c: Character to initialize the array with
 * Return: NULL if size is zero or if memory allocation fails,
 * pointer to array otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	/* Check if size is zero or if memory allocation fails */
	switch (size)
	{
	case 0:
		return (NULL);
	default:
		array = malloc(sizeof(char) * size);
		break;
	}

	if (array == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
