#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 on success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
