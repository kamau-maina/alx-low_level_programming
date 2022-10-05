/*
 * File: 3-alloc_grid .
 * Auth: Kamau Maina .
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional integers aaray.
 * @width: the width of the grid.
 * @height: height of the grid.
 * Return: pointer to a 2 dim array.
 *	   NULL on failure.
 *	   NULL if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}

		for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
