#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check97 - Checks number of arguments and exits if incorrect.
 * @argc: Number of arguments.
 */
void check97(int argc)
{
	(argc != 3)
		? (dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97))
		: (void)0;
}

/**
 * check98 - Checks if a file can be read.
 * @check: Result of a check.
 * @file: Name of the file.
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	(check == -1)
		? (dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file),
		   (fd_from != -1) ? close(fd_from) : (void)0,
		   (fd_to != -1) ? close(fd_to) : (void)0,
		   exit(98))
		: (void)0;
}

/**
 * check99 - Checks if a file can be written.
 * @check: Result of a check.
 * @file: Name of the file.
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	(check == -1)
		? (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file),
		   (fd_from != -1) ? close(fd_from) : (void)0,
		   (fd_to != -1) ? close(fd_to) : (void)0,
		   exit(99))
		: (void)0;
}

/**
 * check100 - Checks if a file descriptor was closed properly.
 * @check: Result of a check.
 * @fd: File descriptor.
 */
void check100(int check, int fd)
{
	(check == -1)
		? (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100))
		: (void)0;
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	bytes_read = 1024;
	for (; bytes_read == 1024;)
	{
		bytes_read = read(fd_from, buffer, 1024);
		check98(bytes_read, argv[1], fd_from, fd_to);
		bytes_written = write(fd_to, buffer, bytes_read);
		(bytes_written != bytes_read) ? (bytes_written = -1) : (void)0;
		check99(bytes_written, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}

