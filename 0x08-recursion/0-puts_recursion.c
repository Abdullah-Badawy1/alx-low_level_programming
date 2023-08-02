#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion, followed by a new line.
 *
 * This function takes a pointer to a string as input and recursively prints
 * each character of the string until it reaches the null terminator ('\0').
 *	When the end of the string is reached, a newline character is printed to
 *	signify the end of the string.
 *
 * @s: Pointer to the input string to be printed.
 */
void _puts_recursion(char *s)

	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
