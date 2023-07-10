#include "main.h"

/**
	* alloc_grid - 2D integer array
	* @width: width
	* @height: height
	*
	* Return: pointer to the array
	*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int **) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
