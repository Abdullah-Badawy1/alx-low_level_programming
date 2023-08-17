#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 *
 * @n: The number of integers to sum.
 * @...: The list of integers to be summed.
 *
 * Return: The sum of the given integers. If n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	int sum;

	sum = 0;
	va_start(ap, n);

	count = 0;
	while (count < n)
	{
		sum += va_arg(ap, int);
		count++;
	}

	va_end(ap);
	return (sum);
}
