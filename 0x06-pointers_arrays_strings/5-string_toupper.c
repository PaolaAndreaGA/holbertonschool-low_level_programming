#include "holberton.h"
#include <stdio.h>

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: pointer
 * Return: string with char
 */

char *string_toupper(char *str)
{
	int x = 0;

	if (str == 0)
		return (0);


	for (x = 0; str[x]; x++)
	{

		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
}

	return (str);
}

