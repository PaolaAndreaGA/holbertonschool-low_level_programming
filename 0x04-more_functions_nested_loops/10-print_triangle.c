#include "holberton.h"

/**
 * print_triangle -draw a triangle.
 * @n : number #
 * Return: Always 0.
 */
void print_triangle(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y < n - x - 1)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
