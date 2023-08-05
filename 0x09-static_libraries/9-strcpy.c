#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;


	for  (len = 0 ; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
