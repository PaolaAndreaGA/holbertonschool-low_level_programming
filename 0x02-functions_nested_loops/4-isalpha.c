#include "holberton.h"
/**
 * _isalpha - this c program checks for lowercase or uppercase character.
 * @c:Number to pass to _isalpha function.
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
