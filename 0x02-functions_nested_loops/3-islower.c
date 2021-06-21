#include "holberton.h"
/**
 *_islower - this c program checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c);
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
