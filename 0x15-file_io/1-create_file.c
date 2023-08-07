#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 *				-1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fo, len = 0, permission = 0600;

	if (!filename)
		return (-1);

	while (text_content[len])
		len++;

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, permission);
	if (fo == -1 || write(fo, text_content, len) == -1)
		return (-1);

	close(fo);
	return (1);
}
