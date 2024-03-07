#include "main.h"

/**
 * _strncat - concatenate strings with wanted  size of the second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: maximum number of chars from src to be concatenated
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i + j) = *(src + j);
			j++;
	}
	return (dest);
}
