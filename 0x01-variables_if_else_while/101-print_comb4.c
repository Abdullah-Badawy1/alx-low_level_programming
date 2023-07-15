#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * Numbers range from 0 to 99
 * The two numbers are separated by a space
 * All numbers are printed with two digits (e.g., 01, 09)
 * Combinations of numbers are separated by comma, followed by a space
 * Combinations of numbers are printed in ascending order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
