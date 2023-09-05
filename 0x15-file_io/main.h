#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters written.
 */
int _putchar(char c);

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read and print.
 *
 * Return: The actual number of letters
 * it could read and print, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a file with a specific content.
 * @filename: Name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: Name of the file to append to.
 * @text_content: The content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * _strlen - Computes the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

#endif
