#include "holberton.h"
/**
 *print_square - prints squares
 *@size: numeral
 *
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
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
