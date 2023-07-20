#include <stdio.h>

/**
 * main - Prints the largest prime factor of a given number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long inc;

	while (number % 2 == 0)
	{
		number /= 2;
	}

	for (inc = 3; inc <= number / 2; inc += 2)
	{
		while (number % inc == 0)
		{
			number /= inc;
		}
	}

	printf("%ld\n", number);
	return (0);
}
