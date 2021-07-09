#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 *@n: variable
 *Return: value function
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	if (n < 0)
	{
		return (-1);
	}
	return (0);
}
