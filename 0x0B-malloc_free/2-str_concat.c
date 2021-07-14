#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1:str.
 * @s2:str
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x = 0, y = 0;
	char *z;

	if (s1)
	{
		for (x = 0; s1[x]; x++)
			;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		for (y = 0; s2[y]; y++)
			;
	}
	else
	{
		s2 = "";
	}

	n =  malloc(sizeof(char) * (x + y + 1));

	if (!z)
		return ('\0');


	if (s1)
	{
		for (x = 0; s1[x]; x++)
			z[x] = s1[x];
	}
	if (s2)
	{
		for (si2 = 0; s2[y]; y++)
			n[x + y] = s2[y];
	}
	n[x + y] = '\0';
	return (n);
}
