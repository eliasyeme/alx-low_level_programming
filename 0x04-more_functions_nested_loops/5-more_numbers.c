#include "main.h"

/**
 * more_numbers - print numbers 0-14 ten times
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;

			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}

}
