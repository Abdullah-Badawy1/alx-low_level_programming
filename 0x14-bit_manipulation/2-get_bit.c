#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at the specified index.
 *         If the index is out of range, returns -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	/* Traverse the bits using a loop */
	while (i <= 63)
	{
		if (index == i)
		{
			/* Extract and return the value of the bit at the index */
			switch (n & 1)
			{
				case 0:
					return (0);
				case 1:
					return (1);
			}
		}

		n >>= 1; /* Right-shift to access the next bit */
		i++;
	}

	/* Return -1 for an index out of range */
	return (-1);
}
