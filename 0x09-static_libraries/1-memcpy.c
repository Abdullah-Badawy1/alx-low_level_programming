#include "main.h"
/**
 * _memcpy - Copies 'n' bytes from the memory area
 * pointed to by 'src' to the memory area pointed to by 'dest'.
 *
 * Description: This function copies 'n'
 * bytes from the source memory area 'src'
 *              to the destination memory area 'dest'.
 *
 * @dest: Pointer to the destination memory area where bytes are copied to.
 * @src: Pointer to the source memory area where bytes are copied from.
 * @n: Number of bytes to copy.
 *
 * Return: Returns a pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
