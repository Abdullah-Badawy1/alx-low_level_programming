#include "main.h"

/**
 * _strncpy - copy a string, defining the size of the destination string.
 * @dest: destination buffer for copying
 * @src: source string to be copied
 * @n: maximum number of characters to be copied from src
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
