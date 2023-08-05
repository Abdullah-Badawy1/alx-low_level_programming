#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string paramter
 *
 * Return: the length of the string after compiling
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
