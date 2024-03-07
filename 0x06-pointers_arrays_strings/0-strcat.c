#include "main.h"

/**
 * _strcat - a function that concatenates 2 strings together.
 * @dest: string with concatenation
 * @src: string to be concatenated to the dest.
 * Return: pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0')
	{

		*(dest + i + j) = *(src + j);
		j++;
	}
	return (dest);
}
