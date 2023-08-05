#include "main.h"
#include <stddef.h>
/**
 * _strchr - Returns a pointer to the first occurrence
 *           of the character 'c' in the
 *           string 's', or NULL if the
 *           character is not found.
 *
 * Description: This function searches for
 * the first occurrence of the character 'c'
 *              in the string 's'. If found,
 *              it returns a pointer to that location.
 *              If the character is not found, it returns NULL.
 *
 * @s: Pointer to the string to be searched.
 * @c: Character to search for.
 *
 * Return: Returns a pointer to the first
 * occurrence of 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
