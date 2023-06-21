#include "main.h"

/**
 * main - first 50 fibonacci
 * Return: 0 on sucess
 */
int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long next;
	unsigned long sum;
	int i = 0;

	for (; i < 50; i++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

	}
	printf("%lu\n", sum);
	return (0);
}
