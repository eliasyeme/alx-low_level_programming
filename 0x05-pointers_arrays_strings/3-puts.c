#include "main.h"

/**
 * _puts - write string followed by new line to stdout
 * @str: string to be printed to stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
