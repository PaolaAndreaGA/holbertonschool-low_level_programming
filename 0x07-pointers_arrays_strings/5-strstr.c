#include "holberton.h"
/**
 *  _strstr - locates a substring.
 * @haystack: principal string
 * @needle: substring
 * Return:  pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && (haystack[i] == needle[0]); j++)
		{
			if (haystack[i + j] == needle[j])
			{
				;
			}

			else
			{
				break;
			}
		}

		if (needle[j])
		{

			j = 0;

		}

		else
		{
			return (haystack + i);
		}
	}

	return (0);
}
