#include "holberton.h"
/**
 *more_numbers - prints the numbers of 0 to 14, 10 times
 *return: Always 0.
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = '0'; y <= '14'; y++)
		{
			_putchar(y + '0');
			_putchar('\n');
		}
	}
}