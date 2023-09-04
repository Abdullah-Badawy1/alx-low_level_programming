#include "main.h"

/**
 * create_file - Create a file with read/write access for the user.
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, i;

	/* Check if filename is NULL */
	file_descriptor = (!filename) ? -1 :
	open(filename, O_CREAT | O_WRONLY |
	O_TRUNC, S_IRUSR | S_IWUSR);

	/* Check if opening the file failed */
	file_descriptor = (file_descriptor == -1) ? -1 : file_descriptor;

	if (text_content)
	{
		/* Calculate the length of the text_content */
		for (i = 0; text_content[i]; i++)
			;

		/* Write the text_content to the file */
		write_status = write(file_descriptor, text_content, i);

		/* Check if writing to the file failed */
		write_status = (write_status == -1) ? -1 : write_status;
	}

	/* Clean up and return 1 on success or -1 on failure */
	close(file_descriptor);
	return ((file_descriptor == -1 || write_status == -1) ? -1 : 1);
}
