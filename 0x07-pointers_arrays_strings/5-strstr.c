#include "main.h"
/**
 * _strstr - Finds the first occurrence of the substring 'needle'
 *           in the string 'haystack'.
 *
 * Description: This function
 * searches for the first occurrence of the substring
 *              'needle' in the string 'haystack'
 *              . The terminating null bytes ('\0')
 *              are not compared in the search.
 *
 * @haystack: The string where the search is made.
 * @needle: The substring whose occurrence is searched in 'haystack'.
 *
 * Return: Returns a pointer to the beginning of
 * the located substring in 'haystack',
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	for (; *haystack; haystack++)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
	}

	return ('\0');
}
