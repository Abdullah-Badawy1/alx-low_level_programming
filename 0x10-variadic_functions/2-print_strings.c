#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints a sequence of strings, followed by a new line.
 *
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings to print.
 * @...: The list of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);
	count = 0;
	while (count < n)
	{
		char *s;

		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);

		count++;
	}

	printf("\n");
	va_end(ap);
}
