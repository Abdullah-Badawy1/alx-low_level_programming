#include "main.h"

/**
 * rev_string - reverses a string to read it from end
 * @s: string to be the beginning
 * Return : return the reverses string
 */
void rev_string(char *s)
{
	int i, j;

	while (s[i] != '\0')
		i++;
	for (int j = i; s[j + 1] != s[0]; j--)
		putchar(s[j]);
}
