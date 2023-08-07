#include "main.h"

/**
 * match_exit - match exit code to error message
 * @code: error code
 * @fn: file name
 *
 * Return:	exit code
 */
int match_exit(int code, char *fn)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn);
			break;
		default:
			return (0);
	}
	exit(code);
}

/**
 * close_file - handle closing the file
 * @fd: file to close
 *
 * Return:	0 on success
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main - copy file
 * @argc: argument count
 * @argv: argument list
 *
 * Return:	0 on success
 *					exit code on fail
 */
int main(int argc, char *argv[])
{
	int from, to, fr;
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
		match_exit(97, NULL);

	if (!buffer)
		match_exit(99, argv[2]);

	from = open(argv[1], O_RDONLY);
	fr = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || fr == -1)
		{
			free(buffer);
			match_exit(98, argv[1]);
		}

		if (to == -1 || write(to, buffer, fr) == -1)
		{
			free(buffer);
			match_exit(99, argv[2]);
		}

		fr = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (fr > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
