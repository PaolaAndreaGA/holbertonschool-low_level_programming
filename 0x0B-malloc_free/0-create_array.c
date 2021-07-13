#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
* @size: paramater array size
 * @c: array
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	unsigned int x;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));
	
	if (a == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		a[x] = c;

		return (a);
	}

	return (0);
}
	
