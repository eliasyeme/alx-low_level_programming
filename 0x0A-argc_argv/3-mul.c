#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers print the result
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 on success 1 on fail
 */
int main(int argc, char **argv)
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", res);

	return (0);
}
