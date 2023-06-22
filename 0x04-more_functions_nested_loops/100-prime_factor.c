#include "main.h"

/**
 * main - largest primfactor of 612852475143
 * Return: 0 on success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long lp = -1;
	unsigned long i = 2;

	for (; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			lp = i;
			num /= i;
		}
	}

	if (num > 1)
		lp = num;

	printf("%lu\n", lp);
	return (0);
}
