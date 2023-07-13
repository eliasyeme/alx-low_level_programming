#include "main.h"

/**
	* array_range - create array of integers
	* @min: from
	* @max: to
	*
	* Return: pointer to array
	*/
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;

	return (p);
}
