#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: The number of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0.
 **/

int main(int argc, char *argv[])
{
	int mult = 0;
	char c[] = "Error";

	switch (argc)
	{
		case 1:
		case 2:
		case 4:
			printf("%s\n", c);
			return (1);

		case 3:
			mult = atoi(argv[1]) * atoi(argv[2]);
			printf("%i\n", mult);
			return (0);

		default:
			printf("Unexpected number of arguments.\n");
			return (1);
	}
}
