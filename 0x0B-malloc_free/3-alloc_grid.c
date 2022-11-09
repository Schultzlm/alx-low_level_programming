#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: the height input.
 * Return: pointer to dim array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (null);
	}

	grid = malloc(sizeof(int *) * height);/*malloc*/

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = i -1 >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; j < width; j++)
	grid[i][j] = 0;
	return (grid);
}
