#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: variable
 *Return: value function
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if  (n == 0)

	{
		return (-1);
	}

	if  (n == 1)

	{
		return (1);
	}

	if (n > 1)
	{

		return (_sqrt_aux(n, 1));
	}
	return (0);
}

/**
 *_sqrt_aux - sqrt_recursion auxiliar.
 *@n: variable
 *@a; variable
 *Return: value function
 */

int _sqrt_aux(int n, int a)

{
	if (a * a == n)
	{
		return  (a);
	}

	if (n > (a * a))
	{
		return (_sqrt_aux(n, a + 1));
	}

	if (n < a * a)
	{

		return  (-1);
	}

	return (0);
}
