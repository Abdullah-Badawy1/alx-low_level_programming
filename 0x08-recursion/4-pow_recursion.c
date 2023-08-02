#include "main.h"

/**
 * _pow_recursion -Calculates the value of a base raised to the power of an
 * exponent.
 *
 * This function takes two integers,
 * 'x' and 'y', as input. It uses recursion to
 * calculate the value of 'x' raised to
 * the power of 'y'. The function handles
 * different cases such as when 'y' is
 * 0 (result is 1), 'y' is negative (result is -1),
 * or 'y' is positive
 * (recursively multiplies 'x' with the result of '_pow_recursion'
 * for 'y - 1').
 *
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
