#include "holberton.h"
/**
 * _islower - this c program checks for lowercase character.
 * @c: is the variable that takes the value of the letter.
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
