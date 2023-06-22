#include "main.h"

/**
 * print_triangle - print right angle triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		for (k = 0; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}
	/**
	 *	if (size <= 0)
	 *		_putchar('\n');
	 */
}
