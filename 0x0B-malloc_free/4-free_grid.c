#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* free_grid - function that frees a 2 dimensional grid
* @grid: grid whose memory will be freed
* @height: height of the bi array
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
