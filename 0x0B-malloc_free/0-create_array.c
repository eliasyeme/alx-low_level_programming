#include "main.h"

/**
	* create_array - create array and initialize
	* with a specfic char
	* @size: size of the array
	* @c: character to initialize with
	*
	* Return: pointer to initialized array or
	* NULL if size is 0
	*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);

	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}
	else
	{
		return (NULL);
	}

	return (s);
}
