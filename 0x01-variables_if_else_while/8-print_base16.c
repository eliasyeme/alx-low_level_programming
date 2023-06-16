#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 on success
  */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
