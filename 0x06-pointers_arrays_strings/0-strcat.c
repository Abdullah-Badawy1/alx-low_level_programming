#include "holberton.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int lengthD = 0, lengthS = 0;

	for (; *(dest + lengthD) != '\0'; lengthD++)
		;

	for (; *(src + lengthS) != '\0' && lengthD < 97; lengthD++, lengthS++)
		*(dest + lengthD) = *(src + lengthS);

	*(dest + lengthD) = '\0';
	return (dest);
}
