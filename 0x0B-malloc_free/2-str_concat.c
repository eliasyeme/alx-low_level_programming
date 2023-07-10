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

	int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	s = (char *) malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (k = 0; k < j; k++)
		s[i++] = s2[k];

	s[i] = '\0';

	return (s);
}
