#include <unistd.h>

/**
  * _putchar - write character c to stdout
  * @c: Character to print
  * Return: 1 on success
  */
int _putchar(char c)
{
	write(STDIN_FILENO, &c, 1);
	return (1);
}
