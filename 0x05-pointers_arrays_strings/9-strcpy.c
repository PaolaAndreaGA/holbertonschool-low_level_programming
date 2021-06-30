#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - Copies the string pointed to by src, including the terminating null
 *@dest: variable character
 *@src: source to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{

		*(dest + x) = *(src + x);
		x++;
	}

	*(dest + x) = '\0';
	return (dest);

}
