#include "holberton.h"
/**
 * _strlen_recursion - return a string in reverse.
 *@s: variable
 *Return: value function
 */

int _strlen_recursion(char *s)
{


	if (*s != '\0')

	{
		return (1 + _strlen_recursion(s + 1));
	}

	else
	{
		return (0);
	}

}
