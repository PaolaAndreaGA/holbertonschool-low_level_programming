#include "holberton.h"
#include <stdio.h>

/**
 * _abs - C program that computes the absolute value of an integer.
 * @r: is the number that is evaluated to obtain the absolute value
 * Return: int
 */
int _abs(int r)
{

	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
