#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 on success
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;

		putchar(a);
	}

	putchar('\n');

	return (0);
}
