#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String to be copied
 *
 * Return: NULL if there's an error,
 * otherwise a pointer to the allocated space.
 */
char *_strdup(char *str)
{
	char *cpy;
	int index = 0, len = 0;

	/* Check if the input string is NULL */
	switch (str != NULL)
	{
	case 0:
		return (NULL);
	default:
		/* Calculate the length of the input string */
		while (str[len] != '\0')
			len++;
		cpy = malloc(sizeof(char) * (len + 1));
		break;
	}

	/* Check if memory allocation failed */
	switch (cpy != NULL)
	{
	case 0:
		return (NULL);
	default:
		while (str[index] != '\0')
		{
			cpy[index] = str[index];
			index++;
		}
		cpy[len] = '\0';
		break;
	}

	return (cpy);
}
