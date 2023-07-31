#include "main.h"

/**
 * _memset - Fills a given memory area with a specified byte value.
 *
 * Description: This function fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'b'.
 *
 * @s: Pointer to the target memory area.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: Returns a pointer to the updated target memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
