
#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 * @s: string that locates the first occurrence
 * @accept: string
 * Return: pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{

		b = 0;

		for (c = 0; accept[c]; c++)
		{

			if (s[a] == accept[c])
			{
				b = 1;
			}
		}

		c = 0;
		if (b == 1)
		{
			return (s + a);

			a++;
		}
	}
	return (0);
}
