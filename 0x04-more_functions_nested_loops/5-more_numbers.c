#include "main.h"

/**
 * more_numbers - Prints 10 times
 *the numbers from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int num;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
