#include "holberton.h"
/**
 *print_diagonal - prints diagonal lines
 *@n: space number
 *return: Always 0.
 */
void print_diagonal(int n)
{
	int m;
	int o;

	if (n <= 0)

		_putchar('\n');
	for (m = 1; m <= n; m++)
	{
		for (o = 1; o < m; o++)
		{
			if (m > 1 && o > 1)
				_putchar(' ');

		}
			_putchar('\\');
			_putchar('\n');
	}
}
