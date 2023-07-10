#include "main.h"

/**
	* _strdup - duplicate string
	* @str: input string
	*
	* Return: pointer to duplicated string
	*/
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = (char *) malloc(sizeof(char) * (i + 1));

	if (s != NULL)
	{
		for (i = 0; str[i]; i++)
		{
			s[i] = str[i];
		}
		s[i + 1] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (s);
}
