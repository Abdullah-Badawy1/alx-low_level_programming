#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to append to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, i;

	/* Check if filename is NULL */
	file_descriptor = (!filename) ? -1 : open(filename, O_APPEND | O_WRONLY);

	/* Check if opening the file failed */
	file_descriptor = (file_descriptor == -1) ? -1 : file_descriptor;

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		write_status = write(file_descriptor, text_content, i);

		write_status = (write_status == -1) ? -1 : write_status;
	}
	close(file_descriptor);
	return ((file_descriptor == -1 || write_status == -1) ? -1 : 1);
}
