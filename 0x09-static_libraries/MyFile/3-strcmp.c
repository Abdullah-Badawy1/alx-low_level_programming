#include "main.h"

/**
 * _strcmp - compare 2 strings.
 * @s1: first string to be compared.
 * @s2: second string for comparison.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++, s2++)
		;

	if (*s1 == *s2)
		diff = 0;
	else
		diff = *s1 - *s2;

	return (diff);
}
