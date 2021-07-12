#include "holberton.h"
#include "stdio.h"
/**
 *is_prime_number - returns 1 if the input integer is a prime number.
 *@n: variable
 *Return: zero or one
 */

int is_prime_number(int n)

{
	if (n <= 0)
	{
		return (0);
	}

	if (n == 0 || n == 1)

	{
		return (0);
	}

	if (n == 2 || n == 3 || n == 5)
	{
		return (1);
	}

	if (n > 2)
	{
		return (primoaux(n, 1));
	}

	return (0);
}

/**
 *primoaux - returns 1 if the input integer is a prime number.
 *@n: variable
 *Return: zero or one
 */

int primoaux(int n)
{

	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}

	else
	{
		return (1);
	}
	return (0);

}
