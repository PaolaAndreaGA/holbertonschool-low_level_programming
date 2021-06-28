#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 *@s: variable
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{

	int l = 0;

	while (s[l] != '\0')
	{

		l++;

	}

	return (l);
}
