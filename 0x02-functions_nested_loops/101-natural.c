#include <stdio.h>

/**
 * sum_of_3_or_5 - print the sum of all multiples of 3 or 5
 */
void sum_multiples_of_3_or_5(void)
{
	int sum = 0;
	int i = 0;

	for (; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%d\n", sum);
}
