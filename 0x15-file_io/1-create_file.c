#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the file name
 * @text_content: file content
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);

	return (1);
}
