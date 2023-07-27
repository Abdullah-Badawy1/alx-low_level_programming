#include "main.h"

/**
 * _strncat - concatenate strings with limited size of the second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: maximum number of bytes from src to be concatenated
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthD = 0, lengthS = 0;

	for (; *(dest + lengthD) != '\0'; lengthD++)
		;

	for (; *(src + lengthS) != '\0' && lengthD < 97 && lengthS < n;
			lengthD++, lengthS++)
		*(dest + lengthD) = *(src + lengthS);

	*(dest + lengthD) = '\0';
	return (dest);
}
