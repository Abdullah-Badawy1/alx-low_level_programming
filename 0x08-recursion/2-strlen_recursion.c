#include "main.h"
/**
 * _strlen_recursion - Computes the length of a string using recursion.
 *
 * This function takes a pointer to a string as input and recursively counts
 * the number of characters in the string until it reaches the null terminator
 * ('\0'). By incrementally moving the pointer to the next character, the
 * function keeps track of the number of characters encountered and returns
 * the final length of the string.
 *
 * @s: Pointer to the input string for which the length is to be computed.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
