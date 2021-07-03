#include "holberton.h"
/**
 *leet - function that encodes a string
 *@str: string
 * Return: str
 */

char *leet(char *str)
{

	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	int x, y;


	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{

			if (let[y] == str[x])
			{
				str[x] = num[y];
			}
		}
	}

	return (str);
}
