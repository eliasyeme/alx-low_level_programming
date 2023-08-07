#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: file to append to
 * @text_content: NULL terminated string to append at the end
 *
 * Return: 1 on success
 *				-1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, len = 0;

	if (!filename)
		return (-1);

	while (text_content[len])
		len++;

	fo = open(filename, O_WRONLY | O_APPEND);

	if (fo == -1 || write(fo, text_content, len) == -1)
		return (-1);

	close(fo);
	return (1);
}
