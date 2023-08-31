#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *bytePointer = (char *)&check;

	if (*bytePointer)
	{
		/* MSB is non-zero, so little-endian */
		return (1);
	}
	else
	{
		/* MSB is zero, so big-endian */
		return (0);
	}
}
