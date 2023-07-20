#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square to be printed.
 *
 * Description: This function prints a square of side length @size using the
 * '#' character. If @size is 0 or negative, it prints only a new line.
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size - 1; col++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
