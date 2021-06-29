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
	int l;
	char x;

	for (c = 0; str[c] != 0; c++)
	{

	}

	if (c % 2 == 0)
	{
		for ((l = c / 2); str[l] != 0; l++)
		{

			x = str[l];
			_putchar(x);
		}
	}
	else
	{
		for ((l = (c - 1) / 2); str[l] != 0; l++)
		{
			x = str[l];
			_putchar(x);
		}
	}
	_putchar('\n');
}
