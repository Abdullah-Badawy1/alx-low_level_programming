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
	unsigned int i = 0;

	while (i < n)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		s[i] = b;
		i++;
		return (s);
	}
}
