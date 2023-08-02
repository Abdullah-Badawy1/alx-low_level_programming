#include "man.h"

/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * This function takes an integer 'prime' as input and checks if it is a prime
 * number. If 'prime' is less than or equal to 1, the function returns 0.
 * If 'prime' is 2 or a multiple of 2, 3, 5, 7, or 9, the function returns 0.
 * Otherwise, the function returns 1,
 * indicating that 'prime' is a prime number.
 *
 * @prime: The number to be checked for primality.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int prime)
{
	switch (prime)
	{
	case 0:
	case 1:
		return (0);
	case 2:
		return (1);
	case 3:
	case 5:
	case 7:
	case 9:
		return (0);
	default:
		if (prime % 2 == 0 || prime % 3 == 0 || prime % 5 == 0)
			return (0);
		else if (prime % 9 == 0 || prime % 7 == 0)
			return (0);
		else
			return (1);
	}
}
