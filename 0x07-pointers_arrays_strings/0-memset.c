/*
 * File: 0-memset.c
 * Auth: not
 */
#include "main.h"

/**
*_memset - Fills the first n bytes of the memory area
*pointed to by s with the constant byte b.
*@s: Pointer to the target memory area.
*@b: Constant byte to fill the memory area with.
*@n: Number of bytes to fill.
*Return: Returns the pointer to the updated target memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
