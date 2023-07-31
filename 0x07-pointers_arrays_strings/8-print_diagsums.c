#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * Description: This function takes a square matrix
 * of integers represented by a 1D array
 *              and calculates the sum of its two diagonals.
 *              The results are then printed
 *              to the console.
 *
 * @a: Pointer to the matrix (1D array) to be summed.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size * size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
