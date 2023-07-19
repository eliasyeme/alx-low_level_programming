#include <stdlib.h>
#include "3-calc.h"
/**
 * main - perform arithmetic operations
 * @argc: argument count
 * @argv: argument value
 *
 * Return: EXIT_SUCCESS on success
 */
int main(int argc, char **argv)
{
	int (*res)(int, int);
	int a, b;
	char opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opp = *argv[2];

	res = get_op_func(argv[2]);

	if (res == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0) && (opp == '/' || opp == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res(a, b));

	return (EXIT_SUCCESS);
}
