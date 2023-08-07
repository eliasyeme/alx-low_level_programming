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
	ssize_t file_opened, file_read;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file_opened = open(filename, O_RDONLY);
	if (file_opened == -1)
	{
		free(buffer);
		return (0);
	}

	file_read = read(file_opened, buffer, letters);
	if (write(STDOUT_FILENO, buffer, file_read) != file_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_opened);

	return (file_read);
}
