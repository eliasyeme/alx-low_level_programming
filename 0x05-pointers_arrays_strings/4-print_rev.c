#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
