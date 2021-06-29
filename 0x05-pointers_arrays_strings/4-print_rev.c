#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *@s: variable character
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c = 0;

	while (c[s] != '\0')
	{

		_putchar(c[s]);
		c++;
	}
	_putchar('\n');
}
