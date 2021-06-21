#include "holberton.h"
/**
 * _isalpha - this c program checks for lowercase or uppercase character.
 *
 * Return: Always 0.
 */
int _isalpha(int c);
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
