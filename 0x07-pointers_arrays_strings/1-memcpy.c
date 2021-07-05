#include "holberton.h"
/**
 * _memcpy -  that copies memory area.
 * 
 * @src: source  to copy
 * @dest: paramater for destination  to
 * @n:bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while ( x < n)
	{
		dest[i] = src[i];
		x++;

	}
	return (dest);
}
