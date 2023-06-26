#include "main.h"

/**
 * puts2 - print every other charachter
 * @str: input string
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);

		count++;
	}
	_putchar('\n');
}
