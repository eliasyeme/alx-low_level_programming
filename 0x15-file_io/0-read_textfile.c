#include "main.h"

/**
 * read_textfile - read text file and print to stdout
 * @filename: file to read from
 * @letters: number of chars to read
 *
 * Return: number of letters it could read and print
 *					0 if file can not be read or opened
 *					0 if write fails or does not write
 *expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fd;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		free(buffer);
		return (0);
	}

	fd = read(fo, buffer, letters);
	if (write(STDOUT_FILENO, buffer, fd) != fd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fo);

	return (fd);
}
