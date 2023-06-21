#include "main.h"

/**
 * main - print the sum of all multiples of 3 or 5
 * Return: 0 on sucess
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	for (; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	printf("%d\n", sum);
	return (0);
}
