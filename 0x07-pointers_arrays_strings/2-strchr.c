#include "main.h"

/**
 * _strchr - locate the first occurrence of a
 * character in a string
 * @s: input string
 * @c: character to look for
 *
 * Return: pointer to the first occurrence of @c
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
		if (*s == c)
			return (s);

	if (*s == c)
		return (s);

	return (NULL);
}
