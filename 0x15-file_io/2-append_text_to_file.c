#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: fiel name
 * @text_content: text
 *
 * Return: success(1) / failure (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file_descriptor = open(filename, O_RDWR | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	write(file_descriptor, text_content, strlen(text_content));

	close(file_descriptor);

	return (1);
}
