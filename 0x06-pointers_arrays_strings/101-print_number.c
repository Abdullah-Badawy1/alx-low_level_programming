#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: The main function serves as the entry point of the program.
 * It is automatically called when the program is executed. It may contain
 * the main logic of the program, including function calls, variable
 * declarations, and program flow control. The return value of the main
 * function is used as the exit status of the program, where a return value
 * of 0 typically indicates successful execution, and a non-zero value
 * indicates an error or abnormal termination.
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
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
