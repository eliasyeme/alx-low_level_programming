#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;

	for (; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
