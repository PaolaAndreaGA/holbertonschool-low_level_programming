#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator: constant parameters number
 *@n: parameters number
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *s;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", s);

		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(str);
	printf("\n");

}
