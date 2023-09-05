#include "main.h"

/**
 * read_textfile - Reads a text file
 * and prints a specified number of letters.
 *
 * @filename: The name of the file to open and read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed on success, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t num_letters_read, num_letters_written;
	char *buffer;

	switch (!filename)
	{
		case 1:
			return (0);
		default:
			file_descriptor = open(filename, O_RDONLY);
			break;
	}

	switch (file_descriptor == -1)
	{
		case 1:
			return (0);
		default:
			break;
	}

	buffer = malloc(sizeof(char) * letters);
	switch (!buffer)
	{
		case 1:
			close(file_descriptor);
			return (0);
		default:
			break;
	}
	num_letters_read = read(file_descriptor, buffer, letters);
	num_letters_written = write(STDOUT_FILENO, buffer, num_letters_read);

	close(file_descriptor);
	free(buffer);
	return (num_letters_written);
}
