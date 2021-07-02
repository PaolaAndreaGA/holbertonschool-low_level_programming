#include "holberton.h"
#include <stdio.h>

/**
 *_strncpy - function that copies a string
 *@dest: string
 *@src: string
 *@n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)

{

	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}




