#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the allocated array or NULL
 * if width or height is zero or if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					array[i][j] = 0;
				}
			}
			else
			{
				int k;

				for (k = i - 1; k >= 0; k--)
				{
					free(array[k]);
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
