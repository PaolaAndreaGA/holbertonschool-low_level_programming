#include "holberton.h"
/**
 * times_table - prints the tables of 0 to 9
 *
 * Return: Void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		for (b = 1; b <= 9; b++)
		{
			_putchar(' ');
			if (a * b < 10)
			{
				_putchar(' ');
				_putchar(a * b  + '0');
			}
			else
			{
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
