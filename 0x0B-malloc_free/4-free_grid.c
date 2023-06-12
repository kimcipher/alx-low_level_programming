#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array previously created by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
