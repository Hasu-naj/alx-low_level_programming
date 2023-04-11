#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: input
 * @height: input
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **grid;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			grid[x] = malloc(sizeof(**grid) * width);
			if (grid[x] == 0)
			{
				while (x--)
					free(grid[x]);
				free(grid);
				return (NULL);
			}
			for (y = 0; y < width; y++)
			{
				grid[x][y] = 0;
			}
		}
	}
	return (grid);
}
