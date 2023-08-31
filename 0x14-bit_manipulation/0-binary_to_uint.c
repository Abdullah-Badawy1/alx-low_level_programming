#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number
 * If `b` is not a valid binary string, returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len = 0;
	int i = 0;
	int decval = 1;

	if (!b)
		return (0);

	/* Calculate the length of the string */
	while (b[len] != '\0')
		len++;

	/* Traverse the string in reverse and convert to decimal */
	i = len - 1;
	while (i >= 0)
	{
		switch (b[i])
		{
			case '0':
				/* No need to add for '0' */
				break;
			case '1':
				total += decval;
				break;
			default:
				/* Invalid character, return 0 */
				return (0);
		}
		decval *= 2;
		i--;
	}

	return (total);
}
