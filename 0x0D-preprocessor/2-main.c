#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of the file it compiled from
 *
 * Return: EXIT_SUCCESS on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
