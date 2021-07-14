#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup-  returns a pointer to a newly allocated space in memory.
 * @str: paramater array size
 * Return: A pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *y;
	unsigned int x = 0;

	if (str)
	{
		while (str[x++])
		{
			;
		}

		y = malloc(sizeof(char) * x);

		if (y)
		{
			while (x--)
			{
				y[x] = str[x];
			}

			return (y);
		}
	}
	return (NULL);
}
