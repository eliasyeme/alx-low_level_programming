#include "main.h"

/**
 * print_array - print specified elents of an array
 * @a: input array
 * @n: number of element
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);

		printf("%d\n", a[n - 1]);
	}
}
