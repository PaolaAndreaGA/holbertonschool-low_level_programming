#include "holberton.h"
/**
 * _pow_recursion - returns the factorial of a given number.
 *@x: variable
 *@y: variable
 *Return: value function
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
