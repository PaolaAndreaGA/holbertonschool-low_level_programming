#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string
 *@str: string
 * Return: string with char
 */

char *cap_string(char *str)
{

	int x, y;

	char points[] = " \t\n,;.!?\"(){}";

	if (str == 0)
		return (0);

	if (str[0] >= 'a' && str[0] <=  'z')
	{
		str[0] = str[0] - 32;
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; points[y] != '\0'; y++)
		{
			if (str[x] == points[y])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z' && str[x + 1] != '\0')
				{
					str[x + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
