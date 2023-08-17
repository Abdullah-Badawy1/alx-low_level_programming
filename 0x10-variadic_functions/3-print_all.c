#include <stdio.h>
#include <stdarg.h>
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
	int i;

	i = 0;
	va_start(vl, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			printf("%i", va_arg(vl, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(vl, double));
		}
		else if (format[i] == 'c')
		{
			printf("%c", (char) va_arg(vl, int));
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
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
