#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 *@str: variable
 * Return: Always 0.
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{

	c++;

	_putchar(str[c]);
	}
_putchar('\n');
}
