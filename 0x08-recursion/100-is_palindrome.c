#include "main.h"

/**
 * get_length - Calculate the length of a string.
 *
 * This function takes a string
 * 's' and recursively calculates its length.
 *
 * @s: The input string.
 * Return: The length of the string.
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - Check if a string is a palindrome.
 *
 * This recursive function takes a string 's' and two indices 'start' and 'end'
 * to check if the characters at
 * the start and end indices match. It uses switch
 * conditions to handle different cases,
 * comparing characters and recursing further.
 *
 * @s: The input string.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{

	switch (end - start)
	{
		case 0: /* Single character, always a palindrome */
			return (1);
		case 1: /* Two characters, check if they match */
			return (s[start] == s[end]);
		default: /* Multiple characters, compare and recurse */
			if (s[start] == s[end])
				return (check_palindrome(s, start + 1, end - 1));
			else
				return (0);
	}
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * This function takes a string 's'
 * and determines if it is a palindrome using
 * the 'check_palindrome' function with
 * appropriate starting and ending indices.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = get_length(s);

	if (length <= 1)
		return (1);
	return (check_palindrome(s, 0, length - 1));
}
