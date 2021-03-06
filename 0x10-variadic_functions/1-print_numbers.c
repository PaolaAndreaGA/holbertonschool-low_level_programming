
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers- function that prints numbers, followed by a new line.
 *@separator: constant parameters number
 *@n: parameter number
 *Return: add result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{

		s = va_arg(num, int);


			printf("%d", s);

			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
	}

	printf("\n");
	va_end(num);

}
