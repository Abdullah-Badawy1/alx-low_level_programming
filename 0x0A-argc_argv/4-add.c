#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers given as command-line arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the arguments.
 *
 * Return: Always returns 0.
 **/

int main(int argc, char *argv[])
{
	int i, suma = 0, res = 0;
	char c[] = "Error", *find_letter;

	switch (argc)
	{
		case 1:
			printf("%d\n", 0);
			return (0);

		default:
			for (i = 1; i < argc; i++)
			{
				find_letter = argv[i];
				while (*find_letter != 0)
				{
					switch (*find_letter)
					{
						case '0': case '1': case '2': case '3': case '4':
						case '5': case '6': case '7': case '8': case '9':
							break;
						default:
							printf("%s\n", c);
							return (1);
					}
					find_letter++;
				}
				res = atoi(argv[i]);
				suma += res;
			}
			printf("%d\n", suma);
			return (0);
	}
}
