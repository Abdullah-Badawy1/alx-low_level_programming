#include "main.h"

/**
 * handleNullStrings - Handles NULL strings by assigning an empty string.
 * @s: Pointer to the string
 */
static void handleNullStrings(char **s)
{
	if (*s == NULL)
		*s = "";
}

/**
 * calculateStringLength - Calculates the length of concatenated strings.
 * @s1: First string
 * @s2: Second string
 * Return: Length of concatenated strings
 */
static int calculateStringLength(char *s1, char *s2)
{
	int len = 0;

	while (*s1 || *s2)
	{
		len++;
		s1++;
		s2++;
	}
	return (len);
}

/**
 * copyString - Copies a source string to a destination and updates index.
 * @source: Source string
 * @destination: Destination string
 * @index: Pointer to index tracking destination position
 */
static void copyString(char *source, char *destination, int *index)
{
	while (*source)
	{
		destination[*index] = *source;
		(*index)++;
		source++;
	}
}

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: NULL on failure, otherwise pointer to a new concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int concat_index = 0, len;

	handleNullStrings(&s1);
	handleNullStrings(&s2);

	len = calculateStringLength(s1, s2);

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	copyString(s1, concat_str, &concat_index);
	copyString(s2, concat_str, &concat_index);
	concat_str[concat_index] = '\0';

	return (concat_str);
}
