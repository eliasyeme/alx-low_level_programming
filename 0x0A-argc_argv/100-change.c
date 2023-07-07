#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins neede for change
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 on success 1 on fail
 */
int main(int argc, char **argv)
{
	int i, total, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[argc - 1]);

	for (i = 0; i < 5; i++)
	{
		if (total >= coins[i])
		{
			change += total / coins[i];
			total %= coins[i];
		}
	}

	printf("%d\n", change);

	return (0);
}
