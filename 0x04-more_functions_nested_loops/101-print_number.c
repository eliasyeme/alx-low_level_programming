#include "main.h"

/**
 * print_number - print a given number using _putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
	int i, j, k = 1;
	int digit_length = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	i = n;

	if (n / 10 > 0)
	{
		while (i / 10 > 0)
		{
			digit_length++;
			k *= 10;
			i /= 10;
		}
		for (j = digit_length; j > 0; j--)
		{
			_putchar(((n / k) % 10) + '0');
			k /= 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
