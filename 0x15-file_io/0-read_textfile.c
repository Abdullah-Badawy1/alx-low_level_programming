#include "main.h"

/**
 * read_textfile - Read a text file and print a specified number of characters
 *                to the standard output.
 *
 * @filename: The name of the file to open and read.
 * @letters: The number of letters to print to the standard output.
 *
 * Return: The number of characters printed to the standard output on success,
 *         or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *buffer;

	/* Check if filename is NULL */
	(!filename) ? (0) : (fd = open(filename, O_RDONLY));
	if (fd == -1)
		return (0); /* Return 0 if opening the file fails */

	/* Allocate memory for the buffer */
	(!((buffer = malloc(sizeof(char) * letters)))) ? (0) : (0);
	if (!buffer)
	{
		close(fd);
		return (0); /* Return 0 if memory allocation fails */
	}

	((chars_read = read(fd, buffer, letters)) == -1) ? (free(buffer), 0) : (0);

	/* Write to stdout */
	((chars_written =
	write(STDOUT_FILENO, buffer, chars_read)) == -1) ? (free(buffer), 0) : (0);
	close(fd);
	free(buffer);
	return (chars_written);
}
