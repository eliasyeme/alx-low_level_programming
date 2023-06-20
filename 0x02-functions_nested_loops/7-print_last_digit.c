#include "main.h"

/**
 * print_last_digit - return the last value of a digit
 * @n: number to be to be proccessed
 * Return: last digit of @n
 */
int print_last_digit(int n)
{

	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
