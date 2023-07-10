#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: 2 dimensional grid
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
