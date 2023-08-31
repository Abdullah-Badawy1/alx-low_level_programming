#include "main.h"

/**
 * print_binary - Prints the binary
 * representation of a decimal number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i = 63;		/* Start from the highest bit */
	int count = 0;		/* To keep track of non-zero bits */
	unsigned long int current;

	/* Traverse the bits from the most significant to the least significant */
	while (i >= 0)
	{
		current = n >> i;

		switch (current & 1)
		{
			case 1:
				_putchar('1');
				count++;
				break;
			default:
				if (count)
					/* Print only after encountering the first non-zero bit */
					_putchar('0');
		}

		i--;
	}

	/* Print '0' if the number is zero */
	if (!count)
		_putchar('0');
}
