#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *bytePointer;

	bytePointer = (char *)&check;

	/* Byte-order of multi-byte data types determines endianness */
	switch (*bytePointer)
	{
		case 0:
			/* Most significant byte (MSB) is 0, so little-endian */
			return (1);
		default:
			/* MSB is 1, so big-endian */
			return (0);
	}
}
