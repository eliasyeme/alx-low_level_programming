#include "main.h"

/**
 * _abs - return the absolute value of an input
 * @n: number to be to be converted
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
