#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Count of arguments passed to the function
 * @av: Array of arguments
 *
 * Return: Pointer to the new concatenated string
 * or NULL if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	switch (ac == 0 || av == NULL)
	{
		case 1:
			return (NULL);
	}

	while (ac--)
		sum += (len(av[ac]) + 1);
	new_string = (char *)malloc(sum + 1);

	switch (new_string != NULL)
	{
		case 1:
			for (k = 0; k < i; k++)
			{
				for (j = 0; av[k][j] != '\0'; j++)
				{
					new_string[j + temp] = av[k][j];
				}
				new_string[temp + j] = '\n';
				temp += (j + 1);
			}
			new_string[temp] = '\0';
			break;
		default:
			return (NULL);
	}

	return (new_string);
}

/**
 * len - Returns the length of a string.
 * @str: String to be counted
 * Return: Length of the string.
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		for (len = 0; str[len]; len++)
		{
		}
	}
	return (len);
}
