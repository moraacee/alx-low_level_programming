#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a DAM space
 * @grid: The space to be freed
 * @height: The size of the pointer space
 *
 * Return: Null void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
