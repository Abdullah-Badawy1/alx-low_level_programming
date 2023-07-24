#include "main.h"

/**
 * puts2 - prints one every twoof a string
 *
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, i;


	for (len = 0 ; str[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
