#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: 1 if the operation succeeded, -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	/* Clear the bit at the index by using bitwise XOR (^) with the mask */
	switch (*n & mask)
	{
		case 0:
		/* Bit is already 0, no need to change */
			break;
		default:
		/* Bit is 1, toggle it to 0 using bitwise XOR (^) */
			*n ^= mask;
	}

	return (1);
}
