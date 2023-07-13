#include "main.h"

/**
	* _calloc - allocate memory for an array using malloc
	* @nmemb: number of element
	* @size: byte size
	*
	* Return: pointer to allocated memory or NULL if either nmemb
	* or size is 0 and if malloc fails
	*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
