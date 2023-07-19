#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program  with
 * print ALPHABET  functionthat prints _putchar, followed by a new line.
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
