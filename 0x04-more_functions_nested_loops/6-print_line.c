#include "main.h"

/**
 * print_line - draw @n length line
 * @n: number of times _ character will be printed
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');

	_putchar('\n');
}
