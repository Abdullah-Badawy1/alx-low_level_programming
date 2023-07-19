#include "main.h"
/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error,  is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
