#include "main.h"
/**
 * _strspn - Searches the number of bytes in the initial segment of 's'
 *           which consist only of bytes from 'accept'.
 *
 * Description: This function iterates
 * through the string 's' and counts the number
 *              of bytes that belong to
 *              the 'accept' string in the initial segment.
 *              The search stops as soon as a
 *              byte in 's' does not match any byte
 *              in the 'accept' string.
 *
 * @s: The segment to be searched.
 * @accept: The reference bytes container.
 *
 * Return: Returns the number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
