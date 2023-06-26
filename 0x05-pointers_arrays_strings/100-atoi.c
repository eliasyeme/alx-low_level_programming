#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 * Return: converted integer, 0 if there are no digits
 */
int _atoi(char *s)
{
	int i, num = 0, j = 1, len = 0;

	while (s[len] != '\0')
		len++;


	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			j *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			j *= 10;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			j /= 10;
			num += (s[i] - '0') * j;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}

	return (num);
}
