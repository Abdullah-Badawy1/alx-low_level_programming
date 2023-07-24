#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string paramter for the function
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len;


	for  (i = 0 ; s[i] != '\0'; i++)
	{
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
