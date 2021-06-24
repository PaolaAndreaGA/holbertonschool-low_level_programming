#include "holberton.h"
#include <stdio.h>
/**
 *_isdigit - function that checks for a digit (0 through 9).
 *@c: variable.
 *Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
