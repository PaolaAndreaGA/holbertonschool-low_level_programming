#include "holberton.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: direct parameter
 * @accept: form a string
 * Return: number bytes in the initial segment consist only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}
	}
	return (x);
}
