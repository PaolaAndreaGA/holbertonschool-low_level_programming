#include "holberton.h"
#include <stdio.h>
/**
 *puts2 - prints every other character of a string, starting with first charact
 *@str: variable character
 * Return: Always 0.
 */
void puts2(char *str)
{

	int c = 0;
	int x;

	while (str[c] != '\0')
	{
		c++;

		if (c % 2 == 0)
		{
			_putchar(x);
			x = str[c];

		}
	}

	_putchar('\n');
}
