#include "main.h"

/**
	* free_grid - free 2D array
	* @grid: input memory
	* @height: height of input memory
	*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
