#include "main.h"

/**
 * find_square_root - Finds the square root of a number using recursion.
 *
 * This function is a helper function that recursively finds the square root
 * of a given number 'a' by incrementing the value 'b' and checking if 'b'
 * squared equals 'a'. If the square root is found, it returns the square root.
 * If the square root is not an integer or 'a' is less than zero, the function
 * returns -1.
 *
 * @a: The number for which the square root is to be found.
 * @b: The current value to be squared and compared to 'a'.
 *
 * Return: The square root of 'a' if it is a perfect square, or -1 otherwise.
 */
int find_square_root(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (find_square_root(a, b + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a non-negative number.
 *
 * This function takes an integer 'n' as input and calculates the square root
 * of 'n' using a helper function 'find_square_root'. If 'n' is negative or the
 * square root is not an integer,
 * the function returns -1. Otherwise, it returns
 * the square root of 'n'.
 *
 * @n: The non-negative number for which the square root is to be calculated.
 *
 * Return: The square root of 'n' if it is a perfect square, or -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_square_root(n, 0));
}
