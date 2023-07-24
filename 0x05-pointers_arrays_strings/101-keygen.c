#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the password generator program.
 * This program generates random
 * valid passwords for a specific use case,
 * where the sum of ASCII values of characters
 * should be close to 2772.
 * It generates 100-character passwords,
 * each character represented as
 * an ASCII value between 0 and 77 (inclusive).
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	putchar('\n');

	return (0);
}
