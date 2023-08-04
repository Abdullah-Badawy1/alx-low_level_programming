#include <stdio.h>

/**
 * main - Entry point of the program
 * that prints its own name, followed by a new line
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the arguments passed to the program
 *
 * Return: Always returns 0 to indicate successful execution
 **/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("Program name: %s\n", argv[0]);
	return (0);
}
