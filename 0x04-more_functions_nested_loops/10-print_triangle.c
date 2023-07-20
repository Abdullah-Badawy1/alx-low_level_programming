#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle using the '#' character.
 * @size: The size of the triangle to be printed.
 *
 * Description: This function prints a right-angled triangle of height and base
 * equal to @size using the '#' character. If @size is 0 or negative, it prints
 * only a new line.
 */
void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for (inc2 = size - inc1; inc2 > 0; inc2--)
				_putchar(' ');

			for (inc2 = 0; inc2 < inc1; inc2++)
				_putchar('#');

			if (inc1 == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
