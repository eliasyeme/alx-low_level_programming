#include "main.h"

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	char *word = "_putchar\0";
	int count = 0;
	char first_letter = word[count];

	while (first_letter != '\0')
	{
		_putchar(first_letter);
		count++;
		first_letter = word[count];
	}
	_putchar('\n');
	return (0);
}
