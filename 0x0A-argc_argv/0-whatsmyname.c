#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument number
 * @argv: argument string array
 *
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (EXIT_SUCCESS);
}
