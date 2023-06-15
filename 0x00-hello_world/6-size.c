#include <stdio.h>
/**
 * main - Entry point
 *
 * print size of various types on the computer it is compiled on
 *
 * Return: 0 on success
 */
int main(void)
{
printf("Size of a char: %lu\n", sizeof(char));
printf("Size of an int: %lu\n", sizeof(int));
printf("Size of a long int: %lu\n", sizeof(long int));
printf("Size of a long long: %lu\n", sizeof(long long));
printf("Size of a float: %lu\n", sizeof(float));
return (0);
}
