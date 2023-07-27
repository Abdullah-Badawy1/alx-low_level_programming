#include "holberton.h"

/**
 * leet - encode a string with leetspeak.
 * @s: input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}

	return (s);
}
