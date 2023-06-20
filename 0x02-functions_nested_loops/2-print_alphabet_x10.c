#include "main.h"

/**
 * print_alphabet - print the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
