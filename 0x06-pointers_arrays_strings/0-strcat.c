#include "holberton.h"

/**
 * _strcat - concat 2 string 
 * @dest:char to do its function
 * @src:char also to do its function
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	for (;*dest != '\0'; dest++)
	{
	}

	for (;*src != '\0'; dest++ , src++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (s);
}
