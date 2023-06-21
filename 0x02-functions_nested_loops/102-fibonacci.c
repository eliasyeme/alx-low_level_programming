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
	int i = 0;

	for (; i < 50; i++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		printf("%lu", next);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
