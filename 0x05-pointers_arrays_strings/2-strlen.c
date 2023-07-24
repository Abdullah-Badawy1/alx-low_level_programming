#include "main.h"

/**
 * _puts - show some character to stdout
 * @s: pointer's paramter
 * Return : return string
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
