#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: constant parameters number
 *Return: add result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s, value;

	if (n != 0)
	{

	va_list param;
		va_start(param, n);
	s = 0;

	for (i = 0; i < n; ++i)
	{
		value = va_arg(param, unsigned int);
		s += value;
	}

	va_end(param);
	return (s);
	}

	else
	{
		return (0);
	}
}
