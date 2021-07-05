#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: direct parameter
 * @c: form a string
 * Return: c or null
 */

char *_strchr(char *s, char c)
{

	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	return (0);
}
