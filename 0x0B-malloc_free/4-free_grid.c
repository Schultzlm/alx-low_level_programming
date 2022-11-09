#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: the width of grid
 * @height: height dimension of grid
 * Description: Frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
