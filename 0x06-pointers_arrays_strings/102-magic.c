#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: The main function serves as the entry point of the program.
 * It initializes an array "a" of 5 integers, sets the value of the 3rd element
 * to 1024, and then attempts to access the 6th element of the integer pointer
 * "p" to store the value 98. Note that modifying the pointer "p" directly in
 * this manner leads to undefined behavior since it is not pointing to a valid
 * array of sufficient size.
 *
 * Return: Always 0 (indicating successful execution).
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Write your line of code here...
	 * Remember:
	 * - You are not allowed to use the "a" array directly.
	 * - You are not allowed to modify the "p" pointer.
	 * - Use pointer arithmetic to access the required location.
	 * - Only one statement is allowed.
	 * - You are not allowed to code anything else than this line of code.
	 */
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
