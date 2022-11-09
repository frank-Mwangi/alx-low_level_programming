#include "main.h"

/**
 * alloc_grid - points to a 2D array of integers
 *
 * @width: matrix width
 * @height: matrix height
 * Return: 0 success, 1 otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j, *grid, *c;

	if (width == 0)
		return (NULL);
	if (height == 0)
		return (NULL);
	c = malloc(sizeof(int) * width * height);
	if (c == 0)
		return (1);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			c = grid[i][j];
		}
	}
	return (c);
}

