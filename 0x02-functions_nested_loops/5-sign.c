#include "main.h"

/**
 * print_sign - print a sign of a number
 * @n: number to be checked
 * Return: 1 if @n is greater than -1 if less 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
