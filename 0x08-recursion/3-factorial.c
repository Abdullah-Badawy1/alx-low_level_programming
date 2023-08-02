#include "main.h"

/**
 * factorial - Computes the factorial of a given number using recursion.
 *
 * This function takes an integer as input and recursively calculates the
 * factorial of the number. The factorial of a non-negative integer 'n' is
 * defined as the product of all positive integers less than or equal to 'n'.
 * The factorial of 0 is 1. If the input number is negative, the function
 * returns -1 to indicate an error.
 *
 * @n: The integer for which the factorial is to be computed.
 *
 * Return: The factorial of the given number, or -1 if the number is negative.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
