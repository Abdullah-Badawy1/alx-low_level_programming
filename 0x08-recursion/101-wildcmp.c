#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if
 * they can be considered identical,
 *           otherwise returns 0.
 *
 * This function compares two strings,
 * 's1' and 's2', with the possibility of
 * the 's2' string containing the wildcard character
 * '*'. The function recursively
 * compares characters from both strings and handles
 * the wildcard condition using
 * switch conditions. If the strings can be considered
 * identical, the function
 * returns 1; otherwise, it returns 0.
 *
 * @s1: The first string to compare.
 * @s2: The second string that may contain the wildcard character '*'.
 *
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	switch (*s1)
	{
		case '\0': /* Both strings are at the end, considered identical */
			if (*s2 == '\0')
				return (1);
			else if (*s2 == '*' && *(s2 + 1) != '\0')
				return (wildcmp(s1, s2 + 1));
			return (0);

		default: /* Compare characters */
			if (*s1 == *s2)
				return (wildcmp(s1 + 1, s2 + 1));

			switch (*s2)
			{
				case '*': /* Handle the wildcard '*' */
					if (*(s2 + 1) != '\0')
						return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
					return (0);

				default: /* Characters don't match */
					return (0);
			}
	}
}
