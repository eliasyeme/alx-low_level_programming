#include "main.h"

/**
 * _strpbrk - search any byte from @accept in @s
 * @s: input string
 * @accept: acceptable bytes
 *
 * Return: pointer to first match NULL if non found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	return (NULL);
}
