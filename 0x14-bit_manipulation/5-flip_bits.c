#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;	/* Start from the highest bit */
	unsigned int count = 0;
	unsigned long int current;
	unsigned long int difference = n ^ m;

	/* Traverse the bits from the most significant to the least significant */
	while (i >= 0)
	{
		current = difference >> i;

		switch (current & 1)
		{
			case 1:
				count++;
				break;
			default:
				/* No change needed for 0 bits */
				break;
		}

		i--;
	}

	return (count);
}
