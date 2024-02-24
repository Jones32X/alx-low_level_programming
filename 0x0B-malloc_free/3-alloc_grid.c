#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: points to the dim 2 array
 */

int **alloc_grid(int width, int height)
{
	int **meep;
	int v;
	int w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	meep = malloc(sizeof(int *) * height);

	if (meep == NULL)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		meep[v] = malloc(sizeof(int) * width);

		if (meep[v] == NULL)
		{
			for (; v >= 0; v--)
				free(meep[v]);
			free(meep);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (w = 0; w < width; w++)
			meep[v][w] = 0;
	}
	return (meep);
}
