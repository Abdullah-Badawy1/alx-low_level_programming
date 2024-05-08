#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		separator = NULL;
	va_list args;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		
		int x = va_arg(args, int);
		printf("%d", x);
		if (i < (n - 1) )
			printf("%c ", *separator);
	}
	printf("\n");
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
