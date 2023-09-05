#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read and print.
 *
 * Return: The actual number of letters
 * it could read and print, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *text_buffer;

	if (filename == NULL)
		return (0)
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	text_buffer = malloc(sizeof(char) * letters);
	switch (text_buffer == NULL)
	{
		case 1:
			close(file_descriptor);
			return (0);
	}
	bytes_read = read(file_descriptor, text_buffer, letters);
	switch (bytes_read)
	{
		case -1:
			close(file_descriptor);
			free(text_buffer);
			return (0);
	}
	bytes_written =
	write(STDOUT_FILENO, text_buffer, bytes_read);
	switch (bytes_written == -1 || bytes_written != bytes_read)
	{
		case 1:
			close(file_descriptor);
			free(text_buffer);
			return (0);
	}
	close(file_descriptor);
	free(text_buffer);
	return (bytes_written);
}
