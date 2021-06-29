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
	int k;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = c - 1; k >= 0; k--)
	{

		_putchar(s[k]);

	}
	_putchar('\n');
}
