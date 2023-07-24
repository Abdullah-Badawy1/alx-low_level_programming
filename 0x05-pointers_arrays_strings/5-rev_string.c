#include "main.h"

/**
 * rev_string - reverses a string to read it from end
 * @s: string to be the beginning
 * Return : return the reverses string
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len1 = 0;

	for (len = 0 ;s[len] != '\0'; len++)
	{
	}
	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
