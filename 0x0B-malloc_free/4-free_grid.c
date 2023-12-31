#include "main.h"

/**
 * free_grid - Frees a 2D array.
 * @grid: Memory block to be freed
 * @height: Height of the array
 *
 * This function frees the memory occupied by a 2D array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
