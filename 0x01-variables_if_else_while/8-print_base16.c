#include <stdio.h>
/**
 * main -  This a C program that prints the last digit.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
char c;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
