#include "holberton.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: char variable
 * @b: char variable
 * @n: interger variable
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int x = 0;

	while (x < n)

		s[x] = b;
	x++;

	return (s);
}
