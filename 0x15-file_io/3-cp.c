#include "main.h"
#include <stdio.h>

/**
 * check_file_error - Check and handle errors related to file operations.
 * @file_descriptor: File descriptor to check.
 * @filename: Name of the file being operated on.
 * @mode: 'read' or 'write' mode for error message.
 */
void check_file_error(int file_descriptor,
		const char *filename, const char *mode)
{
	(file_descriptor == -1) ? (dprintf(STDERR_FILENO,
		"Error: Can't %s from file %s\n", mode, filename), exit(98)) : (void)0;
}

/**
 * main - Entry point for the cp (copy) program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_fd, target_fd, close_result;
	ssize_t num_read, num_written;
	char buffer[1024];

	switch (argc)
	{
		case 3:
			break;
		default:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	target_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file_error(source_fd, argv[1], "read");
	check_file_error(target_fd, argv[2], "write");

	for (num_read = 1024; num_read == 1024;
			num_read = read(source_fd, buffer, 1024))
	{
		check_file_error(num_read, argv[1], "read");

		num_written = write(target_fd, buffer, num_read);
		(num_written == -1) ? (check_file_error(num_written,
					argv[2], "write"), (void)0) : (void)0;
	}

	close_result = close(source_fd);
	(close_result == -1) ? (dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", source_fd), exit(100)) : (void)0;

	close_result = close(target_fd);
	(close_result == -1) ? (dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", target_fd), exit(100)) : (void)0;

	return (0);
}
