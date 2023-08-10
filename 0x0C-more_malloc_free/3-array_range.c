#include "main.h"

/**
 * array_range - Creates an array of integers between min and max (inclusive).
 * @min: Smallest number in the array.
 * @max: Largest value in the array.
 *
 * Return: Pointer to the address of the memory block containing the array.
 */
int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	switch (min > max)
	{
		case 1:
			return (NULL);

		default:
			block = malloc(sizeof(*block) * ((max - min) + 1));

			if (block != NULL)
			{
				for (i = min; i <= max; i++)
				{
					block[j] = i;
					j++;
				}
				return (block);
			}
			else
				return (NULL);
	}
}
