#include "main.h"
#include <stdio.h>

/**
 * print_hex_buffer -
 * Prints the contents of a buffer in hexadecimal format.
 *
 * Description: This function takes a
 * memory buffer 'buffer' and its size 'size'
 *              and prints the contents in hexadecimal format.
 *              It prints 16 bytes
 *              per line, with a space between every 10 bytes.
 *
 * @buffer: The address of the memory to print.
 * @size: The size of the memory to print.
 */
void print_hex_buffer(char *buffer, unsigned int size)

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	print_hex_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	print_hex_buffer(buffer, 98);
	return (0);
}
