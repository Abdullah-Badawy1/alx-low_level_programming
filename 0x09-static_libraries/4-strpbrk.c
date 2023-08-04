#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in the string 's'
 *            of any of the bytes in the string 'accept'.
 *
 * Description: This function iterates through the string 's'
 *              and searches for the first occurrence of any byte
 *              in the string 'accept'. If found, it returns a
 *              pointer to that location in the 's' string. If no
 *              such byte is found, it returns NULL.
 *
 * @s: The string where the search is made.
 * @accept: The string where the searched bytes are located.
 *
 * Return: Returns a pointer to the byte in
 * 's' that matches
 *         one of the bytes in 'accept', or NULL
 *         if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
	}

	return ('\0');
}
