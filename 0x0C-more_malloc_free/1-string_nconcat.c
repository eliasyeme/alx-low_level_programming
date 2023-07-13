#include "main.h"

/**
	* string_nconcat - concatenate strings to nth byte
	*	of a second string
	* @s1: first string
	* @s2: second string
	* @n: nth byte
	*
	* Return: pointer to concatnated string
	*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n == 0)
		return (s1);

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	s = malloc(sizeof(*s) * (len1 + len2));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (i = len1; i < (len1 + len2); i++)
		s[i] = s2[i - len1];

	return (s);
}
