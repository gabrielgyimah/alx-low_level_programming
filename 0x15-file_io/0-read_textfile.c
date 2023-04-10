#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * 
 * @filename: file name
 * @letters: letters
 *
 * Return: length of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	int rfd;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(*buffer) * letters + 1);

	if (!buffer)
	{
		free(buffer);
		buffer = NULL;
		return (0);
	}
	rfd = read(fd, buffer, letters);

	if (rfd < 0)
	{
		free(buffer);
		buffer = NULL;
		return (0);
	}
	buffer[letters + 1] = '\0';
	close(fd);
	n = write(STDOUT_FILENO, buffer, rfd);

	if (n < 0)
	{
		free(buffer);
		buffer = NULL;
		return (0);
	}

	free(buffer);
	buffer = NULL;
	return (n);
}
