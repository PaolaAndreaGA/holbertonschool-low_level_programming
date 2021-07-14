#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional
 * @width:string.
 * @height:string
 * Return: string o null
 */


int **alloc_grid(int width, int height)
{
	int x, y;
	int **m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);
		if (m[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(m[y]);
			}
			free(m);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			m[x][y] = 0;
		}
	}
	return (m);
}
