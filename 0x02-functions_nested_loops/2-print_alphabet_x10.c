#include "main.h"

/**
 * print_alphabet_x10 - Entry point 
 */

void print_alphabet_x10(void)
{
	char chae1;
	int w;

	w = 0;

	while (w < 10)
	{
		chae1 = 'a';
		while (chae1 <= 'z')
		{
			_putchar(chae1);
			chae1++;
		}
		_putchar('\n');
		w++;
	}
}
