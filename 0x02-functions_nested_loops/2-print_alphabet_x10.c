#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a program  with
 * alphabet loop functionthat prints _putchar, followed by a new line.
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{

	for (int i = 0 ; i < 10 ; i++)
	{
		for (char ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
