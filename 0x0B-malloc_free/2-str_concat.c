#include "main.h"

/**
	* str_concat - concatenate two string
	* @s1: first string input
	* @s2: second string input
	*
	* Return: pointer to concatenated string
	*/
char *str_concat(char *s1, char *s2)
{
	char *s;

	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i]; i++)
		len++;

	for (i = 0; s1[i]; i++)
		len++;

	s = (char *) malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (; s[i]; i++, j++)
		s[i] = s2[j];

	return (s);
}
