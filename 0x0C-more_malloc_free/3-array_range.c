#include "main.h"

/**
 * custom_array_range - Creates an array of integers within a specified range.
 * @minimum: The smallest number in the array.
 * @maximum: The largest value in the array.
 *
 * Return: If successful, returns a pointer to the allocated memory block.
 *         If memory allocation fails or min > max, returns NULL.
 */
int *custom_array_range(int minimum, int maximum)
{
	int *integer_array;
	int i, index = 0;

	if (minimum > maximum)
		return (NULL);

	integer_array = malloc(sizeof(*integer_array) * ((maximum - minimum) + 1));

	if (integer_array != NULL)
	{
		for (i = minimum; i <= maximum; i++)
		{
			integer_array[index] = i;
			index++;
		}
		return (integer_array);
	}
	else
	{
		return (NULL);
	}
}
