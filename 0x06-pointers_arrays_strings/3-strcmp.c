#include "holberton.h"
#include <stdio.h>

/**
 *_strcmp - function that copies a string
 *@s1: string
 *@s2: string
 *
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{

	int x = 0;
	int y = 0;


	while ((s1[x] != '\0' && s2[y] != '\0') && s1[x] == s2[y])
	{
		x++;
		y++;
	}


	if (s1[x] == s2[y])

	{
		return (0);
	}

	else

	{
		return (s1[x] - s2[y]);
	}
}
