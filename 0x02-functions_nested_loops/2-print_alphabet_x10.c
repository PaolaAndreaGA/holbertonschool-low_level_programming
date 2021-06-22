#include "holberton.h"
/**
 * print_alphabet_x10 - this c program prints the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char b, k;
for (k = 0; k < 10; k++)
{
for (b = 'a'; b <= 'z'; b++)

_putchar(b);
_putchar('\n');
}
}
