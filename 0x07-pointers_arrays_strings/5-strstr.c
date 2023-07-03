#include "main.h"

/**
 * _strstr - locate substring from 'needle' in 'haystack'
 * @haystack: input string
 * @needle: substring to look for
 *
 * Return: pointer to found substring NULL if non found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*(haystack + i) != needle[i])
				break;
			else if (!needle[i + 1])
				return (haystack);
		}
	}

	return (NULL);
}
