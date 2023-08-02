#include "main.h"
/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * This function takes an integer 'prime' as input and determines whether it
 * is a prime number. If 'prime' is less than or equal to 1, the function
 * returns 0. If 'prime' is equal to 2, the function returns 1 as 2 is a prime
 * number. For other numbers, the function uses switch conditions to check if
 * 'prime' is divisible by 2, 3, or 5. If 'prime' is divisible by any of these
 * numbers, it means it has divisors other than 1 and itself, so the function
 * returns 0 to indicate that 'prime' is not a prime number. Otherwise, the
 * function returns 1, indicating that 'prime' is a prime number.
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
		default:
			if (prime % 2 == 0 || prime % 3 == 0 || prime % 5 == 0)
				return (0);
			else if (prime % 9 == 0 || prime % 7 == 0)
				return (0);
			else
				return (1);
	}
}
