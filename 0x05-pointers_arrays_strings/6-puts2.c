#include "holberton.h"
#include <stdio.h>
/**
 *puts2 - prints every other character of a string, starting with first charact
 *@str: variable character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	int x;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
			x = str[c];
		_putchar(x);
	}
	_putchar('\n');
}
