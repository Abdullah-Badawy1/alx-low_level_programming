#include "main.h"
#include <stdlib.h>

/**
 * Splits string into word array.
 * @str: Input string.
 * @height: Pointer for array height.
 */
char **split_string(char *str, unsigned int *height)
{
	unsigned int c, i, j, word_start;

	for (c = *height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			(*height)++;
	}

	char **word_array = malloc((*height + 1) * sizeof(char *));

	if (word_array == NULL || *height == 0)
		return (NULL);

	for (i = word_start = 0; i < *height; i++)
	{

		for (j = 0; word_start <= c; word_start++, j++)
			word_array[i][j] = str[word_start];
		word_array[i][j] = '\0';
	}

	word_array[i] = NULL;
	return (word_array);
}

/**
 * Frees memory for word array.
 * @word_array: Array of words.
 * @height: Height of array.
 */
void free_word_array(char **word_array, unsigned int height)
{
	if (word_array != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(word_array[height]);
		free(word_array[height]);
		free(word_array);
	}
}

/**
 * Entry point to split string into word array.
 * @str: Input string.
 * Return: Pointer to word array, NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	unsigned int height;

	char **word_array = split_string(str, &height);

	if (word_array == NULL || height == 0)
		return (NULL);

	return (word_array);
}
