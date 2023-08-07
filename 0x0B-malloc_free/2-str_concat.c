#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to a new string on success, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index = 0, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[index] || s2[index])
	{
		len++;
		index++;
	}

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	index = 0;
	while (s1[index])
	{
		concat_str[concat_index++] = s1[index];
		index++;
	}

	index = 0;
	while (s2[index])
	{
		concat_str[concat_index++] = s2[index];
		index++;
	}

	return (concat_str);
}
