#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Prints values based on the provided format.
 *
 * @format: The format specifying the types of values to print.
 *          'c': char
 *          'i': integer
 *          'f': float
 *          's': char * (if the string is NULL, print (nil) instead)
 *          Any other char is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	char *string;
	int i;

	va_start(vl, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(vl, int));
				break;
			case 's':
				string = va_arg(vl, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[(i + 1)] != '\0')
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(vl);
}
