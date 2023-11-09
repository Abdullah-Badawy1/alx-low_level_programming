#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_char - Finds the largest ASCII
 * value among characters in a string.
 *
 * @username: The string containing characters.
 * @length: The length of the string.
 * Return: The largest ASCII value.
 */
int find_largest_char(char *username, int length)
{
	int current_char;
	int largest_char;
	unsigned int random_number;

	current_char = *username;
	largest_char = 0;

	for (int i = 0; i < length; i++)
	{
		if (current_char < username[i])
			current_char = username[i];
	}

	srand(current_char ^ 14);
	random_number = rand();

	return (random_number & 63);
}

/**
 * multiply_chars - Multiplies each character in a string.
 *
 * @username: The string containing characters.
 * @length: The length of the string.
 * Return: The result of multiplying characters.
 */
int multiply_chars(char *username, int length)
{
	int result;
	int current_char;

	result = current_char = 0;

	for (int i = 0; i < length; i++)
	{
		result = result + username[i] * username[i];
	}

	return (((unsigned int)result ^ 239) & 63);
}

/**
 * generate_random_char - Generates a random character based on the username.
 *
 * @username: The string containing characters.
 * Return: A random character.
 */
int generate_random_char(char *username)
{
	int random_char;
	int iterations = 0;

	for (int i = 0; i < *username; i++)
	{
		random_char = rand();
		iterations++;
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, current_char, iterations;
	long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- Function 1 ----------- */
	keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];
	/* ----------- Function 2 ----------- */
	current_char = iterations = 0;
	for (int i = 0; i < length; i++)
	{
		current_char = current_char + argv[1][i];
		iterations++;
	}
	keygen[1] = ((char *)alphabet)[(current_char ^ 79) & 63];
	/* ----------- Function 3 ----------- */
	current_char = 1;
	for (int i = 0; i < length; i++)
	{
		current_char = argv[1][i] * current_char;
		iterations++;
	}
	keygen[2] = ((char *)alphabet)[(current_char ^ 85) & 63];
	/* ----------- Function 4 ----------- */
	keygen[3] = ((char *)alphabet)[find_largest_char(argv[1], length)];
	/* ----------- Function 5 ----------- */
	keygen[4] = ((char *)alphabet)[multiply_chars(argv[1], length)];
	/* ----------- Function 6 ----------- */
	keygen[5] = ((char *)alphabet)[generate_random_char(argv[1])];
	keygen[6] = '\0';

	for (current_char = 0; keygen[current_char]; current_char++)
		printf("%c", keygen[current_char]);

	return (0);
}
