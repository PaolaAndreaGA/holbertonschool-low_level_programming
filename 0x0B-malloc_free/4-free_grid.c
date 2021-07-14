#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid previously
 * @height:string
 * @grid: pointer
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}

	free(grid);
}
