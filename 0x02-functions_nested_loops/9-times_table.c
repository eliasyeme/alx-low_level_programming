#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int mult = (x * y);

			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
