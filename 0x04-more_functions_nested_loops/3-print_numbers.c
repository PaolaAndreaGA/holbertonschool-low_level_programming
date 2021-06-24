#include "holberton.h"
/**
 *print_numbers -  function that prints the numbers, from 0 to 9
 *
 *return: Always 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
