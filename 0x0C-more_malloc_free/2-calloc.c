#include "main.h"

/**
 * custom_string_nconcat - Concatenates two strings with a limit on bytes.
 * @str1: The first string.
 * @str2: The second string.
 * @limit: The maximum number of bytes from str2 to concatenate to str1.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated memory.
 */
char *custom_string_nconcat(char *str1, char *str2, unsigned int limit)
{
	char *concatenated;
	unsigned int total_length = limit, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i]; i++)
		total_length++;

	concatenated = malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	total_length = 0;

	for (i = 0; str1[i]; i++)
		concatenated[total_length++] = str1[i];

	for (i = 0; str2[i] && i < limit; i++)
		concatenated[total_length++] = str2[i];

	concatenated[total_length] = '\0';

	return (concatenated);
}
