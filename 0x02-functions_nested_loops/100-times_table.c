#include "main.h"

/**
 * print_times_table - print 9 times table
 * @n: n times table
 */
void print_times_table(int n)
{
	int x;
	int y;

	for (x = 0; x <= n; x++)
	{
		if (n >= 15 || n < 0)
			break;
		for (y = 0; y <= n; y++)
		{
			int mult = (x * y);

			if (mult <= 9)
			{
				if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else if (mult <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 100) + '0');
				_putchar(((mult % 100) / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (y != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
