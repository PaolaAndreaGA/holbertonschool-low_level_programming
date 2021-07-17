#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat- function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: variable
 *Return: a pointer to the allocated memory
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *prov;
	unsigned int i, j;

	prov = "";
	if (s1 == NULL)
		s1 = prov;
	if (s2 == NULL)
		s2 = prov;
	for (i = 0; s1[i] != '\0'; i++)
		;
	ptr = malloc((i + (n * sizeof(char) + 1)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
