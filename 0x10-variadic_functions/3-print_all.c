#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Prints values based on the provided format.
 *
 * @format: The format specifying the types of values to print.
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	char *string;
	int i = 0;
	bool separator = false;

	va_start(vl, format);
	while (format != NULL && format[i] != '\0')
	{
		if (separator)
			printf(", ");
		separator = true;

		if (format[i] == 'c')
		{
			printf("%c", va_arg(vl, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(vl, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float) va_arg(vl, double));
		}
		else if (format[i] == 's')
		{
			string = va_arg(vl, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
