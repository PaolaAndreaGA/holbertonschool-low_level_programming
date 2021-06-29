#include "holberton.h"
#include <stdio.h>
/**
 *puts_half -  prints half of a string, followed by a new line
 *@str: variable character
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int c;
	int x;
	int l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			x = str[c];
			l = x / 2;
			_putchar(l);
		}
		else
		{
			x = str[c];
			l = (x - 1) / 2;
			_putchar(l);
		}
		_putchar('\n');
	}

}
