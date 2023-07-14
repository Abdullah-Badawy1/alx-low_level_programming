#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point 
 * Description: positive and negative
 * Return: 0 (success) 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}
