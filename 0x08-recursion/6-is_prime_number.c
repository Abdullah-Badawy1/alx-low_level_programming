#include "main.h"

/**
 * my_sqrt_recursion - Recursive function to find the square root of a number.
 *
 * This function is a helper function
 * used by '_sqrt_recursion' to recursively
 * find the square root of a given number 'a'.
 * It compares the square of 'b'
 * with 'a' and returns 'b' when the square of
 * 'b' is equal to 'a'. If the square
 * of 'b' exceeds 'a', the function
 * returns -1, indicating that 'a' doesn't have
 * a perfect square root. Otherwise, it increments 'b' and recursively calls
 * itself to continue the search for the square root.
 *
 * @a: The number for which the square root is being searched.
 * @b: The current value to be squared and compared to 'a'.
 *
 * Return: The square root of 'a' if it exists, or -1 if it doesn't have a
 *         perfect square root.
 */
int my_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (my_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a non-negative number.
 *
 * This function takes an integer 'n' as input and calculates the square root
 * of 'n' using a recursive helper function 'my_sqrt_recursion'. If 'n' is less
 * than or equal to 0, the function returns -1 to indicate an error. Otherwise,
 * it calls the 'my_sqrt_recursion' function with 'n' and an initial value of 0
 * for 'b' to find the square root.
 *
 * @n: The non-negative number for which the square root is to be calculated.
 *
 * Return: The square root of 'n'
 * if it exists, or -1 if 'n' is negative or
 *         doesn't have a perfect square root.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
