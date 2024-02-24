#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: 2 dimensional grid
 * @height: grid height dimension
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
