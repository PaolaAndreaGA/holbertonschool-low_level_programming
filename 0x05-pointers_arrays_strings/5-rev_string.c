#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 *@s: variable
 * Return: Always 0.
 */

void rev_string(char *s)
{

	int c = 0;
	int l = 0;
	char prov;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c = c - 1; l < c ; l++)
	{
		prov = s[c];
		s[c] = s[l];
		s[l] = prov;
		c--;
	}

}
