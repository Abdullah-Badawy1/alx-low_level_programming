#include "main.h"

/**
 * _puts - show some character to stdout
 * @str: pointer's paramter
 * Return : return string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
