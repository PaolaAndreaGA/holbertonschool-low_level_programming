#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: variable type
 *Return: a pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *pointr;

	if (b == 0)
	{
		return (NULL);

	}

	pointr = malloc(b);

	if (pointr == NULL)
	{
		exit(98);
	}

	return (pointr);
}
