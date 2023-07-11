#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid- function that frees a 2 dimensional grid
 * @grid: input
 * @height: input
 * Return: always successful (0)
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
