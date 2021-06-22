#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: stores the number that must be evaluated to obtain the last digit
 *
 *Return: 0.
 *
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)

		n = -n;

			_putchar(n + '0');
	return (n);
}
