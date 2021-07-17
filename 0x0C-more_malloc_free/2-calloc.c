#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: size
 *Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *rtp;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0) /* verifica nmemb y size igual 0 retorna nulo*/
	{
		return (NULL);
	}

	rtp = malloc(nmemb * size);

	if (rtp == NULL)
	{
		return (NULL);
	}

	while (x < nmemb * size)
	{
		rtp[x] = 0; /*asigna 0 al campo del puntero*/
		x++;
	}

	return (rtp);
}
