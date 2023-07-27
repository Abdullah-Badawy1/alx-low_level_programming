#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 * Return: Pointer to the result string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > size_r || j > size_r)
		return (0);

	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';

		if (i < 0 && j < 0 && n == 0)
			break;

		m = n / 10;
		r[k] = n % 10 + '0';
	}

	r[k] = '\0';

	if (i >= 0 || j >= 0 || m)
		return (0);

	while (k > l)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
		k--;
		l++;
	}

	return (r);
}
