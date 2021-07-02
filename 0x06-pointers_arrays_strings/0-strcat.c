 #include "holberton.h"
  #include <stdio.h>

/**
 *_strcat - function that concatenates two strings.
 *@dest: string
 *@src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')

		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}



	return (dest);

}
