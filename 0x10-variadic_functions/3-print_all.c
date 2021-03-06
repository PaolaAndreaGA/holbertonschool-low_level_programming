#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print type char
 * @c: parameters number
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - Prints type integers
 * @i: parameters number
 */

void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - Prints type float.
 * @f: parameters number
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Prints strings.
 *@s: parameters number
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil)
 */

void print_all(const char *const format, ...)
{
	print_f f_array[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list n;
	unsigned int i = 0, j;
	char *separator = "";

	va_start(n, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (f_array[j].tip != NULL)
		{
			if (*(f_array[j].tip) == format[i])
			{
				printf("%s", separator);
				f_array[j].prinfun(n);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(n);
	printf("\n");
}



