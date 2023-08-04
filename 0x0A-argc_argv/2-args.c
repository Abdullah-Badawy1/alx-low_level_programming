#include <stdio.h>
/**
 * main - Entry point of the program that prints all arguments it receives.
 * @argc: The number of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
