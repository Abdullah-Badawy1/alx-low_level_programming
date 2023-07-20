#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 (excluding 2 and 4),
 *                       followed by a new line.
 */
void print_most_numbers(void)
{
	char num;
	char numbers[] = "01356789";

	for (num = 0; num < 9; num++)
	{
	_putchar(numbers[num]);
	}
	_putchar('\n');
}
