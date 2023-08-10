#include "main.h"

/**
 * _calloc - Concatenates two strings with a limit on bytes.
 * @nmemb: The first string.
 * @size: The second string.
 *
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	block = malloc(nmemb * size);

	if (block != NULL)
	{
		switch (size)
		{
			case 1:
				for (i = 0; i < nmemb; i++)
					block[i] = 0;
				break;

			case 2:
				for (i = 0; i < nmemb * 2; i++)
					block[i] = 0;
				break;

			default:
				for (i = 0; i < nmemb * size; i++)
					block[i] = 0;
				break;
		}

		return (block);
	}
	else
	{
		return (NULL);
	}
}
