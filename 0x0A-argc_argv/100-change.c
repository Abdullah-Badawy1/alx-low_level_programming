#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change for an amount of money.
 * @argc: Number of arguments.
 * @argv: Array with the arguments.
 *
 * Return: Always returns 0.
 **/

int main(int argc, char *argv[])
{
	int dev = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}

	dev = atoi(argv[1]);

	while (dev >= 25)
	{
		dev -= 25;
		coins++;
	}

	while (dev >= 10)
	{
		dev -= 10;
		coins++;
	}

	while (dev >= 5)
	{
		dev -= 5;
		coins++;
	}

	while (dev >= 2)
	{
		dev -= 2;
		coins++;
	}

	switch (dev)
	{
		case 1:
			coins++;
			break;
		default:
			break;
	}

	printf("%d\n", coins);
	return (0);
}
