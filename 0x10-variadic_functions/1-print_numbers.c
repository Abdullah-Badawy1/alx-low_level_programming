#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a sequence of numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers to print.
 * @...: The list of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);

	count = 0;
	while (count < n)
	{
		printf("%d", va_arg(valist, const unsigned int);
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
		count++;
	}
	printf("\n");
	va_end(valist);
}
