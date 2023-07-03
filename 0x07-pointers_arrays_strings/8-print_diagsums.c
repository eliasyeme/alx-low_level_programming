#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * of square matrix integers
 * @a: square matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + i + i * size);

	for (; i > 0; i--)
		sum2 += *(a + (size * i) - i);

	printf("%d, %d\n", sum1, sum2);
}
