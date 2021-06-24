#include "holberton.h"
/**
 *print_line - draw a line.
 *@n:line number
 *
 */
void print_line(int n)
{
	int m;
	for (m = 0; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
