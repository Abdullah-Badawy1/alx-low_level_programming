#include "holberton.h"

/**
 * print_number - Print an integer number.
 * @n: The number to be printed.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, digit, digits, power;
	unsigned int temp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	for (; number >= 10; number /= 10)
		digit++;

	digits = digit + 1;
	power = 1;
	i = 1;

	for (; i < digits; i++)
		power *= 10;

	for (int j = power; j >= 1; j /= 10)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
	}
}
