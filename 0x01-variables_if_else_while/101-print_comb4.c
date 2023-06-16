#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 on success
  */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			for (c = b; c <= '9'; c++)
			{
				if (a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a + b + c < '7' + '8' + '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
