#include "holberton.h"
/**
 *  _strstr - locates a substring.
 * @haystack: principal string
 * @needle: substring
 * Return:  pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *comi = haystack;
		char *fin = needle;

		while (*fin == *comi && *fin != '\0'
		       && *comi != '\0')
		{
			comi++;
			fin++;
		}
		if (!*fin == '\0')
			return (comi);
		haystack = comi + 1;
	}
	return ('\0');
}
