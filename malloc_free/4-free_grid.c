#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* free_grid - frees a 2 dimensional grid
* @grid: int
* @height: int
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
