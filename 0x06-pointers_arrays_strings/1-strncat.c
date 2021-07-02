 #include "holberton.h"
 #include <stdio.h>

/**
 *_strncat - function that concatenates two strings.
 *@dest: string
 *@src: string
 *@n: integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

	int x = 0;
	int y;

	while (dest[x] != '\0')

		x++;

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x] = src[y];
		x++;
	}

	return (dest);
}
