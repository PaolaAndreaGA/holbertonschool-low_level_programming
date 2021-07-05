#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill
 *
 * Return: pointer to memory area s
 */



char *_memset(char *s, char b, unsigned int n)

{

	unsigned int x = 0;

	while (x < n)
	{
		x++;
	s[x] = b;

	return (s);
	}
}
