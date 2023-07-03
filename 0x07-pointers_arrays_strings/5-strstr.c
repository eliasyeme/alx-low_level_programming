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
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			else if (!needle[j + 1])
				return (&haystack[i]);
		}
	}

	return (NULL);
}
